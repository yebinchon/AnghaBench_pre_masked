
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_fs {int noxattr; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {struct ovl_fs* s_fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,char const*,void const*,size_t,int ) ;
 int FUNC_1 (char*,char const*) ;

int FUNC_2(struct dentry *VAR_1, struct dentry *VAR_2,
         const char *VAR_3, const void *VAR_4, size_t VAR_5,
         int VAR_6)
{
 int VAR_7;
 struct ovl_fs *VAR_8 = VAR_1->d_sb->s_fs_info;

 if (VAR_8->noxattr)
  return VAR_6;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, 0);

 if (VAR_7 == -VAR_0) {
  FUNC_1("overlayfs: cannot set %s xattr on upper\n", VAR_3);
  VAR_8->noxattr = 1;
  return VAR_6;
 }

 return VAR_7;
}
