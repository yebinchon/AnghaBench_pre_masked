
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_if_info {int phy_id; } ;
struct usbnet {int net; struct mii_if_info mii; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_2, u16 VAR_3)
{
 struct mii_if_info *VAR_4 = &VAR_2->mii;
 int VAR_5;

 FUNC_0(VAR_2->net, "enabling PHY wakeup interrupts\n");


 VAR_5 = FUNC_1(VAR_2->net, VAR_4->phy_id, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_1(VAR_2->net, VAR_4->phy_id, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 |= VAR_3;

 FUNC_2(VAR_2->net, VAR_4->phy_id, VAR_0, VAR_5);

 return 0;
}
