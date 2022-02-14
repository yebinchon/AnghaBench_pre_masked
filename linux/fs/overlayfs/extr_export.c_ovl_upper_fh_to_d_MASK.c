
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct ovl_fs* s_fs_info; } ;
struct ovl_fs {int upper_mnt; } ;
struct ovl_fh {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct ovl_fh*,int ,int) ;
 struct dentry* FUNC_4 (struct super_block*,struct dentry*,int *,int *) ;

__attribute__((used)) static struct dentry *FUNC_5(struct super_block *VAR_1,
     struct ovl_fh *VAR_2)
{
 struct ovl_fs *VAR_3 = VAR_1->s_fs_info;
 struct dentry *VAR_4;
 struct dentry *VAR_5;

 if (!VAR_3->upper_mnt)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_3(VAR_2, VAR_3->upper_mnt, 1);
 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_4 = FUNC_4(VAR_1, VAR_5, ((void*)0), ((void*)0));
 FUNC_2(VAR_5);

 return VAR_4;
}
