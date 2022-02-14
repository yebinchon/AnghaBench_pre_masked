
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_if_info {int phy_id; } ;
struct usbnet {int net; struct mii_if_info mii; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_2)
{
 struct mii_if_info *VAR_3 = &VAR_2->mii;
 int VAR_4;


 VAR_4 = FUNC_1(VAR_2->net, VAR_3->phy_id, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2->net, "Error reading MII_BMSR\n");
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_2->net, VAR_3->phy_id, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2->net, "Error reading MII_BMSR\n");
  return VAR_4;
 }

 return !!(VAR_4 & VAR_0);
}
