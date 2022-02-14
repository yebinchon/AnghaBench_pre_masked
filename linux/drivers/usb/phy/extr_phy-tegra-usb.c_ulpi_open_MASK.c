
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct tegra_usb_phy {scalar_t__ regs; TYPE_2__* ulpi; TYPE_1__ u_phy; int reset_gpio; int clk; } ;
struct TYPE_4__ {scalar_t__ io_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ,int ) ;
 TYPE_2__* FUNC_6 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct tegra_usb_phy *VAR_3)
{
 int VAR_4;

 VAR_3->clk = FUNC_3(VAR_3->u_phy.dev, "ulpi-link");
 if (FUNC_0(VAR_3->clk)) {
  VAR_4 = FUNC_1(VAR_3->clk);
  FUNC_2(VAR_3->u_phy.dev, "Failed to get ULPI clock: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_3->u_phy.dev, VAR_3->reset_gpio,
  "ulpi_phy_reset_b");
 if (VAR_4 < 0) {
  FUNC_2(VAR_3->u_phy.dev, "Request failed for GPIO %d: %d\n",
   VAR_3->reset_gpio, VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_5(VAR_3->reset_gpio, 0);
 if (VAR_4 < 0) {
  FUNC_2(VAR_3->u_phy.dev,
   "GPIO %d direction not set to output: %d\n",
   VAR_3->reset_gpio, VAR_4);
  return VAR_4;
 }

 VAR_3->ulpi = FUNC_6(&VAR_2, 0);
 if (!VAR_3->ulpi) {
  FUNC_2(VAR_3->u_phy.dev, "Failed to create ULPI OTG\n");
  VAR_4 = -VAR_0;
  return VAR_4;
 }

 VAR_3->ulpi->io_priv = VAR_3->regs + VAR_1;
 return 0;
}
