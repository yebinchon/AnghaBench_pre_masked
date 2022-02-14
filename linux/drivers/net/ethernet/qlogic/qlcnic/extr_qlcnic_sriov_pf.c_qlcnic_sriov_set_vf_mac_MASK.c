
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_vf_info {int state; TYPE_2__* vp; } ;
struct qlcnic_sriov {int num_vfs; struct qlcnic_vf_info* vf_info; } ;
struct qlcnic_adapter {int * mac_addr; TYPE_1__* ahw; } ;
struct net_device {int addr_len; } ;
struct TYPE_4__ {int * mac; } ;
struct TYPE_3__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct net_device*,char*,...) ;
 int FUNC_4 (struct net_device*,char*,int *,int) ;
 struct qlcnic_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

int FUNC_8(struct net_device *VAR_3, int VAR_4, u8 *VAR_5)
{
 struct qlcnic_adapter *VAR_6 = FUNC_5(VAR_3);
 struct qlcnic_sriov *VAR_7 = VAR_6->ahw->sriov;
 int VAR_8, VAR_9;
 struct qlcnic_vf_info *VAR_10;
 u8 *VAR_11;

 if (!FUNC_6(VAR_6))
  return -VAR_1;

 VAR_9 = VAR_7->num_vfs;

 if (!FUNC_1(VAR_5) || VAR_4 >= VAR_9)
  return -VAR_0;

 if (FUNC_0(VAR_6->mac_addr, VAR_5)) {
  FUNC_3(VAR_3, "MAC address is already in use by the PF\n");
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_10 = &VAR_7->vf_info[VAR_8];
  if (FUNC_0(VAR_10->vp->mac, VAR_5)) {
   FUNC_3(VAR_3,
       "MAC address is already in use by VF %d\n",
       VAR_8);
   return -VAR_0;
  }
 }

 VAR_10 = &VAR_7->vf_info[VAR_4];
 VAR_11 = VAR_10->vp->mac;

 if (FUNC_7(VAR_2, &VAR_10->state)) {
  FUNC_3(VAR_3,
      "MAC address change failed for VF %d, as VF driver is loaded. Please unload VF driver and retry the operation\n",
      VAR_4);
  return -VAR_1;
 }

 FUNC_2(VAR_11, VAR_5, VAR_3->addr_len);
 FUNC_4(VAR_3, "MAC Address %pM  is configured for VF %d\n",
      VAR_5, VAR_4);
 return 0;
}
