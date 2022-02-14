
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int phy_flags; int phy_addr; int lock; int mdio_bus; } ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tg3*,int,int,int *) ;
 int FUNC_1 (struct tg3*,int,int,int ) ;
 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 struct phy_device* FUNC_3 (int ,int) ;
 struct tg3* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct phy_device*,struct ifreq*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct tg3*,int ) ;
 int FUNC_10 (struct net_device*,struct ifreq*) ;
 int FUNC_11 (struct net_device*,struct ifreq*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_5, struct ifreq *VAR_6, int VAR_7)
{
 struct mii_ioctl_data *VAR_8 = FUNC_2(VAR_6);
 struct tg3 *VAR_9 = FUNC_4(VAR_5);
 int VAR_10;

 if (FUNC_9(VAR_9, VAR_4)) {
  struct phy_device *VAR_11;
  if (!(VAR_9->phy_flags & VAR_2))
   return -VAR_0;
  VAR_11 = FUNC_3(VAR_9->mdio_bus, VAR_9->phy_addr);
  return FUNC_6(VAR_11, VAR_6, VAR_7);
 }

 switch (VAR_7) {
 case 131:
  VAR_8->phy_id = VAR_9->phy_addr;


 case 130: {
  u32 VAR_12;

  if (VAR_9->phy_flags & VAR_3)
   break;

  if (!FUNC_5(VAR_5))
   return -VAR_0;

  FUNC_7(&VAR_9->lock);
  VAR_10 = FUNC_0(VAR_9, VAR_8->phy_id & 0x1f,
        VAR_8->reg_num & 0x1f, &VAR_12);
  FUNC_8(&VAR_9->lock);

  VAR_8->val_out = VAR_12;

  return VAR_10;
 }

 case 128:
  if (VAR_9->phy_flags & VAR_3)
   break;

  if (!FUNC_5(VAR_5))
   return -VAR_0;

  FUNC_7(&VAR_9->lock);
  VAR_10 = FUNC_1(VAR_9, VAR_8->phy_id & 0x1f,
         VAR_8->reg_num & 0x1f, VAR_8->val_in);
  FUNC_8(&VAR_9->lock);

  return VAR_10;

 case 129:
  return FUNC_11(VAR_5, VAR_6);

 case 132:
  return FUNC_10(VAR_5, VAR_6);

 default:

  break;
 }
 return -VAR_1;
}
