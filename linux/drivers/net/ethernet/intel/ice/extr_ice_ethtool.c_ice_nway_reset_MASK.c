
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ice_vsi {TYPE_3__* back; struct ice_port_info* port_info; } ;
struct ice_port_info {TYPE_2__* hw; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_6__ {int state; } ;
struct TYPE_4__ {int sq_last_status; } ;
struct TYPE_5__ {TYPE_1__ adminq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_port_info*,int,int *) ;
 int FUNC_1 (struct net_device*,char*,int,int ) ;
 struct ice_netdev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{

 struct ice_netdev_priv *VAR_3 = FUNC_2(VAR_2);
 struct ice_vsi *VAR_4 = VAR_3->vsi;
 struct ice_port_info *VAR_5;
 enum ice_status VAR_6;

 VAR_5 = VAR_4->port_info;

 if (!FUNC_3(VAR_1, VAR_4->back->state))
  VAR_6 = FUNC_0(VAR_5, 1, ((void*)0));
 else
  VAR_6 = FUNC_0(VAR_5, 0, ((void*)0));

 if (VAR_6) {
  FUNC_1(VAR_2, "link restart failed, err %d aq_err %d\n",
       VAR_6, VAR_5->hw->adminq.sq_last_status);
  return -VAR_0;
 }

 return 0;
}
