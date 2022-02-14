
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct attribute {int dummy; } ;


 int FUNC_0 (struct kobject*,struct attribute const* const) ;

void FUNC_1(struct kobject *VAR_0, const struct attribute * const *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++)
  FUNC_0(VAR_0, VAR_1[VAR_2]);
}
