
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int alloc_valid_block_count; int total_valid_inode_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct f2fs_sb_info *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->alloc_valid_block_count, 0, VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(&VAR_1->total_valid_inode_count, 0,
        VAR_0);
 if (VAR_2)
  FUNC_0(&VAR_1->alloc_valid_block_count);

 return VAR_2;
}
