
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int udf_pblk_t ;
struct super_block {scalar_t__ s_blocksize; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_3__ {int logicalBlockNum; int partitionReferenceNum; } ;
struct extent_position {scalar_t__ offset; TYPE_1__ block; } ;
struct TYPE_4__ {scalar_t__ i_alloc_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int ,int) ;
 int FUNC_2 (struct super_block*,int *,int ,int ,int*) ;
 int FUNC_3 (struct inode*,int ,struct extent_position*) ;

int FUNC_4(struct inode *VAR_4, struct extent_position *VAR_5,
   struct kernel_lb_addr *VAR_6, uint32_t VAR_7, int VAR_8)
{
 int VAR_9;
 struct super_block *VAR_10 = VAR_4->i_sb;

 if (FUNC_0(VAR_4)->i_alloc_type == VAR_3)
  VAR_9 = sizeof(struct short_ad);
 else if (FUNC_0(VAR_4)->i_alloc_type == VAR_2)
  VAR_9 = sizeof(struct long_ad);
 else
  return -VAR_0;

 if (VAR_5->offset + (2 * VAR_9) > VAR_10->s_blocksize) {
  int VAR_11;
  udf_pblk_t VAR_12;

  VAR_12 = FUNC_2(VAR_10, ((void*)0),
       VAR_5->block.partitionReferenceNum,
       VAR_5->block.logicalBlockNum, &VAR_11);
  if (!VAR_12)
   return -VAR_1;

  VAR_11 = FUNC_3(VAR_4, VAR_12, VAR_5);
  if (VAR_11)
   return VAR_11;
 }

 return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
