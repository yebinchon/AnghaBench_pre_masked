
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct befs_sb_info {int * nls; void* indices; void* root_dir; void* log_end; void* log_start; void* log_blocks; void* flags; void* num_ags; void* ag_shift; void* blocks_per_ag; void* inode_size; void* used_blocks; void* num_blocks; void* block_shift; void* block_size; void* magic3; void* magic2; void* magic1; int byte_order; } ;
struct TYPE_3__ {scalar_t__ fs_byte_order; int indices; int root_dir; int log_end; int log_start; int log_blocks; int flags; int num_ags; int ag_shift; int blocks_per_ag; int inode_size; int used_blocks; int num_blocks; int block_shift; int block_size; int magic3; int magic2; int magic1; } ;
typedef TYPE_1__ befs_super_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct befs_sb_info* FUNC_0 (struct super_block*) ;
 void* FUNC_1 (struct super_block*,int ) ;
 void* FUNC_2 (struct super_block*,int ) ;
 void* FUNC_3 (struct super_block*,int ) ;

int
FUNC_4(struct super_block *VAR_5, befs_super_block *VAR_6)
{
 struct befs_sb_info *VAR_7 = FUNC_0(VAR_5);


 if (VAR_6->fs_byte_order == VAR_1)
  VAR_7->byte_order = VAR_3;
 else if (VAR_6->fs_byte_order == VAR_0)
  VAR_7->byte_order = VAR_2;

 VAR_7->magic1 = FUNC_1(VAR_5, VAR_6->magic1);
 VAR_7->magic2 = FUNC_1(VAR_5, VAR_6->magic2);
 VAR_7->magic3 = FUNC_1(VAR_5, VAR_6->magic3);
 VAR_7->block_size = FUNC_1(VAR_5, VAR_6->block_size);
 VAR_7->block_shift = FUNC_1(VAR_5, VAR_6->block_shift);
 VAR_7->num_blocks = FUNC_2(VAR_5, VAR_6->num_blocks);
 VAR_7->used_blocks = FUNC_2(VAR_5, VAR_6->used_blocks);
 VAR_7->inode_size = FUNC_1(VAR_5, VAR_6->inode_size);

 VAR_7->blocks_per_ag = FUNC_1(VAR_5, VAR_6->blocks_per_ag);
 VAR_7->ag_shift = FUNC_1(VAR_5, VAR_6->ag_shift);
 VAR_7->num_ags = FUNC_1(VAR_5, VAR_6->num_ags);

 VAR_7->flags = FUNC_1(VAR_5, VAR_6->flags);

 VAR_7->log_blocks = FUNC_3(VAR_5, VAR_6->log_blocks);
 VAR_7->log_start = FUNC_2(VAR_5, VAR_6->log_start);
 VAR_7->log_end = FUNC_2(VAR_5, VAR_6->log_end);

 VAR_7->root_dir = FUNC_3(VAR_5, VAR_6->root_dir);
 VAR_7->indices = FUNC_3(VAR_5, VAR_6->indices);
 VAR_7->nls = ((void*)0);

 return VAR_4;
}
