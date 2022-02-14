
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_priv_data {int grf; scalar_t__ phy_reset; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* integrated_phy_powerup ) (struct rk_priv_data*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct rk_priv_data*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct rk_priv_data *VAR_9)
{
 if (VAR_9->ops->integrated_phy_powerup)
  VAR_9->ops->integrated_phy_powerup(VAR_9);

 FUNC_1(VAR_9->grf, VAR_3, VAR_6);
 FUNC_1(VAR_9->grf, VAR_3, VAR_0);

 FUNC_1(VAR_9->grf, VAR_4, VAR_1);
 FUNC_1(VAR_9->grf, VAR_5, VAR_2);

 if (VAR_9->phy_reset) {

  FUNC_1(VAR_9->grf, VAR_3, VAR_7);
  if (VAR_9->phy_reset)
   FUNC_2(VAR_9->phy_reset);
  FUNC_5(10, 20);
  if (VAR_9->phy_reset)
   FUNC_3(VAR_9->phy_reset);
  FUNC_5(10, 20);
  FUNC_1(VAR_9->grf, VAR_3, VAR_8);
  FUNC_0(30);
 }
}
