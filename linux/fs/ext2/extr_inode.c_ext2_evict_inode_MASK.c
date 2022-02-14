
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; scalar_t__ i_blocks; scalar_t__ i_size; int i_data; int i_nlink; } ;
struct ext2_block_alloc_info {int dummy; } ;
struct TYPE_2__ {struct ext2_block_alloc_info* i_block_alloc_info; int i_dtime; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct ext2_block_alloc_info*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (struct ext2_block_alloc_info*) ;

void FUNC_19(struct inode * VAR_0)
{
 struct ext2_block_alloc_info *VAR_1;
 int VAR_2 = 0;

 if (!VAR_0->i_nlink && !FUNC_11(VAR_0)) {
  VAR_2 = 1;
  FUNC_4(VAR_0);
 } else {
  FUNC_3(VAR_0);
 }

 FUNC_17(&VAR_0->i_data);

 if (VAR_2) {
  FUNC_16(VAR_0->i_sb);

  FUNC_0(VAR_0)->i_dtime = FUNC_13();
  FUNC_14(VAR_0);
  FUNC_1(VAR_0, FUNC_9(VAR_0));

  VAR_0->i_size = 0;
  if (VAR_0->i_blocks)
   FUNC_7(VAR_0, 0);
  FUNC_8(VAR_0);
 }

 FUNC_10(VAR_0);
 FUNC_2(VAR_0);

 FUNC_5(VAR_0);
 VAR_1 = FUNC_0(VAR_0)->i_block_alloc_info;
 FUNC_0(VAR_0)->i_block_alloc_info = ((void*)0);
 if (FUNC_18(VAR_1))
  FUNC_12(VAR_1);

 if (VAR_2) {
  FUNC_6(VAR_0);
  FUNC_15(VAR_0->i_sb);
 }
}
