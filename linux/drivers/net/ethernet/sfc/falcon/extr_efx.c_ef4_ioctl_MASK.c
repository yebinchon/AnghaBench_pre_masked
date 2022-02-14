
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; } ;
struct ifreq {int dummy; } ;
struct ef4_nic {int mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mii_ioctl_data* FUNC_0 (struct ifreq*) ;
 int FUNC_1 (int *,struct mii_ioctl_data*,int) ;
 struct ef4_nic* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct ef4_nic *VAR_6 = FUNC_2(VAR_3);
 struct mii_ioctl_data *VAR_7 = FUNC_0(VAR_4);


 if ((VAR_5 == VAR_1 || VAR_5 == VAR_2) &&
     (VAR_7->phy_id & 0xfc00) == 0x0400)
  VAR_7->phy_id ^= VAR_0 | 0x0400;

 return FUNC_1(&VAR_6->mdio, VAR_7, VAR_5);
}
