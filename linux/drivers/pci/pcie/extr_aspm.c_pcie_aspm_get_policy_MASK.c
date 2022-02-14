
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_2, const struct kernel_param *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  if (VAR_4 == VAR_0)
   VAR_5 += FUNC_1(VAR_2 + VAR_5, "[%s] ", VAR_1[VAR_4]);
  else
   VAR_5 += FUNC_1(VAR_2 + VAR_5, "%s ", VAR_1[VAR_4]);
 return VAR_5;
}
