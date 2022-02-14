
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct temac_local {int dev; struct mii_bus* mii_bus; } ;
struct resource {scalar_t__ start; } ;
struct platform_device {int dev; } ;
struct mii_bus {char* name; int parent; int write; int read; struct temac_local* priv; int id; } ;
struct ll_temac_platform_data {int mdio_clk_freq; unsigned long long mdio_bus_id; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 struct ll_temac_platform_data* FUNC_1 (int *) ;
 struct device_node* FUNC_2 (int *) ;
 struct mii_bus* FUNC_3 (int *) ;
 int FUNC_4 (struct device_node*,int ,struct resource*) ;
 int FUNC_5 (struct mii_bus*,struct device_node*) ;
 int FUNC_6 (struct device_node*,char*,int*) ;
 int FUNC_7 (int ,int ,char*,unsigned long long) ;
 int FUNC_8 (struct temac_local*,int ) ;
 int FUNC_9 (struct temac_local*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_10(struct temac_local *VAR_5, struct platform_device *VAR_6)
{
 struct ll_temac_platform_data *VAR_7 = FUNC_1(&VAR_6->dev);
 struct device_node *VAR_8 = FUNC_2(&VAR_6->dev);
 struct mii_bus *VAR_9;
 u32 VAR_10;
 int VAR_11;
 int VAR_12;
 struct resource VAR_13;


 VAR_10 = 0;
 if (VAR_8)
  FUNC_6(VAR_8, "clock-frequency", &VAR_10);
 else if (VAR_7)
  VAR_10 = VAR_7->mdio_clk_freq;


 VAR_11 = 0x3f;
 if (VAR_10 != 0) {
  VAR_11 = VAR_10 / (2500 * 1000 * 2) - 1;
  if (VAR_11 < 1)
   VAR_11 = 1;
  if (VAR_11 > 0x3f)
   VAR_11 = 0x3f;
 }



 FUNC_9(VAR_5, VAR_2, 1 << 6 | VAR_11);

 VAR_9 = FUNC_3(&VAR_6->dev);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_8) {
  FUNC_4(VAR_8, 0, &VAR_13);
  FUNC_7(VAR_9->id, VAR_1, "%.8llx",
    (unsigned long long)VAR_13.start);
 } else if (VAR_7) {
  FUNC_7(VAR_9->id, VAR_1, "%.8llx",
    VAR_7->mdio_bus_id);
 }

 VAR_9->priv = VAR_5;
 VAR_9->name = "Xilinx TEMAC MDIO";
 VAR_9->read = VAR_3;
 VAR_9->write = VAR_4;
 VAR_9->parent = VAR_5->dev;

 VAR_5->mii_bus = VAR_9;

 VAR_12 = FUNC_5(VAR_9, VAR_8);
 if (VAR_12)
  return VAR_12;

 FUNC_0(VAR_5->dev, "MDIO bus registered;  MC:%x\n",
  FUNC_8(VAR_5, VAR_2));
 return 0;
}
