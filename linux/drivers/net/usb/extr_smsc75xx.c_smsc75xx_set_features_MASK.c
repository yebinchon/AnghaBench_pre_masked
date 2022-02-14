
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; scalar_t__* data; } ;
struct smsc75xx_priv {int rfe_ctl; int rfe_ctl_lock; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct usbnet*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
 netdev_features_t VAR_5)
{
 struct usbnet *VAR_6 = FUNC_0(VAR_4);
 struct smsc75xx_priv *VAR_7 = (struct smsc75xx_priv *)(VAR_6->data[0]);
 unsigned long VAR_8;
 int VAR_9;

 FUNC_3(&VAR_7->rfe_ctl_lock, VAR_8);

 if (VAR_5 & VAR_0)
  VAR_7->rfe_ctl |= VAR_3 | VAR_2;
 else
  VAR_7->rfe_ctl &= ~(VAR_3 | VAR_2);

 FUNC_4(&VAR_7->rfe_ctl_lock, VAR_8);


 VAR_9 = FUNC_2(VAR_6, VAR_1, VAR_7->rfe_ctl);
 if (VAR_9 < 0) {
  FUNC_1(VAR_6->net, "Error writing RFE_CTL\n");
  return VAR_9;
 }
 return 0;
}
