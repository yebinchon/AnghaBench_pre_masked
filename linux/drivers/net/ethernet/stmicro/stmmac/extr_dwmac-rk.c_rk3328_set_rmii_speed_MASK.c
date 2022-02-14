
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_priv_data {int grf; scalar_t__ integrated_phy; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_3(struct rk_priv_data *VAR_6, int VAR_7)
{
 struct device *VAR_8 = &VAR_6->pdev->dev;
 unsigned int VAR_9;

 if (FUNC_0(VAR_6->grf)) {
  FUNC_1(VAR_8, "Missing rockchip,grf property\n");
  return;
 }

 VAR_9 = VAR_6->integrated_phy ? VAR_5 :
    VAR_4;

 if (VAR_7 == 10)
  FUNC_2(VAR_6->grf, VAR_9,
        VAR_1 |
        VAR_3);
 else if (VAR_7 == 100)
  FUNC_2(VAR_6->grf, VAR_9,
        VAR_0 |
        VAR_2);
 else
  FUNC_1(VAR_8, "unknown speed value for RMII! speed=%d", VAR_7);
}
