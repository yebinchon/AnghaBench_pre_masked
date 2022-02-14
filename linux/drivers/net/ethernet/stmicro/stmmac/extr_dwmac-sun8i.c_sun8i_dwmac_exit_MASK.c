
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_priv_data {scalar_t__ regulator; int tx_clk; int rst_ephy; scalar_t__ internal_phy_powered; scalar_t__ mux_handle; TYPE_1__* variant; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ soc_has_internal_phy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sunxi_priv_data*) ;
 int FUNC_5 (struct sunxi_priv_data*) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_0, void *VAR_1)
{
 struct sunxi_priv_data *VAR_2 = VAR_1;

 if (VAR_2->variant->soc_has_internal_phy) {

  if (VAR_2->mux_handle)
   FUNC_1(VAR_2->mux_handle);
  if (VAR_2->internal_phy_powered)
   FUNC_4(VAR_2);
 }

 FUNC_5(VAR_2);

 FUNC_3(VAR_2->rst_ephy);

 FUNC_0(VAR_2->tx_clk);

 if (VAR_2->regulator)
  FUNC_2(VAR_2->regulator);
}
