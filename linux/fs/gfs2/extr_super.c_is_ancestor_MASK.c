
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct dentry* d_parent; } ;


 int FUNC_0 (struct dentry const*) ;

__attribute__((used)) static int FUNC_1(const struct dentry *VAR_0, const struct dentry *VAR_1)
{
 do {
  if (VAR_0 == VAR_1)
   return 1;
  VAR_0 = VAR_0->d_parent;
 } while (!FUNC_0(VAR_0));
 return 0;
}
