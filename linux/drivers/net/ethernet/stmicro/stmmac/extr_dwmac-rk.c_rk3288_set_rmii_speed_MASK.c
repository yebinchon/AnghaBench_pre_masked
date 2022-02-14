
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
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rk_priv_data *VAR_5, int VAR_6)
{
 struct device *VAR_7 = &VAR_5->pdev->dev;

 if (FUNC_0(VAR_5->grf)) {
  FUNC_1(VAR_7, "Missing rockchip,grf property\n");
  return;
 }

 if (VAR_6 == 10) {
  FUNC_2(VAR_5->grf, VAR_4,
        VAR_1 |
        VAR_3);
 } else if (VAR_6 == 100) {
  FUNC_2(VAR_5->grf, VAR_4,
        VAR_0 |
        VAR_2);
 } else {
  FUNC_1(VAR_7, "unknown speed value for RMII! speed=%d", VAR_6);
 }
}
