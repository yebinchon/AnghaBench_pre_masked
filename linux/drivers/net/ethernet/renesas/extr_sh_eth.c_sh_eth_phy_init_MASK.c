
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sh_eth_private {int duplex; TYPE_4__* cd; int phy_interface; int phy_id; TYPE_3__* mii_bus; scalar_t__ speed; scalar_t__ link; } ;
struct phy_device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
typedef int phy_id ;
struct TYPE_8__ {scalar_t__ register_type; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_5__ {struct device_node* of_node; } ;


 int VAR_0 ;
 struct phy_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct phy_device*) ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_2 (struct phy_device*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct net_device*,char*) ;
 struct sh_eth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (struct device_node*,char*,int ) ;
 struct phy_device* FUNC_7 (struct net_device*,struct device_node*,int ,int ,int ) ;
 int FUNC_8 (struct phy_device*) ;
 struct phy_device* FUNC_9 (struct net_device*,char*,int ,int ) ;
 int FUNC_10 (struct phy_device*) ;
 int FUNC_11 (struct phy_device*,int ) ;
 int VAR_5 ;
 int FUNC_12 (char*,int,char*,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.parent->of_node;
 struct sh_eth_private *VAR_8 = FUNC_4(VAR_6);
 struct phy_device *VAR_9;

 VAR_8->link = 0;
 VAR_8->speed = 0;
 VAR_8->duplex = -1;


 if (VAR_7) {
  struct device_node *VAR_10;

  VAR_10 = FUNC_6(VAR_7, "phy-handle", 0);
  VAR_9 = FUNC_7(VAR_6, VAR_10,
     VAR_5, 0,
     VAR_8->phy_interface);

  FUNC_5(VAR_10);
  if (!VAR_9)
   VAR_9 = FUNC_0(-VAR_0);
 } else {
  char VAR_11[VAR_1 + 3];

  FUNC_12(VAR_11, sizeof(VAR_11), VAR_2,
    VAR_8->mii_bus->id, VAR_8->phy_id);

  VAR_9 = FUNC_9(VAR_6, VAR_11, VAR_5,
         VAR_8->phy_interface);
 }

 if (FUNC_1(VAR_9)) {
  FUNC_3(VAR_6, "failed to connect PHY\n");
  return FUNC_2(VAR_9);
 }


 if (VAR_8->cd->register_type != VAR_3) {
  int VAR_12 = FUNC_11(VAR_9, VAR_4);
  if (VAR_12) {
   FUNC_3(VAR_6, "failed to limit PHY to 100 Mbit/s\n");
   FUNC_10(VAR_9);
   return VAR_12;
  }
 }

 FUNC_8(VAR_9);

 return 0;
}
