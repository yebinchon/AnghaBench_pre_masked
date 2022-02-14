
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unimac_mdio_pdata {char* bus_name; int flags; scalar_t__ start; scalar_t__ end; struct bcmgenet_priv* wait_func_data; int wait_func; } ;
struct resource {char* bus_name; int flags; scalar_t__ start; scalar_t__ end; struct bcmgenet_priv* wait_func_data; int wait_func; } ;
struct TYPE_2__ {struct device_node* of_node; struct TYPE_2__* parent; struct bcmgenet_platform_data* platform_data; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct bcmgenet_priv {struct platform_device* mii_pdev; struct platform_device* pdev; } ;
struct bcmgenet_platform_data {int dummy; } ;
typedef int res ;
typedef int ppd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct device_node* FUNC_0 (struct bcmgenet_priv*) ;
 int FUNC_1 (struct bcmgenet_priv*,struct unimac_mdio_pdata*) ;
 int VAR_5 ;
 int FUNC_2 (struct unimac_mdio_pdata*,int ,int) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,struct unimac_mdio_pdata*,int) ;
 int FUNC_6 (struct platform_device*,struct unimac_mdio_pdata*,int) ;
 struct platform_device* FUNC_7 (int ,int) ;
 int FUNC_8 (struct platform_device*) ;
 struct unimac_mdio_pdata* FUNC_9 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct bcmgenet_priv *VAR_6)
{
 struct platform_device *VAR_7 = VAR_6->pdev;
 struct bcmgenet_platform_data *VAR_8 = VAR_7->dev.platform_data;
 struct device_node *VAR_9 = VAR_7->dev.of_node;
 struct unimac_mdio_pdata VAR_10;
 struct platform_device *VAR_11;
 struct resource *VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_9(VAR_7, VAR_2, 0);
 FUNC_2(&VAR_13, 0, sizeof(VAR_13));
 FUNC_2(&VAR_10, 0, sizeof(VAR_10));

 VAR_10.wait_func = VAR_5;
 VAR_10.wait_func_data = VAR_6;
 VAR_10.bus_name = "bcmgenet MII bus";




 VAR_13.start = VAR_12->start + VAR_1 + VAR_3;
 VAR_13.end = VAR_13.start + 8;
 VAR_13.flags = VAR_2;

 if (VAR_9)
  VAR_14 = FUNC_3(VAR_9, "eth");
 else
  VAR_14 = VAR_7->id;

 VAR_11 = FUNC_7(VAR_4, VAR_14);
 if (!VAR_11)
  return -VAR_0;


 VAR_6->mii_pdev = VAR_11;
 VAR_11->dev.parent = &VAR_7->dev;
 VAR_11->dev.of_node = FUNC_0(VAR_6);
 if (VAR_8)
  FUNC_1(VAR_6, &VAR_10);

 VAR_15 = FUNC_6(VAR_11, &VAR_13, 1);
 if (VAR_15)
  goto out;

 VAR_15 = FUNC_5(VAR_11, &VAR_10, sizeof(VAR_10));
 if (VAR_15)
  goto out;

 VAR_15 = FUNC_4(VAR_11);
 if (VAR_15)
  goto out;

 return 0;
out:
 FUNC_8(VAR_11);
 return VAR_15;
}
