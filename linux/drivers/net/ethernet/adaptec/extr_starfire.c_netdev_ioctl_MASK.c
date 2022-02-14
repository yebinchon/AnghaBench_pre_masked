
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {scalar_t__* phys; int lock; int mii_if; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {scalar_t__ phy_id; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,struct mii_ioctl_data*,int,int *) ;
 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 struct netdev_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct netdev_private *VAR_5 = FUNC_3(VAR_2);
 struct mii_ioctl_data *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 if (!FUNC_4(VAR_2))
  return -VAR_0;

 FUNC_5(&VAR_5->lock);
 VAR_7 = FUNC_1(&VAR_5->mii_if, VAR_6, VAR_4, ((void*)0));
 FUNC_6(&VAR_5->lock);

 if ((VAR_4 == VAR_1) && (VAR_6->phy_id == VAR_5->phys[0]))
  FUNC_0(VAR_2);

 return VAR_7;
}
