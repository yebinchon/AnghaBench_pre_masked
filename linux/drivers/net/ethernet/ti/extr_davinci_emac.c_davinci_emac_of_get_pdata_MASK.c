
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {struct emac_platform_data* platform_data; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct emac_platform_data* data; } ;
struct emac_priv {int phy_node; } ;
struct emac_platform_data {int hw_ram_addr; int version; int interrupt_disable; int interrupt_enable; int * phy_id; int no_bd_ram; int rmii_en; int ctrl_ram_size; int ctrl_ram_offset; int ctrl_mod_reg_offset; int ctrl_reg_offset; int mac_addr; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int VAR_3 ;
 struct emac_platform_data* FUNC_2 (TYPE_1__*) ;
 struct emac_platform_data* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (int ,int const*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (struct device_node*) ;
 struct of_device_id* FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct device_node*,char*,int ) ;
 int FUNC_10 (struct device_node*) ;
 scalar_t__ FUNC_11 (struct device_node*) ;
 int FUNC_12 (struct device_node*,char*) ;
 int FUNC_13 (struct device_node*,char*,int *) ;
 int FUNC_14 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct emac_platform_data *
FUNC_15(struct platform_device *VAR_4, struct emac_priv *VAR_5)
{
 struct device_node *VAR_6;
 const struct of_device_id *VAR_7;
 const struct emac_platform_data *VAR_8;
 struct emac_platform_data *VAR_9 = ((void*)0);
 const u8 *VAR_10;

 if (!FUNC_0(VAR_0) || !VAR_4->dev.of_node)
  return FUNC_2(&VAR_4->dev);

 VAR_9 = FUNC_3(&VAR_4->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return ((void*)0);

 VAR_6 = VAR_4->dev.of_node;
 VAR_9->version = VAR_1;

 if (!FUNC_5(VAR_9->mac_addr)) {
  VAR_10 = FUNC_6(VAR_6);
  if (!FUNC_1(VAR_10))
   FUNC_4(VAR_9->mac_addr, VAR_10);
 }

 FUNC_13(VAR_6, "ti,davinci-ctrl-reg-offset",
        &VAR_9->ctrl_reg_offset);

 FUNC_13(VAR_6, "ti,davinci-ctrl-mod-reg-offset",
        &VAR_9->ctrl_mod_reg_offset);

 FUNC_13(VAR_6, "ti,davinci-ctrl-ram-offset",
        &VAR_9->ctrl_ram_offset);

 FUNC_13(VAR_6, "ti,davinci-ctrl-ram-size",
        &VAR_9->ctrl_ram_size);

 FUNC_14(VAR_6, "ti,davinci-rmii-en", &VAR_9->rmii_en);

 VAR_9->no_bd_ram = FUNC_12(VAR_6, "ti,davinci-no-bd-ram");

 VAR_5->phy_node = FUNC_9(VAR_6, "phy-handle", 0);
 if (!VAR_5->phy_node) {
  if (!FUNC_10(VAR_6))
   VAR_9->phy_id = ((void*)0);
  else if (FUNC_11(VAR_6) >= 0)
   VAR_5->phy_node = FUNC_8(VAR_6);
 }

 VAR_8 = VAR_4->dev.platform_data;
 if (VAR_8) {
  VAR_9->interrupt_enable = VAR_8->interrupt_enable;
  VAR_9->interrupt_disable = VAR_8->interrupt_disable;
 }

 VAR_7 = FUNC_7(VAR_3, &VAR_4->dev);
 if (VAR_7 && VAR_7->data) {
  VAR_8 = VAR_7->data;
  VAR_9->version = VAR_8->version;
  VAR_9->hw_ram_addr = VAR_8->hw_ram_addr;
 }

 return VAR_9;
}
