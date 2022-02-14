
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct vfsmount*) ;
 struct dentry* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vfsmount*) ;
 int FUNC_3 (struct vfsmount*) ;
 struct dentry* FUNC_4 (struct vfsmount*,char const*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static struct dentry *FUNC_7(struct vfsmount *VAR_0,
  const char *VAR_1)
{
 struct dentry *VAR_2;
 int VAR_3;

 if (FUNC_2(VAR_0))
  return FUNC_0(VAR_0);

 VAR_3 = FUNC_5();
 if (VAR_3) {
  FUNC_3(VAR_0);
  return FUNC_1(VAR_3);
 }

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 FUNC_6();

 return VAR_2;
}
