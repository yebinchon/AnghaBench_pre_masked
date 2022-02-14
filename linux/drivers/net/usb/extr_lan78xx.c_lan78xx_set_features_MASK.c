
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lan78xx_priv {int rfe_ctl; int rfe_ctl_lock; } ;
struct lan78xx_net {scalar_t__* data; } ;
typedef int netdev_features_t ;


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
 int FUNC_0 (struct lan78xx_net*,int ,int) ;
 struct lan78xx_net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_10,
    netdev_features_t VAR_11)
{
 struct lan78xx_net *VAR_12 = FUNC_1(VAR_10);
 struct lan78xx_priv *VAR_13 = (struct lan78xx_priv *)(VAR_12->data[0]);
 unsigned long VAR_14;
 int VAR_15;

 FUNC_2(&VAR_13->rfe_ctl_lock, VAR_14);

 if (VAR_11 & VAR_2) {
  VAR_13->rfe_ctl |= VAR_7 | VAR_6;
  VAR_13->rfe_ctl |= VAR_4 | VAR_5;
 } else {
  VAR_13->rfe_ctl &= ~(VAR_7 | VAR_6);
  VAR_13->rfe_ctl &= ~(VAR_4 | VAR_5);
 }

 if (VAR_11 & VAR_1)
  VAR_13->rfe_ctl |= VAR_9;
 else
  VAR_13->rfe_ctl &= ~VAR_9;

 if (VAR_11 & VAR_0)
  VAR_13->rfe_ctl |= VAR_8;
 else
  VAR_13->rfe_ctl &= ~VAR_8;

 FUNC_3(&VAR_13->rfe_ctl_lock, VAR_14);

 VAR_15 = FUNC_0(VAR_12, VAR_3, VAR_13->rfe_ctl);

 return 0;
}
