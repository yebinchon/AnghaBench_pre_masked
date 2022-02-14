
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct mii_ioctl_data {scalar_t__ phy_id; } ;
struct ifreq {int dummy; } ;
struct ethoc {int mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct mii_ioctl_data* FUNC_0 (struct ifreq*) ;
 struct phy_device* FUNC_1 (int ,scalar_t__) ;
 struct ethoc* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct phy_device*,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5, struct ifreq *VAR_6, int VAR_7)
{
 struct ethoc *VAR_8 = FUNC_2(VAR_5);
 struct mii_ioctl_data *VAR_9 = FUNC_0(VAR_6);
 struct phy_device *VAR_10 = ((void*)0);

 if (!FUNC_3(VAR_5))
  return -VAR_0;

 if (VAR_7 != VAR_4) {
  if (VAR_9->phy_id >= VAR_3)
   return -VAR_2;

  VAR_10 = FUNC_1(VAR_8->mdio, VAR_9->phy_id);
  if (!VAR_10)
   return -VAR_1;
 } else {
  VAR_10 = VAR_5->phydev;
 }

 return FUNC_4(VAR_10, VAR_6, VAR_7);
}
