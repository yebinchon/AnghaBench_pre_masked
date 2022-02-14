
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_priv_data {int grf; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct rk_priv_data *VAR_6,
    int VAR_7, int VAR_8)
{
 struct device *VAR_9 = &VAR_6->pdev->dev;

 if (FUNC_0(VAR_6->grf)) {
  FUNC_3(VAR_9, "Missing rockchip,grf property\n");
  return;
 }

 FUNC_4(VAR_6->grf, VAR_5,
       VAR_0 |
       VAR_1 |
       VAR_2 |
       VAR_3);

 FUNC_4(VAR_6->grf, VAR_4,
       FUNC_1(VAR_8) |
       FUNC_2(VAR_7));
}
