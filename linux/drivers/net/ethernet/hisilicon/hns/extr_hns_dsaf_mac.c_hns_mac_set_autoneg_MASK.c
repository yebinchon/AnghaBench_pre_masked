
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mac_driver {int (* set_an_mode ) (struct mac_driver*,int ) ;} ;
struct hns_mac_cb {scalar_t__ phy_if; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct mac_driver* FUNC_1 (struct hns_mac_cb*) ;
 int FUNC_2 (struct mac_driver*,int ) ;

int FUNC_3(struct hns_mac_cb *VAR_2, u8 VAR_3)
{
 struct mac_driver *VAR_4 = FUNC_1(VAR_2);

 if (VAR_2->phy_if == VAR_1 && VAR_3) {
  FUNC_0(VAR_2->dev, "enabling autoneg is not allowed!\n");
  return -VAR_0;
 }

 if (VAR_4->set_an_mode)
  VAR_4->set_an_mode(VAR_4, VAR_3);

 return 0;
}
