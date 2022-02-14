
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int val_in; } ;
struct jme_adapter {int flags; int old_cmd; int phy_lock; int mii_if; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct mii_ioctl_data*,int,unsigned int*) ;
 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (struct net_device*,int *) ;
 int FUNC_3 (struct jme_adapter*) ;
 struct jme_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_6, struct ifreq *VAR_7, int VAR_8)
{
 int VAR_9;
 struct jme_adapter *VAR_10 = FUNC_4(VAR_6);
 struct mii_ioctl_data *VAR_11 = FUNC_1(VAR_7);
 unsigned int VAR_12;

 if (VAR_8 == VAR_5) {
  u16 VAR_13 = VAR_11->val_in;
  if (!(VAR_13 & (VAR_1|VAR_0)) &&
      (VAR_13 & VAR_2))
   return -VAR_3;
 }

 FUNC_6(&VAR_10->phy_lock);
 VAR_9 = FUNC_0(&VAR_10->mii_if, VAR_11, VAR_8, &VAR_12);
 FUNC_7(&VAR_10->phy_lock);

 if (!VAR_9 && (VAR_8 == VAR_5)) {
  if (VAR_12)
   FUNC_3(VAR_10);
  FUNC_2(VAR_6, &VAR_10->old_cmd);
  FUNC_5(VAR_4, &VAR_10->flags);
 }

 return VAR_9;
}
