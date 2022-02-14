
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
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_3(struct rk_priv_data *VAR_4)
{
 struct device *VAR_5 = &VAR_4->pdev->dev;
 unsigned int VAR_6;

 if (FUNC_0(VAR_4->grf)) {
  FUNC_1(VAR_5, "Missing rockchip,grf property\n");
  return;
 }

 VAR_6 = VAR_4->integrated_phy ? VAR_3 :
    VAR_2;

 FUNC_2(VAR_4->grf, VAR_6,
       VAR_0 |
       VAR_1);
}
