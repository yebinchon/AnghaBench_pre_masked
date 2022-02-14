
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct clk_init_data* init; } ;
struct rockchip_usb2phy {int clk480m; TYPE_1__* dev; TYPE_3__ clk480m_hw; scalar_t__ clk; } ;
struct device_node {int dummy; } ;
struct clk_init_data {char* name; char const** parent_names; int num_parents; int * ops; scalar_t__ flags; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,struct rockchip_usb2phy*) ;
 int FUNC_6 (struct device_node*,int ,int ) ;
 int FUNC_7 (struct device_node*) ;
 int VAR_0 ;
 int FUNC_8 (struct device_node*,char*,char**) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_9(struct rockchip_usb2phy *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev->of_node;
 struct clk_init_data VAR_5;
 const char *VAR_6;
 int VAR_7;

 VAR_5.flags = 0;
 VAR_5.name = "clk_usbphy_480m";
 VAR_5.ops = &VAR_2;


 FUNC_8(VAR_4, "clock-output-names", &VAR_5.name);

 if (VAR_3->clk) {
  VAR_6 = FUNC_2(VAR_3->clk);
  VAR_5.parent_names = &VAR_6;
  VAR_5.num_parents = 1;
 } else {
  VAR_5.parent_names = ((void*)0);
  VAR_5.num_parents = 0;
 }

 VAR_3->clk480m_hw.init = &VAR_5;


 VAR_3->clk480m = FUNC_3(VAR_3->dev, &VAR_3->clk480m_hw);
 if (FUNC_0(VAR_3->clk480m)) {
  VAR_7 = FUNC_1(VAR_3->clk480m);
  goto err_ret;
 }

 VAR_7 = FUNC_6(VAR_4, VAR_0, VAR_3->clk480m);
 if (VAR_7 < 0)
  goto err_clk_provider;

 VAR_7 = FUNC_5(VAR_3->dev, VAR_1,
         VAR_3);
 if (VAR_7 < 0)
  goto err_unreg_action;

 return 0;

err_unreg_action:
 FUNC_7(VAR_4);
err_clk_provider:
 FUNC_4(VAR_3->clk480m);
err_ret:
 return VAR_7;
}
