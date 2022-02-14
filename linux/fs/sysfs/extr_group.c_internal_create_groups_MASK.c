
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct attribute_group {int dummy; } ;


 int FUNC_0 (struct kobject*,int,struct attribute_group const*) ;
 int FUNC_1 (struct kobject*,struct attribute_group const*) ;

__attribute__((used)) static int FUNC_2(struct kobject *VAR_0, int VAR_1,
      const struct attribute_group **VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 if (!VAR_2)
  return 0;

 for (VAR_4 = 0; VAR_2[VAR_4]; VAR_4++) {
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2[VAR_4]);
  if (VAR_3) {
   while (--VAR_4 >= 0)
    FUNC_1(VAR_0, VAR_2[VAR_4]);
   break;
  }
 }
 return VAR_3;
}
