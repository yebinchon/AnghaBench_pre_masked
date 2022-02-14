
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 char* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static bool FUNC_3(struct device *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_0);
 const int VAR_3 = FUNC_2(VAR_2);
 const int VAR_4 = FUNC_2(VAR_1);

 if (VAR_4 > VAR_3)
  return 0;

 return FUNC_1(VAR_2 + (VAR_3 - VAR_4), VAR_1) == 0;
}
