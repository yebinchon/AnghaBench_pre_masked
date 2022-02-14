
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int phy_addr_external; int advertising; } ;
struct net_device {int if_port; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 struct mii_ioctl_data* FUNC_0 (struct ifreq*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int,int ) ;
 int FUNC_3 (struct net_device*,int,int) ;
 int FUNC_4 (struct net_device*,int,int,int ) ;
 int FUNC_5 (struct net_device*,int) ;
 struct netdev_private* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct mii_ioctl_data *VAR_6 = FUNC_0(VAR_4);
 struct netdev_private *VAR_7 = FUNC_6(VAR_3);

 switch(VAR_5) {
 case 130:
  VAR_6->phy_id = VAR_7->phy_addr_external;


 case 129:




  if (VAR_3->if_port == VAR_2) {
   if ((VAR_6->phy_id & 0x1f) == VAR_7->phy_addr_external)
    VAR_6->val_out = FUNC_1(VAR_3,
       VAR_6->reg_num & 0x1f);
   else
    VAR_6->val_out = 0;
  } else {
   FUNC_5(VAR_3, VAR_6->phy_id & 0x1f);
   VAR_6->val_out = FUNC_3(VAR_3, VAR_6->phy_id & 0x1f,
       VAR_6->reg_num & 0x1f);
  }
  return 0;

 case 128:
  if (VAR_3->if_port == VAR_2) {
   if ((VAR_6->phy_id & 0x1f) == VAR_7->phy_addr_external) {
     if ((VAR_6->reg_num & 0x1f) == VAR_1)
     VAR_7->advertising = VAR_6->val_in;
    FUNC_2(VAR_3, VAR_6->reg_num & 0x1f,
       VAR_6->val_in);
   }
  } else {
   if ((VAR_6->phy_id & 0x1f) == VAR_7->phy_addr_external) {
     if ((VAR_6->reg_num & 0x1f) == VAR_1)
     VAR_7->advertising = VAR_6->val_in;
   }
   FUNC_5(VAR_3, VAR_6->phy_id & 0x1f);
   FUNC_4(VAR_3, VAR_6->phy_id & 0x1f,
      VAR_6->reg_num & 0x1f,
      VAR_6->val_in);
  }
  return 0;
 default:
  return -VAR_0;
 }
}
