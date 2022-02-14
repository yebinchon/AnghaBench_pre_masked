
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_priv_data {int grf; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rk_priv_data *VAR_5,
    int VAR_6, int VAR_7)
{
 struct device *VAR_8 = &VAR_5->pdev->dev;

 if (FUNC_1(VAR_5->grf)) {
  FUNC_4(VAR_8, "Missing rockchip,grf property\n");
  return;
 }

 FUNC_5(VAR_5->grf, VAR_4,
       VAR_1 |
       VAR_2);
 FUNC_5(VAR_5->grf, VAR_3,
       FUNC_0(VAR_0, VAR_6, VAR_7) |
       FUNC_2(VAR_7) |
       FUNC_3(VAR_6));
}
