
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int mtu; int min_mtu; int max_mtu; } ;
struct ice_vsi {int state; struct ice_pf* back; } ;
struct ice_pf {int state; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ice_vsi*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ice_vsi*) ;
 int FUNC_3 (struct net_device*,char*,...) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 struct ice_netdev_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,char*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3, int VAR_4)
{
 struct ice_netdev_priv *VAR_5 = FUNC_5(VAR_3);
 struct ice_vsi *VAR_6 = VAR_5->vsi;
 struct ice_pf *VAR_7 = VAR_6->back;
 u8 VAR_8 = 0;

 if (VAR_4 == VAR_3->mtu) {
  FUNC_6(VAR_3, "MTU is already %u\n", VAR_3->mtu);
  return 0;
 }

 if (VAR_4 < VAR_3->min_mtu) {
  FUNC_3(VAR_3, "new MTU invalid. min_mtu is %d\n",
      VAR_3->min_mtu);
  return -VAR_1;
 } else if (VAR_4 > VAR_3->max_mtu) {
  FUNC_3(VAR_3, "new MTU invalid. max_mtu is %d\n",
      VAR_3->min_mtu);
  return -VAR_1;
 }

 do {
  if (FUNC_1(VAR_7->state)) {
   VAR_8++;
   FUNC_8(1000, 2000);
  } else {
   break;
  }

 } while (VAR_8 < 100);

 if (VAR_8 == 100) {
  FUNC_3(VAR_3, "can't change MTU. Device is busy\n");
  return -VAR_0;
 }

 VAR_3->mtu = VAR_4;


 if (!FUNC_7(VAR_2, VAR_6->state)) {
  int VAR_9;

  VAR_9 = FUNC_0(VAR_6);
  if (VAR_9) {
   FUNC_3(VAR_3, "change MTU if_up err %d\n", VAR_9);
   return VAR_9;
  }

  VAR_9 = FUNC_2(VAR_6);
  if (VAR_9) {
   FUNC_3(VAR_3, "change MTU if_up err %d\n", VAR_9);
   return VAR_9;
  }
 }

 FUNC_4(VAR_3, "changed MTU to %d\n", VAR_4);
 return 0;
}
