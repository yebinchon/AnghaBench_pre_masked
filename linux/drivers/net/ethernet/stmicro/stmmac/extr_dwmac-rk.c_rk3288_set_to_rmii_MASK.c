
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_priv_data {int grf; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rk_priv_data *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;

 if (FUNC_0(VAR_3->grf)) {
  FUNC_1(VAR_4, "Missing rockchip,grf property\n");
  return;
 }

 FUNC_2(VAR_3->grf, VAR_2,
       VAR_0 | VAR_1);
}
