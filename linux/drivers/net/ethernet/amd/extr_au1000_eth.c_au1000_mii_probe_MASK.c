
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int attached_dev; } ;
struct net_device {int dev; } ;
struct au1000_private {int mac_id; int phy_addr; int old_duplex; scalar_t__ old_speed; scalar_t__ old_link; int mii_bus; scalar_t__ phy1_search_mac0; int phy_search_highest_addr; scalar_t__ phy_static_config; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct phy_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct phy_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*,char*) ;
 struct au1000_private* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct phy_device*) ;
 struct phy_device* FUNC_9 (struct net_device*,int ,int *,int ) ;
 int FUNC_10 (struct phy_device*,int ) ;
 int FUNC_11 (struct phy_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_4)
{
 struct au1000_private *const VAR_5 = FUNC_7(VAR_4);
 struct phy_device *VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_5->phy_static_config) {
  FUNC_0(VAR_5->mac_id < 0 || VAR_5->mac_id > 1);

  if (VAR_5->phy_addr)
   VAR_6 = FUNC_4(VAR_5->mii_bus, VAR_5->phy_addr);
  else
   FUNC_6(VAR_4, "using PHY-less setup\n");
  return 0;
 }




 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  if (FUNC_4(VAR_5->mii_bus, VAR_7)) {
   VAR_6 = FUNC_4(VAR_5->mii_bus, VAR_7);
   if (!VAR_5->phy_search_highest_addr)

    break;
  }

 if (VAR_5->phy1_search_mac0) {

  if (!VAR_6 && (VAR_5->mac_id == 1)) {

   FUNC_3(&VAR_4->dev, ": no PHY found on MAC1, "
    "let's see if it's attached to MAC0...\n");




   for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
    struct phy_device *const VAR_8 =
     FUNC_4(VAR_5->mii_bus,
       VAR_7);

    if (VAR_5->mac_id == 1)
     break;


    if (!VAR_8)
     continue;


    if (VAR_8->attached_dev)
     continue;

    VAR_6 = VAR_8;
    break;
   }
  }
 }

 if (!VAR_6) {
  FUNC_5(VAR_4, "no PHY found\n");
  return -1;
 }


 FUNC_0(VAR_6->attached_dev);

 VAR_6 = FUNC_9(VAR_4, FUNC_11(VAR_6),
        &VAR_3, VAR_0);

 if (FUNC_1(VAR_6)) {
  FUNC_5(VAR_4, "Could not attach to PHY\n");
  return FUNC_2(VAR_6);
 }

 FUNC_10(VAR_6, VAR_2);

 VAR_5->old_link = 0;
 VAR_5->old_speed = 0;
 VAR_5->old_duplex = -1;

 FUNC_8(VAR_6);

 return 0;
}
