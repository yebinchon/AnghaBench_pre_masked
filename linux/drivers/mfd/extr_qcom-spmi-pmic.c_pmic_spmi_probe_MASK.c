
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_device {int usid; int dev; } ;
struct regmap {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *) ;
 struct regmap* FUNC_3 (struct spmi_device*,int *) ;
 int FUNC_4 (struct regmap*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct spmi_device *VAR_1)
{
 struct regmap *VAR_2;

 VAR_2 = FUNC_3(VAR_1, &VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);


 if (VAR_1->usid % 2 == 0)
  FUNC_4(VAR_2, &VAR_1->dev);

 return FUNC_2(&VAR_1->dev);
}
