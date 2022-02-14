
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int data; } ;
struct cpsw_phy_sel_priv {int rmii_clock_external; int gmii_sel; int cpsw_phy_sel; TYPE_1__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,struct cpsw_phy_sel_priv*) ;
 int FUNC_4 (TYPE_1__*,struct resource*) ;
 struct cpsw_phy_sel_priv* FUNC_5 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_6 (int ,char*,int *) ;
 struct of_device_id* FUNC_7 (int ,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,char*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct resource *VAR_6;
 const struct of_device_id *VAR_7;
 struct cpsw_phy_sel_priv *VAR_8;

 VAR_7 = FUNC_7(VAR_4, VAR_5->dev.of_node);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_5(&VAR_5->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  FUNC_2(&VAR_5->dev, "unable to alloc memory for cpsw phy sel\n");
  return -VAR_1;
 }

 VAR_8->dev = &VAR_5->dev;
 VAR_8->cpsw_phy_sel = VAR_7->data;

 VAR_6 = FUNC_8(VAR_5, VAR_3, "gmii-sel");
 VAR_8->gmii_sel = FUNC_4(&VAR_5->dev, VAR_6);
 if (FUNC_0(VAR_8->gmii_sel))
  return FUNC_1(VAR_8->gmii_sel);

 if (FUNC_6(VAR_5->dev.of_node, "rmii-clock-ext", ((void*)0)))
  VAR_8->rmii_clock_external = 1;

 FUNC_3(&VAR_5->dev, VAR_8);

 return 0;
}
