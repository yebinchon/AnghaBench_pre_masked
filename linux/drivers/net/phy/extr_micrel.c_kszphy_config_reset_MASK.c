
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {struct kszphy_priv* priv; } ;
struct kszphy_priv {scalar_t__ led_mode; TYPE_1__* type; int rmii_ref_clk_sel_val; scalar_t__ rmii_ref_clk_sel; } ;
struct TYPE_2__ {int led_mode_reg; } ;


 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,scalar_t__) ;
 int FUNC_2 (struct phy_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_0)
{
 struct kszphy_priv *VAR_1 = VAR_0->priv;
 int VAR_2;

 if (VAR_1->rmii_ref_clk_sel) {
  VAR_2 = FUNC_0(VAR_0, VAR_1->rmii_ref_clk_sel_val);
  if (VAR_2) {
   FUNC_2(VAR_0,
       "failed to set rmii reference clock\n");
   return VAR_2;
  }
 }

 if (VAR_1->led_mode >= 0)
  FUNC_1(VAR_0, VAR_1->type->led_mode_reg, VAR_1->led_mode);

 return 0;
}
