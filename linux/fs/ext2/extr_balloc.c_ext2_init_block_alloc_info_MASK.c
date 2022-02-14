
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct ext2_reserve_window_node {scalar_t__ rsv_alloc_hit; scalar_t__ rsv_goal_size; void* rsv_end; void* rsv_start; } ;
struct ext2_inode_info {struct ext2_block_alloc_info* i_block_alloc_info; } ;
struct ext2_block_alloc_info {scalar_t__ last_alloc_physical_block; scalar_t__ last_alloc_logical_block; struct ext2_reserve_window_node rsv_window_node; } ;


 scalar_t__ VAR_0 ;
 struct ext2_inode_info* FUNC_0 (struct inode*) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ext2_block_alloc_info* FUNC_1 (int,int ) ;
 int FUNC_2 (struct super_block*,int ) ;

void FUNC_3(struct inode *VAR_4)
{
 struct ext2_inode_info *VAR_5 = FUNC_0(VAR_4);
 struct ext2_block_alloc_info *VAR_6;
 struct super_block *VAR_7 = VAR_4->i_sb;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (VAR_6) {
  struct ext2_reserve_window_node *VAR_8 = &VAR_6->rsv_window_node;

  VAR_8->rsv_start = VAR_1;
  VAR_8->rsv_end = VAR_1;






  if (!FUNC_2(VAR_7, VAR_3))
   VAR_8->rsv_goal_size = 0;
  else
   VAR_8->rsv_goal_size = VAR_0;
  VAR_8->rsv_alloc_hit = 0;
  VAR_6->last_alloc_logical_block = 0;
  VAR_6->last_alloc_physical_block = 0;
 }
 VAR_5->i_block_alloc_info = VAR_6;
}
