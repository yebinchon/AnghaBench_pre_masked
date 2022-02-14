
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct kernel_param const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, const struct kernel_param *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3) {
  int VAR_4 = *(int *)VAR_2->arg;
  if (VAR_4 < 0)
   VAR_4 = -VAR_4;
  if (!VAR_4 || VAR_4 > 3)
   return -VAR_0;
 }
 return VAR_3;
}
