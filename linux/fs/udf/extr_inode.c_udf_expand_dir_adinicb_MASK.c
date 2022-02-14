
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int udf_pblk_t ;
struct TYPE_10__ {int partitionReferenceNum; int logicalBlockNum; } ;
struct TYPE_9__ {int i_data; } ;
struct udf_inode_info {int i_lenEAttr; int i_lenAlloc; int i_lenExtents; TYPE_3__ i_location; TYPE_2__ i_ext; void* i_alloc_type; } ;
struct udf_fileident_bh {int soffset; int eoffset; struct buffer_head* ebh; struct buffer_head* sbh; } ;
struct kernel_lb_addr {int partitionReferenceNum; int logicalBlockNum; } ;
struct inode {int i_size; TYPE_4__* i_sb; } ;
struct TYPE_8__ {int tagLocation; } ;
struct fileIdentDesc {int lengthOfImpUse; scalar_t__ fileIdent; int impUse; TYPE_1__ descTag; } ;
struct extent_position {struct buffer_head* bh; int offset; TYPE_3__ block; } ;
struct buffer_head {int b_data; } ;
typedef int loff_t ;
struct TYPE_11__ {int s_blocksize; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 struct fileIdentDesc* FUNC_13 (struct inode*,int*,struct udf_fileident_bh*,struct fileIdentDesc*,int *,int *,int *,int *) ;
 int FUNC_14 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_15 (TYPE_4__*,struct inode*,int ,int ,int*) ;
 struct buffer_head* FUNC_16 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_17 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int ,scalar_t__) ;
 int FUNC_18 (struct buffer_head*) ;

struct buffer_head *FUNC_19(struct inode *VAR_4,
         udf_pblk_t *VAR_5, int *VAR_6)
{
 udf_pblk_t VAR_7;
 struct buffer_head *VAR_8 = ((void*)0);
 struct kernel_lb_addr VAR_9;
 uint8_t VAR_10;
 struct extent_position VAR_11;

 struct udf_fileident_bh VAR_12, VAR_13;
 loff_t VAR_14 = FUNC_11(VAR_4);
 int VAR_15 = FUNC_11(VAR_4) + VAR_4->i_size;
 struct fileIdentDesc VAR_16, *VAR_17, *VAR_18;
 struct udf_inode_info *VAR_19 = FUNC_0(VAR_4);

 if (FUNC_1(VAR_4->i_sb, VAR_3))
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_1;

 if (!VAR_4->i_size) {
  VAR_19->i_alloc_type = VAR_10;
  FUNC_7(VAR_4);
  return ((void*)0);
 }


 *VAR_5 = FUNC_15(VAR_4->i_sb, VAR_4,
          VAR_19->i_location.partitionReferenceNum,
          VAR_19->i_location.logicalBlockNum, VAR_6);
 if (!(*VAR_5))
  return ((void*)0);
 VAR_7 = FUNC_14(VAR_4->i_sb, *VAR_5,
      VAR_19->i_location.partitionReferenceNum,
    0);
 if (!VAR_7)
  return ((void*)0);
 VAR_8 = FUNC_16(VAR_4->i_sb, VAR_7);
 if (!VAR_8)
  return ((void*)0);
 FUNC_5(VAR_8);
 FUNC_8(VAR_8->b_data, 0x00, VAR_4->i_sb->s_blocksize);
 FUNC_9(VAR_8);
 FUNC_18(VAR_8);
 FUNC_6(VAR_8, VAR_4);

 VAR_12.soffset = VAR_12.eoffset =
   VAR_14 & (VAR_4->i_sb->s_blocksize - 1);
 VAR_12.sbh = VAR_12.ebh = ((void*)0);
 VAR_13.soffset = VAR_13.eoffset = 0;
 VAR_13.sbh = VAR_13.ebh = VAR_8;
 while (VAR_14 < VAR_15) {
  VAR_19->i_alloc_type = VAR_0;
  VAR_17 = FUNC_13(VAR_4, &VAR_14, &VAR_12, &VAR_16, ((void*)0),
      ((void*)0), ((void*)0), ((void*)0));
  if (!VAR_17) {
   FUNC_2(VAR_8);
   return ((void*)0);
  }
  VAR_19->i_alloc_type = VAR_10;
  VAR_17->descTag.tagLocation = FUNC_3(*VAR_5);
  VAR_13.soffset = VAR_13.eoffset;
  VAR_13.eoffset += (VAR_12.eoffset - VAR_12.soffset);
  VAR_18 = (struct fileIdentDesc *)(VAR_8->b_data + VAR_13.soffset);
  if (FUNC_17(VAR_4, VAR_17, VAR_18, &VAR_13, VAR_17->impUse,
     VAR_17->fileIdent +
     FUNC_4(VAR_17->lengthOfImpUse))) {
   VAR_19->i_alloc_type = VAR_0;
   FUNC_2(VAR_8);
   return ((void*)0);
  }
 }
 FUNC_6(VAR_8, VAR_4);

 FUNC_8(VAR_19->i_ext.i_data + VAR_19->i_lenEAttr, 0,
  VAR_19->i_lenAlloc);
 VAR_19->i_lenAlloc = 0;
 VAR_9.logicalBlockNum = *VAR_5;
 VAR_9.partitionReferenceNum =
    VAR_19->i_location.partitionReferenceNum;
 VAR_19->i_lenExtents = VAR_4->i_size;
 VAR_11.bh = ((void*)0);
 VAR_11.block = VAR_19->i_location;
 VAR_11.offset = FUNC_12(VAR_4);
 FUNC_10(VAR_4, &VAR_11, &VAR_9, VAR_4->i_size, 0);


 FUNC_2(VAR_11.bh);
 FUNC_7(VAR_4);
 return VAR_8;
}
