
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int features; } ;
struct qede_reload_args {int (* func ) (struct qede_dev*,struct qede_reload_args*) ;TYPE_1__ u; } ;
struct qede_dev {scalar_t__ xdp_prog; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int FUNC_0 (struct qede_dev*) ;
 int FUNC_1 (struct qede_dev*) ;
 struct qede_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct qede_dev*,struct qede_reload_args*,int) ;
 int FUNC_4 (struct qede_dev*,struct qede_reload_args*) ;
 int FUNC_5 (struct qede_dev*,struct qede_reload_args*) ;

int FUNC_6(struct net_device *VAR_1, netdev_features_t VAR_2)
{
 struct qede_dev *VAR_3 = FUNC_2(VAR_1);
 netdev_features_t VAR_4 = VAR_2 ^ VAR_1->features;
 bool VAR_5 = 0;

 if (VAR_4 & VAR_0)
  VAR_5 = 1;

 if (VAR_5) {
  struct qede_reload_args VAR_6;

  VAR_6.u.features = VAR_2;
  VAR_6.func = &FUNC_4;





  FUNC_0(VAR_3);
  if (VAR_3->xdp_prog)
   VAR_6.func(VAR_3, &VAR_6);
  else
   FUNC_3(VAR_3, &VAR_6, 1);
  FUNC_1(VAR_3);

  return 1;
 }

 return 0;
}
