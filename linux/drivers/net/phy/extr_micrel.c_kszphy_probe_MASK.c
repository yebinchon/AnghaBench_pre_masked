
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct device_node* of_node; } ;
struct TYPE_6__ {TYPE_3__ dev; } ;
struct phy_device {int dev_flags; TYPE_2__ mdio; struct kszphy_priv* priv; TYPE_1__* drv; } ;
struct kszphy_type {int has_rmii_ref_clk_sel; scalar_t__ led_mode_reg; } ;
struct kszphy_priv {int led_mode; int rmii_ref_clk_sel; int rmii_ref_clk_sel_val; struct kszphy_type const* type; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_5__ {struct kszphy_type* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk*) ;
 int VAR_3 ;
 unsigned long FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (TYPE_3__*,char*) ;
 struct kszphy_priv* FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (struct device_node const*,char*) ;
 int FUNC_5 (struct device_node const*,char*,int*) ;
 int FUNC_6 (struct phy_device*,char*,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct phy_device *VAR_4)
{
 const struct kszphy_type *VAR_5 = VAR_4->drv->driver_data;
 const struct device_node *VAR_6 = VAR_4->mdio.dev.of_node;
 struct kszphy_priv *VAR_7;
 struct clk *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(&VAR_4->mdio.dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_4->priv = VAR_7;

 VAR_7->type = VAR_5;

 if (VAR_5->led_mode_reg) {
  VAR_9 = FUNC_5(VAR_6, "micrel,led-mode",
    &VAR_7->led_mode);
  if (VAR_9)
   VAR_7->led_mode = -1;

  if (VAR_7->led_mode > 3) {
   FUNC_6(VAR_4, "invalid led mode: 0x%02x\n",
       VAR_7->led_mode);
   VAR_7->led_mode = -1;
  }
 } else {
  VAR_7->led_mode = -1;
 }

 VAR_8 = FUNC_2(&VAR_4->mdio.dev, "rmii-ref");

 if (!FUNC_0(VAR_8)) {
  unsigned long VAR_10 = FUNC_1(VAR_8);
  bool VAR_11;

  VAR_7->rmii_ref_clk_sel = VAR_5->has_rmii_ref_clk_sel;
  VAR_11 = FUNC_4(VAR_6,
    "micrel,rmii-reference-clock-select-25-mhz");

  if (VAR_10 > 24500000 && VAR_10 < 25500000) {
   VAR_7->rmii_ref_clk_sel_val = VAR_11;
  } else if (VAR_10 > 49500000 && VAR_10 < 50500000) {
   VAR_7->rmii_ref_clk_sel_val = !VAR_11;
  } else {
   FUNC_6(VAR_4, "Clock rate out of range: %ld\n",
       VAR_10);
   return -VAR_0;
  }
 }


 if (VAR_4->dev_flags & VAR_3) {
  VAR_7->rmii_ref_clk_sel = 1;
  VAR_7->rmii_ref_clk_sel_val = 1;
 }

 return 0;
}
