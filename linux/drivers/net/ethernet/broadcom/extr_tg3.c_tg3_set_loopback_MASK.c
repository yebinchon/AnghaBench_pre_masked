
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int mac_mode; int lock; int dev; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct tg3* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tg3*,int) ;
 int FUNC_6 (struct tg3*,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2, netdev_features_t VAR_3)
{
 struct tg3 *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 & VAR_1) {
  if (VAR_4->mac_mode & VAR_0)
   return;

  FUNC_3(&VAR_4->lock);
  FUNC_5(VAR_4, 1);
  FUNC_2(VAR_4->dev);
  FUNC_4(&VAR_4->lock);
  FUNC_0(VAR_2, "Internal MAC loopback mode enabled.\n");
 } else {
  if (!(VAR_4->mac_mode & VAR_0))
   return;

  FUNC_3(&VAR_4->lock);
  FUNC_5(VAR_4, 0);

  FUNC_6(VAR_4, 1);
  FUNC_4(&VAR_4->lock);
  FUNC_0(VAR_2, "Internal MAC loopback mode disabled.\n");
 }
}
