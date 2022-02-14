
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ice_vsi {TYPE_2__* back; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct ethtool_fecparam {int fec; } ;
typedef enum ice_fec_mode { ____Placeholder_ice_fec_mode } ice_fec_mode ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 struct ice_netdev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_5, struct ethtool_fecparam *VAR_6)
{
 struct ice_netdev_priv *VAR_7 = FUNC_2(VAR_5);
 struct ice_vsi *VAR_8 = VAR_7->vsi;
 enum ice_fec_mode VAR_9;

 switch (VAR_6->fec) {
 case 132:
  VAR_9 = VAR_1;
  break;
 case 128:
  VAR_9 = VAR_4;
  break;
 case 131:
  VAR_9 = VAR_2;
  break;
 case 129:
 case 130:
  VAR_9 = VAR_3;
  break;
 default:
  FUNC_0(&VAR_8->back->pdev->dev, "Unsupported FEC mode: %d\n",
    VAR_6->fec);
  return -VAR_0;
 }

 return FUNC_1(VAR_5, VAR_9);
}
