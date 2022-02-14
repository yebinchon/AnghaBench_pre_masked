
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int FUNC_0 (char*,char*,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(char *VAR_1,
      const struct kernel_param *VAR_2)
{
 return FUNC_0(VAR_1, "%s\n", VAR_0 ?
         "blocked" : "unblocked");
}
