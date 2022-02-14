
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct gswip_priv {int num_gphy_fw; int * gphy_fw; TYPE_2__* ds; TYPE_1__* hw_info; struct device* dev; void* mii; void* mdio; void* gswip; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {int slave_mii_bus; int * ops; struct gswip_priv* priv; } ;
struct TYPE_6__ {int cpu_port; int max_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int,int) ;
 struct gswip_priv* FUNC_4 (struct device*,int,int ) ;
 void* FUNC_5 (struct platform_device*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (struct device*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct gswip_priv*,struct device_node*,int) ;
 int FUNC_11 (struct gswip_priv*,int *) ;
 int FUNC_12 (struct gswip_priv*,struct device_node*) ;
 int FUNC_13 (struct gswip_priv*,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_14 (struct gswip_priv*,int ) ;
 int FUNC_15 (int ) ;
 TYPE_1__* FUNC_16 (struct device*) ;
 struct device_node* FUNC_17 (int ,char*) ;
 int FUNC_18 (struct device_node*) ;
 int FUNC_19 (struct platform_device*,struct gswip_priv*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_11)
{
 struct gswip_priv *VAR_12;
 struct device_node *VAR_13, *VAR_14;
 struct device *VAR_15 = &VAR_11->dev;
 int VAR_16;
 int VAR_17;
 u32 VAR_18;

 VAR_12 = FUNC_4(VAR_15, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->gswip = FUNC_5(VAR_11, 0);
 if (FUNC_0(VAR_12->gswip))
  return FUNC_1(VAR_12->gswip);

 VAR_12->mdio = FUNC_5(VAR_11, 1);
 if (FUNC_0(VAR_12->mdio))
  return FUNC_1(VAR_12->mdio);

 VAR_12->mii = FUNC_5(VAR_11, 2);
 if (FUNC_0(VAR_12->mii))
  return FUNC_1(VAR_12->mii);

 VAR_12->hw_info = FUNC_16(VAR_15);
 if (!VAR_12->hw_info)
  return -VAR_0;

 VAR_12->ds = FUNC_8(VAR_15, VAR_12->hw_info->max_ports);
 if (!VAR_12->ds)
  return -VAR_1;

 VAR_12->ds->priv = VAR_12;
 VAR_12->ds->ops = &VAR_10;
 VAR_12->dev = VAR_15;
 VAR_18 = FUNC_14(VAR_12, VAR_5);


 VAR_14 = FUNC_17(VAR_15->of_node, "lantiq,gphy-fw");
 if (VAR_14) {
  VAR_16 = FUNC_10(VAR_12, VAR_14, VAR_18);
  FUNC_18(VAR_14);
  if (VAR_16) {
   FUNC_2(VAR_15, "gphy fw probe failed\n");
   return VAR_16;
  }
 }


 VAR_13 = FUNC_17(VAR_15->of_node, "lantiq,xrx200-mdio");
 if (VAR_13) {
  VAR_16 = FUNC_12(VAR_12, VAR_13);
  if (VAR_16) {
   FUNC_2(VAR_15, "mdio probe failed\n");
   goto put_mdio_node;
  }
 }

 VAR_16 = FUNC_7(VAR_12->ds);
 if (VAR_16) {
  FUNC_2(VAR_15, "dsa switch register failed: %i\n", VAR_16);
  goto mdio_bus;
 }
 if (!FUNC_6(VAR_12->ds, VAR_12->hw_info->cpu_port)) {
  FUNC_2(VAR_15, "wrong CPU port defined, HW only supports port: %i",
   VAR_12->hw_info->cpu_port);
  VAR_16 = -VAR_0;
  goto disable_switch;
 }

 FUNC_19(VAR_11, VAR_12);

 FUNC_3(VAR_15, "probed GSWIP version %lx mod %lx\n",
   (VAR_18 & VAR_8) >> VAR_9,
   (VAR_18 & VAR_6) >> VAR_7);
 return 0;

disable_switch:
 FUNC_13(VAR_12, VAR_4, 0, VAR_3);
 FUNC_9(VAR_12->ds);
mdio_bus:
 if (VAR_13)
  FUNC_15(VAR_12->ds->slave_mii_bus);
put_mdio_node:
 FUNC_18(VAR_13);
 for (VAR_17 = 0; VAR_17 < VAR_12->num_gphy_fw; VAR_17++)
  FUNC_11(VAR_12, &VAR_12->gphy_fw[VAR_17]);
 return VAR_16;
}
