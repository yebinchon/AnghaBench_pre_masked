
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int udf_pblk_t ;
struct tag {int dummy; } ;
struct super_block {int s_blocksize; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct kernel_lb_addr {int logicalBlockNum; int partitionReferenceNum; } ;
struct inode {struct super_block* i_sb; } ;
struct extent_position {int offset; struct buffer_head* bh; struct kernel_lb_addr block; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct allocExtDesc {void* lengthAllocDescs; void* previousAllocExtLocation; } ;
struct TYPE_4__ {scalar_t__ i_alloc_type; } ;
struct TYPE_3__ {int s_udfrev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct super_block*,int ) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int) ;
 int FUNC_4 (struct buffer_head*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*,struct inode*) ;
 int FUNC_8 (scalar_t__,int,int) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int*,int ) ;
 int FUNC_11 (struct super_block*,struct kernel_lb_addr*,int ) ;
 int FUNC_12 (scalar_t__,int ,int,int,int ,int) ;
 struct buffer_head* FUNC_13 (struct super_block*,int ) ;
 int FUNC_14 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int ) ;
 int FUNC_15 (struct buffer_head*) ;

int FUNC_16(struct inode *VAR_6, udf_pblk_t VAR_7,
       struct extent_position *VAR_8)
{
 struct super_block *VAR_9 = VAR_6->i_sb;
 struct buffer_head *VAR_10;
 struct allocExtDesc *VAR_11;
 struct extent_position VAR_12;
 struct kernel_lb_addr VAR_13;
 int VAR_14, VAR_15;

 if (FUNC_0(VAR_6)->i_alloc_type == VAR_3)
  VAR_15 = sizeof(struct short_ad);
 else if (FUNC_0(VAR_6)->i_alloc_type == VAR_2)
  VAR_15 = sizeof(struct long_ad);
 else
  return -VAR_0;

 VAR_13.logicalBlockNum = VAR_7;
 VAR_13.partitionReferenceNum = VAR_8->block.partitionReferenceNum;

 VAR_10 = FUNC_13(VAR_9, FUNC_11(VAR_9, &VAR_13, 0));
 if (!VAR_10)
  return -VAR_0;
 FUNC_6(VAR_10);
 FUNC_8(VAR_10->b_data, 0x00, VAR_9->s_blocksize);
 FUNC_9(VAR_10);
 FUNC_15(VAR_10);
 FUNC_7(VAR_10, VAR_6);

 VAR_11 = (struct allocExtDesc *)(VAR_10->b_data);
 if (!FUNC_1(VAR_9, VAR_5)) {
  VAR_11->previousAllocExtLocation =
    FUNC_5(VAR_8->block.logicalBlockNum);
 }
 VAR_11->lengthAllocDescs = FUNC_5(0);
 if (FUNC_2(VAR_9)->s_udfrev >= 0x0200)
  VAR_14 = 3;
 else
  VAR_14 = 2;
 FUNC_12(VAR_10->b_data, VAR_4, VAR_14, 1, VAR_7,
      sizeof(struct tag));

 VAR_12.block = VAR_13;
 VAR_12.offset = sizeof(struct allocExtDesc);
 VAR_12.bh = VAR_10;





 if (VAR_8->offset + VAR_15 > VAR_9->s_blocksize) {
  struct kernel_lb_addr VAR_16;
  uint32_t VAR_17;
  int VAR_18;

  VAR_8->offset -= VAR_15;
  VAR_18 = FUNC_10(VAR_6, VAR_8, &VAR_16, &VAR_17, 0);
  VAR_17 |= ((uint32_t)VAR_18) << 30;

  FUNC_3(VAR_6, &VAR_12, &VAR_16, VAR_17, 1);
  FUNC_14(VAR_6, VAR_8, &VAR_12.block,
          VAR_9->s_blocksize | VAR_1, 0);
 } else {
  FUNC_3(VAR_6, VAR_8, &VAR_12.block,
          VAR_9->s_blocksize | VAR_1, 0);
 }

 FUNC_4(VAR_8->bh);
 *VAR_8 = VAR_12;

 return 0;
}
