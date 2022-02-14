
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ice_vsi {struct ice_pf* back; } ;
struct TYPE_2__ {int addr; } ;
struct ice_vf {int pf_set_mac; TYPE_1__ dflt_lan_addr; int vf_states; } ;
struct ice_pf {int num_alloc_vfs; struct ice_vf* vf; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ice_vf*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 int FUNC_5 (struct net_device*,char*,int,int *) ;
 struct ice_netdev_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct net_device *VAR_3, int VAR_4, u8 *VAR_5)
{
 struct ice_netdev_priv *VAR_6 = FUNC_6(VAR_3);
 struct ice_vsi *VAR_7 = VAR_6->vsi;
 struct ice_pf *VAR_8 = VAR_7->back;
 struct ice_vf *VAR_9;
 int VAR_10 = 0;


 if (VAR_4 >= VAR_8->num_alloc_vfs) {
  FUNC_4(VAR_3, "invalid VF id: %d\n", VAR_4);
  return -VAR_1;
 }

 VAR_9 = &VAR_8->vf[VAR_4];
 if (!FUNC_7(VAR_2, VAR_9->vf_states)) {
  FUNC_4(VAR_3, "VF %d in reset. Try again.\n", VAR_4);
  return -VAR_0;
 }

 if (FUNC_3(VAR_5) || FUNC_2(VAR_5)) {
  FUNC_4(VAR_3, "%pM not a valid unicast address\n", *VAR_5);
  return -VAR_1;
 }






 FUNC_0(VAR_9->dflt_lan_addr.addr, VAR_5);
 VAR_9->pf_set_mac = 1;
 FUNC_5(VAR_3,
      "MAC on VF %d set to %pM. VF driver will be reinitialized\n",
      VAR_4, VAR_5);

 FUNC_1(VAR_9);
 return VAR_10;
}
