
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_priv_data {TYPE_1__* pdev; struct regulator* regulator; } ;
struct regulator {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;

__attribute__((used)) static int FUNC_3(struct rk_priv_data *VAR_0, bool VAR_1)
{
 struct regulator *VAR_2 = VAR_0->regulator;
 int VAR_3;
 struct device *VAR_4 = &VAR_0->pdev->dev;

 if (!VAR_2)
  return 0;

 if (VAR_1) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3)
   FUNC_0(VAR_4, "fail to enable phy-supply\n");
 } else {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3)
   FUNC_0(VAR_4, "fail to disable phy-supply\n");
 }

 return 0;
}
