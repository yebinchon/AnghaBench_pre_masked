
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ udf_pblk_t ;
struct TYPE_12__ {int * i_data; } ;
struct TYPE_11__ {int partitionReferenceNum; int logicalBlockNum; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_lenExtents; int i_lenEAttr; int i_lenAlloc; int i_data_sem; TYPE_3__ i_ext; TYPE_2__ i_location; } ;
struct super_block {int s_blocksize; } ;
struct pathComponent {int componentType; int lengthComponentIdent; int componentIdent; scalar_t__ componentFileVersionNum; } ;
struct kernel_lb_addr {int partitionReferenceNum; scalar_t__ logicalBlockNum; } ;
struct TYPE_10__ {int * a_ops; } ;
struct inode {int i_size; int * i_op; TYPE_1__ i_data; struct super_block* i_sb; } ;
struct extent_position {TYPE_4__* bh; int offset; TYPE_2__ block; } ;
struct dentry {int dummy; } ;
struct TYPE_13__ {int * b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_4 ;
 struct udf_inode_info* FUNC_2 (struct inode*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (unsigned char*) ;
 unsigned char* FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ,unsigned char*,int) ;
 int FUNC_14 (int *,int,int) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int ) ;
 int FUNC_17 (struct dentry*,struct inode*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;
 scalar_t__ FUNC_20 (struct super_block*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_21 (struct super_block*,struct inode*,int ,int ,int*) ;
 struct inode* FUNC_22 (struct inode*,int) ;
 int FUNC_23 (struct super_block*,char const*,int,unsigned char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_24 (struct super_block*,scalar_t__) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (TYPE_4__*) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static int FUNC_28(struct inode *VAR_8, struct dentry *VAR_9,
         const char *VAR_10)
{
 struct inode *VAR_11 = FUNC_22(VAR_8, VAR_4 | 0777);
 struct pathComponent *VAR_12;
 const char *VAR_13;
 struct extent_position VAR_14 = {};
 int VAR_15, VAR_16 = 0;
 uint8_t *VAR_17;
 int VAR_18;
 udf_pblk_t VAR_19;
 unsigned char *VAR_20 = ((void*)0);
 int VAR_21;
 struct udf_inode_info *VAR_22;
 struct super_block *VAR_23 = VAR_8->i_sb;

 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_22 = FUNC_2(VAR_11);
 FUNC_5(&VAR_22->i_data_sem);
 VAR_20 = FUNC_9(VAR_5, VAR_2);
 if (!VAR_20) {
  VAR_18 = -VAR_1;
  goto out_no_entry;
 }

 VAR_11->i_data.a_ops = &VAR_6;
 VAR_11->i_op = &VAR_7;
 FUNC_7(VAR_11);

 if (VAR_22->i_alloc_type != VAR_3) {
  struct kernel_lb_addr VAR_24;
  uint32_t VAR_25;

  VAR_19 = FUNC_21(VAR_23, VAR_11,
    VAR_22->i_location.partitionReferenceNum,
    VAR_22->i_location.logicalBlockNum, &VAR_18);
  if (!VAR_19)
   goto out_no_entry;
  VAR_14.block = VAR_22->i_location;
  VAR_14.offset = FUNC_19(VAR_11);
  VAR_14.bh = ((void*)0);
  VAR_24.logicalBlockNum = VAR_19;
  VAR_24.partitionReferenceNum =
    VAR_22->i_location.partitionReferenceNum;
  VAR_25 = VAR_23->s_blocksize;
  VAR_22->i_lenExtents = VAR_25;
  FUNC_16(VAR_11, &VAR_14, &VAR_24, VAR_25, 0);
  FUNC_3(VAR_14.bh);

  VAR_19 = FUNC_20(VAR_23, VAR_19,
    VAR_22->i_location.partitionReferenceNum,
    0);
  VAR_14.bh = FUNC_24(VAR_23, VAR_19);
  FUNC_10(VAR_14.bh);
  FUNC_14(VAR_14.bh->b_data, 0x00, VAR_25);
  FUNC_15(VAR_14.bh);
  FUNC_26(VAR_14.bh);
  FUNC_11(VAR_14.bh, VAR_11);
  VAR_17 = VAR_14.bh->b_data + FUNC_18(VAR_11);
 } else
  VAR_17 = VAR_22->i_ext.i_data + VAR_22->i_lenEAttr;

 VAR_15 = VAR_23->s_blocksize - FUNC_18(VAR_11);
 VAR_12 = (struct pathComponent *)VAR_17;

 if (*VAR_10 == '/') {
  do {
   VAR_10++;
  } while (*VAR_10 == '/');

  VAR_12->componentType = 1;
  VAR_12->lengthComponentIdent = 0;
  VAR_12->componentFileVersionNum = 0;
  VAR_16 += sizeof(struct pathComponent);
 }

 VAR_18 = -VAR_0;

 while (*VAR_10) {
  if (VAR_16 + sizeof(struct pathComponent) > VAR_15)
   goto out_no_entry;

  VAR_12 = (struct pathComponent *)(VAR_17 + VAR_16);

  VAR_13 = VAR_10;

  do {
   VAR_10++;
  } while (*VAR_10 && *VAR_10 != '/');

  VAR_12->componentType = 5;
  VAR_12->lengthComponentIdent = 0;
  VAR_12->componentFileVersionNum = 0;
  if (VAR_13[0] == '.') {
   if ((VAR_10 - VAR_13) == 1)
    VAR_12->componentType = 4;
   else if ((VAR_10 - VAR_13) == 2 &&
     VAR_13[1] == '.')
    VAR_12->componentType = 3;
  }

  if (VAR_12->componentType == 5) {
   VAR_21 = FUNC_23(VAR_23, VAR_13,
         VAR_10 - VAR_13,
         VAR_20, VAR_5);
   if (!VAR_21)
    goto out_no_entry;

   if (VAR_16 + sizeof(struct pathComponent) + VAR_21 >
     VAR_15)
    goto out_no_entry;
   else
    VAR_12->lengthComponentIdent = VAR_21;

   FUNC_13(VAR_12->componentIdent, VAR_20, VAR_21);
  }

  VAR_16 += sizeof(struct pathComponent) + VAR_12->lengthComponentIdent;

  if (*VAR_10) {
   do {
    VAR_10++;
   } while (*VAR_10 == '/');
  }
 }

 FUNC_3(VAR_14.bh);
 VAR_11->i_size = VAR_16;
 if (VAR_22->i_alloc_type == VAR_3)
  VAR_22->i_lenAlloc = VAR_11->i_size;
 else
  FUNC_25(VAR_11);
 FUNC_12(VAR_11);
 FUNC_27(&VAR_22->i_data_sem);

 VAR_18 = FUNC_17(VAR_9, VAR_11);
out:
 FUNC_8(VAR_20);
 return VAR_18;

out_no_entry:
 FUNC_27(&VAR_22->i_data_sem);
 FUNC_6(VAR_11);
 FUNC_4(VAR_11);
 goto out;
}
