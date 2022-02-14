
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov965x {void** gpios; int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,char*) ;
 void* FUNC_3 (struct device*,char*,int ) ;
 struct device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ov965x *VAR_3)
{
 struct device *VAR_4 = FUNC_4(VAR_3->regmap);

 VAR_3->gpios[VAR_1] = FUNC_3(VAR_4, "powerdown",
       VAR_0);
 if (FUNC_0(VAR_3->gpios[VAR_1])) {
  FUNC_2(VAR_4, "can't get %s GPIO\n", "powerdown");
  return FUNC_1(VAR_3->gpios[VAR_1]);
 }

 VAR_3->gpios[VAR_2] = FUNC_3(VAR_4, "reset",
       VAR_0);
 if (FUNC_0(VAR_3->gpios[VAR_2])) {
  FUNC_2(VAR_4, "can't get %s GPIO\n", "reset");
  return FUNC_1(VAR_3->gpios[VAR_2]);
 }

 return 0;
}
