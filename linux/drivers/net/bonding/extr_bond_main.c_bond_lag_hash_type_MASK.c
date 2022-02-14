
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xmit_policy; } ;
struct bonding {TYPE_1__ params; } ;
typedef enum netdev_lag_tx_type { ____Placeholder_netdev_lag_tx_type } netdev_lag_tx_type ;
typedef enum netdev_lag_hash { ____Placeholder_netdev_lag_hash } netdev_lag_hash ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static enum netdev_lag_hash FUNC_0(struct bonding *VAR_8,
            enum netdev_lag_tx_type VAR_9)
{
 if (VAR_9 != VAR_7)
  return VAR_5;

 switch (VAR_8->params.xmit_policy) {
 case 130:
  return VAR_2;
 case 128:
  return VAR_4;
 case 129:
  return VAR_3;
 case 132:
  return VAR_0;
 case 131:
  return VAR_1;
 default:
  return VAR_6;
 }
}
