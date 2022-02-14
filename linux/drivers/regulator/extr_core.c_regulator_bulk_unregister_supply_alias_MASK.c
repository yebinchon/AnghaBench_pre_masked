
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (struct device*,char const* const) ;

void FUNC_1(struct device *VAR_0,
         const char *const *VAR_1,
         int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
  FUNC_0(VAR_0, VAR_1[VAR_3]);
}
