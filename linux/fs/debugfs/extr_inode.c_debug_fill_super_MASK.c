
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_descr {char* member_0; } ;
struct super_block {struct debugfs_fs_info* s_fs_info; int * s_d_op; int * s_op; } ;
struct debugfs_fs_info {int mount_opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct super_block*) ;
 int VAR_3 ;
 int FUNC_1 (void*,int *) ;
 int VAR_4 ;
 int FUNC_2 (struct debugfs_fs_info*) ;
 struct debugfs_fs_info* FUNC_3 (int,int ) ;
 int FUNC_4 (struct super_block*,int ,struct tree_descr const*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_5, void *VAR_6, int VAR_7)
{
 static const struct tree_descr VAR_8[] = {{""}};
 struct debugfs_fs_info *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(sizeof(struct debugfs_fs_info), VAR_2);
 VAR_5->s_fs_info = VAR_9;
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto fail;
 }

 VAR_10 = FUNC_1(VAR_6, &VAR_9->mount_opts);
 if (VAR_10)
  goto fail;

 VAR_10 = FUNC_4(VAR_5, VAR_0, VAR_8);
 if (VAR_10)
  goto fail;

 VAR_5->s_op = &VAR_4;
 VAR_5->s_d_op = &VAR_3;

 FUNC_0(VAR_5);

 return 0;

fail:
 FUNC_2(VAR_9);
 VAR_5->s_fs_info = ((void*)0);
 return VAR_10;
}
