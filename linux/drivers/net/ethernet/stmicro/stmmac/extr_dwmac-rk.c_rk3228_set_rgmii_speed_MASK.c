
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
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rk_priv_data *VAR_4, int VAR_5)
{
 struct device *VAR_6 = &VAR_4->pdev->dev;

 if (FUNC_0(VAR_4->grf)) {
  FUNC_1(VAR_6, "Missing rockchip,grf property\n");
  return;
 }

 if (VAR_5 == 10)
  FUNC_2(VAR_4->grf, VAR_3,
        VAR_2);
 else if (VAR_5 == 100)
  FUNC_2(VAR_4->grf, VAR_3,
        VAR_1);
 else if (VAR_5 == 1000)
  FUNC_2(VAR_4->grf, VAR_3,
        VAR_0);
 else
  FUNC_1(VAR_6, "unknown speed value for RGMII! speed=%d", VAR_5);
}
