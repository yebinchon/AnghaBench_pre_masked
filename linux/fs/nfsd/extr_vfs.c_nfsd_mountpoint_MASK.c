
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_export {int ex_flags; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;

int FUNC_3(struct dentry *VAR_1, struct svc_export *VAR_2)
{
 if (!FUNC_0(VAR_1))
  return 0;
 if (VAR_2->ex_flags & VAR_0)
  return 1;
 if (FUNC_2(VAR_1))
  return 1;
 if (FUNC_1(VAR_1))




  return 2;
 return 0;
}
