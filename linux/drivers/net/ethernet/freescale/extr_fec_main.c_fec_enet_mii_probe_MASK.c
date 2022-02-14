
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct fec_enet_private {int dev_id; int quirks; scalar_t__ full_duplex; scalar_t__ link; int phy_interface; TYPE_1__* mii_bus; scalar_t__ phy_node; } ;
typedef int phy_name ;
struct TYPE_2__ {char* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct fec_enet_private* FUNC_5 (struct net_device*) ;
 struct phy_device* FUNC_6 (struct net_device*,scalar_t__,int *,int ,int ) ;
 int FUNC_7 (struct phy_device*) ;
 struct phy_device* FUNC_8 (struct net_device*,char*,int *,int ) ;
 int FUNC_9 (struct phy_device*,int ) ;
 int FUNC_10 (struct phy_device*,int) ;
 int FUNC_11 (struct phy_device*) ;
 int FUNC_12 (char*,int,char*,char*,int) ;
 int FUNC_13 (char*,char*,int) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_7)
{
 struct fec_enet_private *VAR_8 = FUNC_5(VAR_7);
 struct phy_device *VAR_9 = ((void*)0);
 char VAR_10[VAR_3];
 char VAR_11[VAR_3 + 3];
 int VAR_12;
 int VAR_13 = VAR_8->dev_id;

 if (VAR_8->phy_node) {
  VAR_9 = FUNC_6(VAR_7, VAR_8->phy_node,
      &VAR_6, 0,
      VAR_8->phy_interface);
  if (!VAR_9) {
   FUNC_3(VAR_7, "Unable to connect to phy\n");
   return -VAR_0;
  }
 } else {

  for (VAR_12 = 0; (VAR_12 < VAR_5); VAR_12++) {
   if (!FUNC_2(VAR_8->mii_bus, VAR_12))
    continue;
   if (VAR_13--)
    continue;
   FUNC_13(VAR_10, VAR_8->mii_bus->id, VAR_3);
   break;
  }

  if (VAR_12 >= VAR_5) {
   FUNC_4(VAR_7, "no PHY, assuming direct connection to switch\n");
   FUNC_13(VAR_10, "fixed-0", VAR_3);
   VAR_12 = 0;
  }

  FUNC_12(VAR_11, sizeof(VAR_11),
    VAR_4, VAR_10, VAR_12);
  VAR_9 = FUNC_8(VAR_7, VAR_11, &VAR_6,
          VAR_8->phy_interface);
 }

 if (FUNC_0(VAR_9)) {
  FUNC_3(VAR_7, "could not attach to PHY\n");
  return FUNC_1(VAR_9);
 }


 if (VAR_8->quirks & VAR_2) {
  FUNC_10(VAR_9, 1000);
  FUNC_9(VAR_9,
         VAR_1);

  FUNC_11(VAR_9);

 }
 else
  FUNC_10(VAR_9, 100);

 VAR_8->link = 0;
 VAR_8->full_duplex = 0;

 FUNC_7(VAR_9);

 return 0;
}
