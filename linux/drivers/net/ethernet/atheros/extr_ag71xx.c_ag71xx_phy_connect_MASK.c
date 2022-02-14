
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct device_node {int dummy; } ;
struct ag71xx {int phy_if_mode; struct net_device* ndev; TYPE_2__* pdev; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ag71xx*,int ,struct net_device*,char*,...) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,char*,int ) ;
 struct phy_device* FUNC_4 (struct net_device*,struct device_node*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct phy_device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct ag71xx *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->pdev->dev.of_node;
 struct net_device *VAR_5 = VAR_3->ndev;
 struct device_node *VAR_6;
 struct phy_device *VAR_7;
 int VAR_8;

 if (FUNC_5(VAR_4)) {
  VAR_8 = FUNC_6(VAR_4);
  if (VAR_8 < 0) {
   FUNC_0(VAR_3, VAR_2, VAR_5, "Failed to register fixed PHY link: %d\n",
      VAR_8);
   return VAR_8;
  }

  VAR_6 = FUNC_1(VAR_4);
 } else {
  VAR_6 = FUNC_3(VAR_4, "phy-handle", 0);
 }

 if (!VAR_6) {
  FUNC_0(VAR_3, VAR_2, VAR_5, "Could not find valid phy node\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_3->ndev, VAR_6, VAR_1,
    0, VAR_3->phy_if_mode);

 FUNC_2(VAR_6);

 if (!VAR_7) {
  FUNC_0(VAR_3, VAR_2, VAR_5, "Could not connect to PHY device\n");
  return -VAR_0;
 }

 FUNC_7(VAR_7);

 return 0;
}
