
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,char const*,char*,int) ;

bool FUNC_2(struct dentry *VAR_0, const char *VAR_1)
{
 int VAR_2;
 char VAR_3;

 if (!FUNC_0(VAR_0))
  return 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1, &VAR_3, 1);
 if (VAR_2 == 1 && VAR_3 == 'y')
  return 1;

 return 0;
}
