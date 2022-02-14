
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; } ;
struct ifreq {int dummy; } ;
struct efx_nic {int mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct efx_nic*,struct ifreq*) ;
 int FUNC_1 (struct efx_nic*,struct ifreq*) ;
 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 int FUNC_3 (int *,struct mii_ioctl_data*,int) ;
 struct efx_nic* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5, struct ifreq *VAR_6, int VAR_7)
{
 struct efx_nic *VAR_8 = FUNC_4(VAR_5);
 struct mii_ioctl_data *VAR_9 = FUNC_2(VAR_6);

 if (VAR_7 == VAR_3)
  return FUNC_1(VAR_8, VAR_6);
 if (VAR_7 == VAR_1)
  return FUNC_0(VAR_8, VAR_6);


 if ((VAR_7 == VAR_2 || VAR_7 == VAR_4) &&
     (VAR_9->phy_id & 0xfc00) == 0x0400)
  VAR_9->phy_id ^= VAR_0 | 0x0400;

 return FUNC_3(&VAR_8->mdio, VAR_9, VAR_7);
}
