
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (char*,struct dentry*,int) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_0)
{
 int VAR_1;

 if (FUNC_1(VAR_0))
  return 0;

 VAR_1 = FUNC_3(VAR_0);
 if (!VAR_1) {
  VAR_1 = FUNC_0(VAR_0);
  FUNC_2(VAR_0);
 }

 if (VAR_1) {
  FUNC_4("overlayfs: failed to copy up on encode (%pd2, err=%i)\n",
        VAR_0, VAR_1);
 }

 return VAR_1;
}
