
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_priv_data {int grf; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rk_priv_data *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;

 if (FUNC_1(VAR_3->grf)) {
  FUNC_2(VAR_4, "Missing rockchip,grf property\n");
  return;
 }

 FUNC_3(VAR_3->grf, VAR_2,
       VAR_0 |
       VAR_1);


 FUNC_3(VAR_3->grf, VAR_2, FUNC_0(11));
}
