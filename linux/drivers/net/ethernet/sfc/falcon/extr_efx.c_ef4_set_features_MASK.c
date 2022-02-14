
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; } ;
struct ef4_nic {TYPE_1__* type; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int (* filter_clear_rx ) (struct ef4_nic*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 struct ef4_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ef4_nic*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, netdev_features_t VAR_4)
{
 struct ef4_nic *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;


 if (VAR_3->features & ~VAR_4 & VAR_2) {
  VAR_6 = VAR_5->type->filter_clear_rx(VAR_5, VAR_0);
  if (VAR_6)
   return VAR_6;
 }


 if ((VAR_3->features ^ VAR_4) & VAR_1) {



  FUNC_0(VAR_3);
 }

 return 0;
}
