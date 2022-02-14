
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct attribute {int dummy; } ;


 int FUNC_0 (struct kobject*,struct attribute const* const) ;
 int FUNC_1 (struct kobject*,struct attribute const* const) ;

int FUNC_2(struct kobject *VAR_0, const struct attribute * const *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3] && !VAR_2; VAR_3++)
  VAR_2 = FUNC_0(VAR_0, VAR_1[VAR_3]);
 if (VAR_2)
  while (--VAR_3 >= 0)
   FUNC_1(VAR_0, VAR_1[VAR_3]);
 return VAR_2;
}
