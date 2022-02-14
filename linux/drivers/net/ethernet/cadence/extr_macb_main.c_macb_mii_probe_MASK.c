
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct macb {int caps; int duplex; scalar_t__ speed; scalar_t__ link; int phy_interface; int mii_bus; scalar_t__ phy_node; TYPE_2__* pdev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct macb*) ;
 struct phy_device* FUNC_3 (int ,int) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct macb* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct device_node*) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,int ) ;
 struct phy_device* FUNC_8 (struct net_device*,scalar_t__,int *,int ,int ) ;
 scalar_t__ FUNC_9 (struct device_node*) ;
 int FUNC_10 (struct net_device*,struct phy_device*,int *,int ) ;
 struct phy_device* FUNC_11 (int ) ;
 int FUNC_12 (struct phy_device*,int ) ;
 int FUNC_13 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_9)
{
 struct macb *VAR_10 = FUNC_5(VAR_9);
 struct phy_device *VAR_11;
 struct device_node *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = VAR_10->pdev->dev.of_node;
 VAR_13 = 0;

 if (VAR_12) {
  if (FUNC_9(VAR_12)) {
   VAR_10->phy_node = FUNC_6(VAR_12);
  } else {
   VAR_10->phy_node = FUNC_7(VAR_12, "phy-handle", 0);




   if (!VAR_10->phy_node && !FUNC_11(VAR_10->mii_bus)) {
    for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
     VAR_11 = FUNC_3(VAR_10->mii_bus, VAR_14);
     if (FUNC_0(VAR_11) &&
         FUNC_1(VAR_11) != -VAR_0) {
      VAR_13 = FUNC_1(VAR_11);
      break;
     }
    }

    if (VAR_13)
     return -VAR_0;
   }
  }
 }

 if (VAR_10->phy_node) {
  VAR_11 = FUNC_8(VAR_9, VAR_10->phy_node,
     &VAR_8, 0,
     VAR_10->phy_interface);
  if (!VAR_11)
   return -VAR_0;
 } else {
  VAR_11 = FUNC_11(VAR_10->mii_bus);
  if (!VAR_11) {
   FUNC_4(VAR_9, "no PHY found\n");
   return -VAR_1;
  }


  VAR_13 = FUNC_10(VAR_9, VAR_11, &VAR_8,
      VAR_10->phy_interface);
  if (VAR_13) {
   FUNC_4(VAR_9, "Could not attach to PHY\n");
   return VAR_13;
  }
 }


 if (FUNC_2(VAR_10) && VAR_10->caps & VAR_3)
  FUNC_13(VAR_11, VAR_7);
 else
  FUNC_13(VAR_11, VAR_6);

 if (VAR_10->caps & VAR_4)
  FUNC_12(VAR_11,
         VAR_2);

 VAR_10->link = 0;
 VAR_10->speed = 0;
 VAR_10->duplex = -1;

 return 0;
}
