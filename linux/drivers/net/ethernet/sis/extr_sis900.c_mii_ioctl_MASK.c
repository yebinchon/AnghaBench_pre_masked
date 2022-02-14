
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sis900_private {TYPE_1__* mii; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct ifreq {int dummy; } ;
struct TYPE_2__ {int phy_addr; } ;


 int VAR_0 ;



 struct mii_ioctl_data* FUNC_0 (struct ifreq*) ;
 int FUNC_1 (struct net_device*,int,int) ;
 int FUNC_2 (struct net_device*,int,int,int ) ;
 struct sis900_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct sis900_private *VAR_4 = FUNC_3(VAR_1);
 struct mii_ioctl_data *VAR_5 = FUNC_0(VAR_2);

 switch(VAR_3) {
 case 130:
  VAR_5->phy_id = VAR_4->mii->phy_addr;


 case 129:
  VAR_5->val_out = FUNC_1(VAR_1, VAR_5->phy_id & 0x1f, VAR_5->reg_num & 0x1f);
  return 0;

 case 128:
  FUNC_2(VAR_1, VAR_5->phy_id & 0x1f, VAR_5->reg_num & 0x1f, VAR_5->val_in);
  return 0;
 default:
  return -VAR_0;
 }
}
