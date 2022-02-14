
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_sriov {int num_vfs; int num_allowed_vlans; } ;
struct qlcnic_info {int max_rx_mcast_mac_filters; } ;
struct qlcnic_adapter {int netdev; TYPE_1__* ahw; } ;
struct TYPE_2__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_1,
      struct qlcnic_info *VAR_2)
{
 struct qlcnic_sriov *VAR_3 = VAR_1->ahw->sriov;
 int VAR_4, VAR_5;

 VAR_4 = VAR_2->max_rx_mcast_mac_filters;
 VAR_5 = VAR_3->num_vfs + 1;

 VAR_4 = VAR_4 / (VAR_0 * VAR_5);
 VAR_3->num_allowed_vlans = VAR_4 - 1;

 if (FUNC_1(VAR_1))
  VAR_3->num_allowed_vlans = 1;

 FUNC_0(VAR_1->netdev, "Max Guest VLANs supported per VF = %d\n",
      VAR_3->num_allowed_vlans);
}
