
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct ovl_fs* s_fs_info; } ;
struct ovl_path {struct dentry* dentry; struct ovl_layer* layer; } ;
struct ovl_layer {int mnt; } ;
struct ovl_fs {int upper_mnt; } ;
struct dentry {int d_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct super_block*,struct dentry*,struct ovl_layer*) ;
 struct dentry* FUNC_4 (struct super_block*,struct dentry*,struct ovl_path*,struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_5(struct super_block *VAR_2,
         struct dentry *VAR_3,
         struct ovl_path *VAR_4,
         struct dentry *VAR_5)
{
 struct ovl_fs *VAR_6 = VAR_2->s_fs_info;
 struct ovl_layer VAR_7 = { .mnt = VAR_6->upper_mnt };
 struct ovl_layer *VAR_8 = VAR_3 ? &VAR_7 : VAR_4->layer;
 struct dentry *VAR_9 = VAR_3 ?: (VAR_5 ?: VAR_4->dentry);





 if (!FUNC_1(VAR_9))
  return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);


 if ((VAR_9->d_flags & VAR_0) || FUNC_2(VAR_9))
  return FUNC_0(-VAR_1);





 return FUNC_3(VAR_2, VAR_9, VAR_8);
}
