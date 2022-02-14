
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct cramfs_sb_info* s_fs_info; } ;
struct fs_context {int dummy; } ;
struct cramfs_super {int root; } ;
struct cramfs_sb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (struct super_block*,int *) ;
 int FUNC_1 (struct super_block*,struct fs_context*,struct cramfs_super*) ;
 struct cramfs_sb_info* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_4, struct fs_context *VAR_5)
{
 struct cramfs_sb_info *VAR_6;
 struct cramfs_super VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = FUNC_2(sizeof(struct cramfs_sb_info), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_4->s_fs_info = VAR_6;


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_3[VAR_8] = -1;

 VAR_9 = FUNC_1(VAR_4, VAR_5, &VAR_7);
 if (VAR_9)
  return VAR_9;
 return FUNC_0(VAR_4, &VAR_7.root);
}
