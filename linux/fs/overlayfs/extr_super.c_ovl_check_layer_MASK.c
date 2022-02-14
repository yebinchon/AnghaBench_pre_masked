
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ovl_fs {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct super_block*,struct dentry*) ;
 int FUNC_4 (struct ovl_fs*,char const*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_1, struct ovl_fs *VAR_2,
      struct dentry *VAR_3, const char *VAR_4)
{
 struct dentry *VAR_5 = VAR_3, *VAR_6;
 int VAR_7 = 0;

 if (!VAR_3)
  return 0;

 VAR_6 = FUNC_0(VAR_5);


 while (!VAR_7 && VAR_6 != VAR_5) {
  if (FUNC_3(VAR_1, VAR_6)) {
   VAR_7 = -VAR_0;
   FUNC_5("overlayfs: overlapping %s path\n", VAR_4);
  } else if (FUNC_2(VAR_6)) {
   VAR_7 = FUNC_4(VAR_2, VAR_4);
  }
  VAR_5 = VAR_6;
  VAR_6 = FUNC_0(VAR_5);
  FUNC_1(VAR_5);
 }

 FUNC_1(VAR_6);

 return VAR_7;
}
