
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct rockchip_usb_phy_base {int dev; TYPE_2__* pdata; } ;
struct TYPE_17__ {struct clk_init_data* init; } ;
struct rockchip_usb_phy {unsigned int reg_offset; int uart_enabled; TYPE_3__* clk; TYPE_3__* clk480m; TYPE_3__* vbus; TYPE_3__* phy; TYPE_11__ clk480m_hw; TYPE_3__* reset; struct device_node* np; struct rockchip_usb_phy_base* base; } ;
struct device_node {int dummy; } ;
struct clk_init_data {char const** parent_names; int num_parents; int * ops; scalar_t__ flags; int * name; } ;
struct TYPE_20__ {int dev; } ;
struct TYPE_19__ {int usb_uart_phy; TYPE_1__* phys; } ;
struct TYPE_18__ {int reg; int * pll_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 char* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ,TYPE_11__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,int ,struct rockchip_usb_phy*) ;
 struct rockchip_usb_phy* FUNC_10 (int ,int,int ) ;
 TYPE_3__* FUNC_11 (int ,struct device_node*,int *) ;
 TYPE_3__* FUNC_12 (int *,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_13 (struct device_node*,int ,TYPE_3__*) ;
 TYPE_3__* FUNC_14 (struct device_node*,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_15 (struct device_node*,char*,unsigned int*) ;
 TYPE_3__* FUNC_16 (struct device_node*,char*) ;
 int VAR_6 ;
 int FUNC_17 (TYPE_3__*,struct rockchip_usb_phy*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_18 (struct rockchip_usb_phy*,int) ;

__attribute__((used)) static int FUNC_19(struct rockchip_usb_phy_base *VAR_9,
     struct device_node *VAR_10)
{
 struct rockchip_usb_phy *VAR_11;
 unsigned int VAR_12;
 const char *VAR_13;
 struct clk_init_data VAR_14;
 int VAR_15, VAR_16;

 VAR_11 = FUNC_10(VAR_9->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->base = VAR_9;
 VAR_11->np = VAR_10;

 if (FUNC_15(VAR_10, "reg", &VAR_12)) {
  FUNC_8(VAR_9->dev, "missing reg property in node %pOFn\n",
   VAR_10);
  return -VAR_0;
 }

 VAR_11->reset = FUNC_16(VAR_10, "phy-reset");
 if (FUNC_0(VAR_11->reset))
  VAR_11->reset = ((void*)0);

 VAR_11->reg_offset = VAR_12;

 VAR_11->clk = FUNC_14(VAR_10, "phyclk");
 if (FUNC_0(VAR_11->clk))
  VAR_11->clk = ((void*)0);

 VAR_16 = 0;
 VAR_14.name = ((void*)0);
 while (VAR_9->pdata->phys[VAR_16].reg) {
  if (VAR_9->pdata->phys[VAR_16].reg == VAR_12) {
   VAR_14.name = VAR_9->pdata->phys[VAR_16].pll_name;
   break;
  }
  VAR_16++;
 }

 if (!VAR_14.name) {
  FUNC_8(VAR_9->dev, "phy data not found\n");
  return -VAR_0;
 }

 if (VAR_4 && VAR_9->pdata->usb_uart_phy == VAR_16) {
  FUNC_7(VAR_9->dev, "phy%d used as uart output\n", VAR_16);
  VAR_11->uart_enabled = 1;
 } else {
  if (VAR_11->clk) {
   VAR_13 = FUNC_2(VAR_11->clk);
   VAR_14.flags = 0;
   VAR_14.parent_names = &VAR_13;
   VAR_14.num_parents = 1;
  } else {
   VAR_14.flags = 0;
   VAR_14.parent_names = ((void*)0);
   VAR_14.num_parents = 0;
  }

  VAR_14.ops = &VAR_7;
  VAR_11->clk480m_hw.init = &VAR_14;

  VAR_11->clk480m = FUNC_5(VAR_9->dev, &VAR_11->clk480m_hw);
  if (FUNC_0(VAR_11->clk480m)) {
   VAR_15 = FUNC_1(VAR_11->clk480m);
   goto err_clk;
  }

  VAR_15 = FUNC_13(VAR_10, VAR_5,
     VAR_11->clk480m);
  if (VAR_15 < 0)
   goto err_clk_prov;
 }

 VAR_15 = FUNC_9(VAR_9->dev, VAR_8,
           VAR_11);
 if (VAR_15)
  return VAR_15;

 VAR_11->phy = FUNC_11(VAR_9->dev, VAR_10, &VAR_6);
 if (FUNC_0(VAR_11->phy)) {
  FUNC_8(VAR_9->dev, "failed to create PHY\n");
  return FUNC_1(VAR_11->phy);
 }
 FUNC_17(VAR_11->phy, VAR_11);

 VAR_11->vbus = FUNC_12(&VAR_11->phy->dev, "vbus");
 if (FUNC_0(VAR_11->vbus)) {
  if (FUNC_1(VAR_11->vbus) == -VAR_2)
   return FUNC_1(VAR_11->vbus);
  VAR_11->vbus = ((void*)0);
 }





 if (VAR_11->uart_enabled)
  return FUNC_3(VAR_11->clk);
 else
  return FUNC_18(VAR_11, 1);

err_clk_prov:
 if (!VAR_11->uart_enabled)
  FUNC_6(VAR_11->clk480m);
err_clk:
 if (VAR_11->clk)
  FUNC_4(VAR_11->clk);
 return VAR_15;
}
