
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_descr {char* member_0; } ;
struct tracefs_fs_info {int mount_opts; } ;
struct super_block {struct tracefs_fs_info* s_fs_info; int * s_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tracefs_fs_info*) ;
 struct tracefs_fs_info* FUNC_1 (int,int ) ;
 int FUNC_2 (struct super_block*,int ,struct tree_descr const*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (void*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_4, void *VAR_5, int VAR_6)
{
 static const struct tree_descr VAR_7[] = {{""}};
 struct tracefs_fs_info *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(sizeof(struct tracefs_fs_info), VAR_1);
 VAR_4->s_fs_info = VAR_8;
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto fail;
 }

 VAR_9 = FUNC_4(VAR_5, &VAR_8->mount_opts);
 if (VAR_9)
  goto fail;

 VAR_9 = FUNC_2(VAR_4, VAR_2, VAR_7);
 if (VAR_9)
  goto fail;

 VAR_4->s_op = &VAR_3;

 FUNC_3(VAR_4);

 return 0;

fail:
 FUNC_0(VAR_8);
 VAR_4->s_fs_info = ((void*)0);
 return VAR_9;
}
