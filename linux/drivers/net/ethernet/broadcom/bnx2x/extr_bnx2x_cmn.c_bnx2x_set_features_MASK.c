
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; } ;
struct TYPE_2__ {scalar_t__ loopback_mode; } ;
struct bnx2x {scalar_t__ recovery_state; TYPE_1__ link_params; int pdev; } ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 struct bnx2x* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct net_device *VAR_5, netdev_features_t VAR_6)
{
 struct bnx2x *VAR_7 = FUNC_1(VAR_5);
 netdev_features_t VAR_8 = VAR_6 ^ VAR_5->features;
 bool VAR_9 = 0;
 int VAR_10;


 if (!FUNC_2(VAR_7->pdev)) {
  if (VAR_6 & VAR_4) {
   if (VAR_7->link_params.loopback_mode != VAR_1) {
    VAR_7->link_params.loopback_mode = VAR_1;
    VAR_9 = 1;
   }
  } else {
   if (VAR_7->link_params.loopback_mode != VAR_2) {
    VAR_7->link_params.loopback_mode = VAR_2;
    VAR_9 = 1;
   }
  }
 }


 VAR_8 &= ~VAR_3;

 if (VAR_8)
  VAR_9 = 1;

 if (VAR_9) {
  if (VAR_7->recovery_state == VAR_0) {
   VAR_5->features = VAR_6;
   VAR_10 = FUNC_0(VAR_5);
   return VAR_10 ? VAR_10 : 1;
  }

 }

 return 0;
}
