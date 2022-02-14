
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_ioctl_data {int reg_num; int val_in; int val_out; int phy_id; } ;
struct ifreq {int dummy; } ;
struct atl2_adapter {int stats_lock; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,int,int ) ;
 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 struct atl2_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct atl2_adapter *VAR_6 = FUNC_3(VAR_3);
 struct mii_ioctl_data *VAR_7 = FUNC_2(VAR_4);
 unsigned long VAR_8;

 switch (VAR_5) {
 case 130:
  VAR_7->phy_id = 0;
  break;
 case 129:
  FUNC_4(&VAR_6->stats_lock, VAR_8);
  if (FUNC_0(&VAR_6->hw,
   VAR_7->reg_num & 0x1F, &VAR_7->val_out)) {
   FUNC_5(&VAR_6->stats_lock, VAR_8);
   return -VAR_1;
  }
  FUNC_5(&VAR_6->stats_lock, VAR_8);
  break;
 case 128:
  if (VAR_7->reg_num & ~(0x1F))
   return -VAR_0;
  FUNC_4(&VAR_6->stats_lock, VAR_8);
  if (FUNC_1(&VAR_6->hw, VAR_7->reg_num,
   VAR_7->val_in)) {
   FUNC_5(&VAR_6->stats_lock, VAR_8);
   return -VAR_1;
  }
  FUNC_5(&VAR_6->stats_lock, VAR_8);
  break;
 default:
  return -VAR_2;
 }
 return 0;
}
