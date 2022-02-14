
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry const*) ;
 int FUNC_1 (int ,char*,struct dentry const*,struct dentry const*) ;

__attribute__((used)) static int FUNC_2(const struct dentry *VAR_1)
{
 FUNC_1(VAR_0, " dentry: %pd (%p)\n",
   VAR_1, VAR_1);


 if (FUNC_0(VAR_1))
  return 1;
 return 0;
}
