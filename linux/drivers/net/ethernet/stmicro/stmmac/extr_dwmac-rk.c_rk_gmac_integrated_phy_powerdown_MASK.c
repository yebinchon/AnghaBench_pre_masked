
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_priv_data {scalar_t__ phy_reset; int grf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rk_priv_data *VAR_2)
{
 FUNC_0(VAR_2->grf, VAR_0, VAR_1);
 if (VAR_2->phy_reset)
  FUNC_1(VAR_2->phy_reset);
}
