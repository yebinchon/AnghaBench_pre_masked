
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct ovl_fs {int namelen; } ;
struct kstatfs {int f_type; int f_namelen; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {struct dentry* s_root; struct ovl_fs* s_fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct path*) ;
 int FUNC_1 (struct path*,struct kstatfs*) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_1, struct kstatfs *VAR_2)
{
 struct ovl_fs *VAR_3 = VAR_1->d_sb->s_fs_info;
 struct dentry *VAR_4 = VAR_1->d_sb->s_root;
 struct path VAR_5;
 int VAR_6;

 FUNC_0(VAR_4, &VAR_5);

 VAR_6 = FUNC_1(&VAR_5, VAR_2);
 if (!VAR_6) {
  VAR_2->f_namelen = VAR_3->namelen;
  VAR_2->f_type = VAR_0;
 }

 return VAR_6;
}
