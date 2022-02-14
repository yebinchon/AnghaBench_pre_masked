
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mdio; } ;
struct port_info {TYPE_1__ phy; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; } ;
struct ifreq {int ifr_data; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct net_device*,int ) ;
 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (int *,struct mii_ioctl_data*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 struct port_info* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct mii_ioctl_data *VAR_4 = FUNC_1(VAR_2);
 struct port_info *VAR_5 = FUNC_6(VAR_1);
 struct adapter *VAR_6 = VAR_5->adapter;

 switch (VAR_3) {
 case 129:
 case 128:

  if (FUNC_2(VAR_6) &&
      !FUNC_5(VAR_4->phy_id) &&
      (VAR_4->phy_id & 0x1f00) &&
      !(VAR_4->phy_id & 0xe0e0))
   VAR_4->phy_id = FUNC_4(VAR_4->phy_id >> 8,
             VAR_4->phy_id & 0x1f);

 case 130:
  return FUNC_3(&VAR_5->phy.mdio, VAR_4, VAR_3);
 case 131:
  return FUNC_0(VAR_1, VAR_2->ifr_data);
 default:
  return -VAR_0;
 }
}
