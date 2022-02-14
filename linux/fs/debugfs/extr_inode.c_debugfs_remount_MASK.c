
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct debugfs_fs_info* s_fs_info; } ;
struct debugfs_fs_info {int mount_opts; } ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_0, int *VAR_1, char *VAR_2)
{
 int VAR_3;
 struct debugfs_fs_info *VAR_4 = VAR_0->s_fs_info;

 FUNC_2(VAR_0);
 VAR_3 = FUNC_1(VAR_2, &VAR_4->mount_opts);
 if (VAR_3)
  goto fail;

 FUNC_0(VAR_0);

fail:
 return VAR_3;
}
