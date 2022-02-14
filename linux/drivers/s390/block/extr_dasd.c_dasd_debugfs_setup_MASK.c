
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (char const*,struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_2(const char *VAR_0,
      struct dentry *VAR_1)
{
 struct dentry *VAR_2;

 if (!VAR_1)
  return ((void*)0);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2 || FUNC_0(VAR_2))
  return ((void*)0);
 return VAR_2;
}
