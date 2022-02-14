
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int flags; } ;
struct gfar_private {int state; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct gfar_private*) ;
 struct gfar_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct net_device *VAR_5, netdev_features_t VAR_6)
{
 netdev_features_t VAR_7 = VAR_5->features ^ VAR_6;
 struct gfar_private *VAR_8 = FUNC_3(VAR_5);
 int VAR_9 = 0;

 if (!(VAR_7 & (VAR_3 | VAR_2 |
    VAR_4)))
  return 0;

 while (FUNC_6(VAR_0, &VAR_8->state))
  FUNC_1();

 VAR_5->features = VAR_6;

 if (VAR_5->flags & VAR_1) {

  FUNC_5(VAR_5);
  VAR_9 = FUNC_4(VAR_5);
 } else {
  FUNC_2(VAR_8);
 }

 FUNC_0(VAR_0, &VAR_8->state);

 return VAR_9;
}
