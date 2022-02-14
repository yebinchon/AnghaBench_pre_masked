
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; } ;
struct efx_nic {TYPE_1__* type; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int (* filter_clear_rx ) (struct efx_nic*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct efx_nic*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, netdev_features_t VAR_5)
{
 struct efx_nic *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;


 if (VAR_4->features & ~VAR_5 & VAR_2) {
  VAR_7 = VAR_6->type->filter_clear_rx(VAR_6, VAR_0);
  if (VAR_7)
   return VAR_7;
 }




 if ((VAR_4->features ^ VAR_5) & (VAR_1 |
       VAR_3)) {



  FUNC_0(VAR_4);
 }

 return 0;
}
