
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_vport {int spoofchk; } ;
struct qlcnic_vf_info {int state; struct qlcnic_vport* vp; } ;
struct qlcnic_sriov {int num_vfs; struct qlcnic_vf_info* vf_info; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct net_device *VAR_3, int VAR_4, bool VAR_5)
{
 struct qlcnic_adapter *VAR_6 = FUNC_1(VAR_3);
 struct qlcnic_sriov *VAR_7 = VAR_6->ahw->sriov;
 struct qlcnic_vf_info *VAR_8;
 struct qlcnic_vport *VAR_9;

 if (!FUNC_2(VAR_6))
  return -VAR_1;

 if (VAR_4 >= VAR_7->num_vfs)
  return -VAR_0;

 VAR_8 = &VAR_7->vf_info[VAR_4];
 VAR_9 = VAR_8->vp;
 if (FUNC_3(VAR_2, &VAR_8->state)) {
  FUNC_0(VAR_3,
      "Spoof check change failed for VF %d, as VF driver is loaded. Please unload VF driver and retry the operation\n",
      VAR_4);
  return -VAR_1;
 }

 VAR_9->spoofchk = VAR_5;
 return 0;
}
