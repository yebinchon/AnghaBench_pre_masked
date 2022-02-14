
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int reg_num; int val_in; int val_out; int phy_id; } ;
struct ifreq {int dummy; } ;
struct e1000_hw {scalar_t__ media_type; int autoneg; int autoneg_advertised; int phy_addr; } ;
struct e1000_adapter {int netdev; int stats_lock; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*,int,int *) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*,int ,int ) ;
 int FUNC_5 (struct e1000_hw*,int,int) ;
 struct mii_ioctl_data* FUNC_6 (struct ifreq*) ;
 struct e1000_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_12, struct ifreq *VAR_13,
      int VAR_14)
{
 struct e1000_adapter *VAR_15 = FUNC_7(VAR_12);
 struct e1000_hw *VAR_16 = &VAR_15->hw;
 struct mii_ioctl_data *VAR_17 = FUNC_6(VAR_13);
 int VAR_18;
 u16 VAR_19;
 unsigned long VAR_20;

 if (VAR_16->media_type != VAR_11)
  return -VAR_5;

 switch (VAR_14) {
 case 130:
  VAR_17->phy_id = VAR_16->phy_addr;
  break;
 case 129:
  FUNC_9(&VAR_15->stats_lock, VAR_20);
  if (FUNC_1(VAR_16, VAR_17->reg_num & 0x1F,
       &VAR_17->val_out)) {
   FUNC_10(&VAR_15->stats_lock, VAR_20);
   return -VAR_4;
  }
  FUNC_10(&VAR_15->stats_lock, VAR_20);
  break;
 case 128:
  if (VAR_17->reg_num & ~(0x1F))
   return -VAR_3;
  VAR_19 = VAR_17->val_in;
  FUNC_9(&VAR_15->stats_lock, VAR_20);
  if (FUNC_5(VAR_16, VAR_17->reg_num,
     VAR_19)) {
   FUNC_10(&VAR_15->stats_lock, VAR_20);
   return -VAR_4;
  }
  FUNC_10(&VAR_15->stats_lock, VAR_20);
  if (VAR_16->media_type == VAR_11) {
   switch (VAR_17->reg_num) {
   case 131:
    if (VAR_19 & VAR_7)
     break;
    if (VAR_19 & VAR_6) {
     VAR_16->autoneg = 1;
     VAR_16->autoneg_advertised = 0x2F;
    } else {
     u32 VAR_21;
     if (VAR_19 & 0x40)
      VAR_21 = VAR_10;
     else if (VAR_19 & 0x2000)
      VAR_21 = VAR_9;
     else
      VAR_21 = VAR_8;
     VAR_18 = FUNC_4(
      VAR_15, VAR_21,
      ((VAR_19 & 0x100)
       ? VAR_0 :
       VAR_1));
     if (VAR_18)
      return VAR_18;
    }
    if (FUNC_8(VAR_15->netdev))
     FUNC_2(VAR_15);
    else
     FUNC_3(VAR_15);
    break;
   case 132:
   case 133:
    if (FUNC_0(VAR_16))
     return -VAR_4;
    break;
   }
  } else {
   switch (VAR_17->reg_num) {
   case 131:
    if (VAR_19 & VAR_7)
     break;
    if (FUNC_8(VAR_15->netdev))
     FUNC_2(VAR_15);
    else
     FUNC_3(VAR_15);
    break;
   }
  }
  break;
 default:
  return -VAR_5;
 }
 return VAR_2;
}
