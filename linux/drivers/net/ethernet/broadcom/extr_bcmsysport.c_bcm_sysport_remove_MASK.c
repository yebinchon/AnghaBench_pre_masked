
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct net_device {int dummy; } ;
struct device_node {int dummy; } ;
struct bcm_sysport_priv {int dsa_notifier; } ;


 struct net_device* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct net_device*) ;
 struct bcm_sysport_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (struct device_node*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_0(&VAR_0->dev);
 struct bcm_sysport_priv *VAR_2 = FUNC_3(VAR_1);
 struct device_node *VAR_3 = VAR_0->dev.of_node;




 FUNC_6(&VAR_2->dsa_notifier);
 FUNC_7(VAR_1);
 if (FUNC_5(VAR_3))
  FUNC_4(VAR_3);
 FUNC_2(VAR_1);
 FUNC_1(&VAR_0->dev, ((void*)0));

 return 0;
}
