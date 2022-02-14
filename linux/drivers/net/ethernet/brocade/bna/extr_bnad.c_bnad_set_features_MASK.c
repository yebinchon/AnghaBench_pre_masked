
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; } ;
struct bnad {int bna_lock; TYPE_1__* rx_info; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int rx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct bnad* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, netdev_features_t VAR_2)
{
 struct bnad *VAR_3 = FUNC_2(VAR_1);
 netdev_features_t VAR_4 = VAR_2 ^ VAR_1->features;

 if ((VAR_4 & VAR_0) && FUNC_3(VAR_1)) {
  unsigned long VAR_5;

  FUNC_4(&VAR_3->bna_lock, VAR_5);

  if (VAR_2 & VAR_0)
   FUNC_1(VAR_3->rx_info[0].rx);
  else
   FUNC_0(VAR_3->rx_info[0].rx);

  FUNC_5(&VAR_3->bna_lock, VAR_5);
 }

 return 0;
}
