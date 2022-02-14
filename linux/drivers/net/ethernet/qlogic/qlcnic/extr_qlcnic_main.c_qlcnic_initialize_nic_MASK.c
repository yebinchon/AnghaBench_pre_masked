
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct qlcnic_info {int capabilities; int max_mtu; int max_mac_filters; int max_rx_ques; int max_tx_ques; int switch_mode; scalar_t__ phys_port; } ;
struct qlcnic_adapter {int flags; int max_sds_rings; int max_tx_rings; TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct TYPE_4__ {int capabilities; int nic_mode; int max_mtu; int max_mac_filters; scalar_t__* extra_capability; int max_rx_ques; int max_tx_ques; int switch_mode; scalar_t__ physical_port; int pci_func; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*,int ,int*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_info*,int ,int) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_info*,int ) ;

__attribute__((used)) static int
FUNC_4(struct qlcnic_adapter *VAR_11)
{
 struct qlcnic_info VAR_12;
 int VAR_13 = 0;

 FUNC_2(&VAR_12, 0, sizeof(struct qlcnic_info));
 VAR_13 = FUNC_3(VAR_11, &VAR_12, VAR_11->ahw->pci_func);
 if (VAR_13)
  return VAR_13;

 VAR_11->ahw->physical_port = (u8)VAR_12.phys_port;
 VAR_11->ahw->switch_mode = VAR_12.switch_mode;
 VAR_11->ahw->max_tx_ques = VAR_12.max_tx_ques;
 VAR_11->ahw->max_rx_ques = VAR_12.max_rx_ques;
 VAR_11->ahw->capabilities = VAR_12.capabilities;

 if (VAR_11->ahw->capabilities & VAR_5) {
  u32 VAR_14;
  VAR_14 = FUNC_0(VAR_11, VAR_1, &VAR_13);
  if (VAR_13 == -VAR_2)
   return VAR_13;
  VAR_11->ahw->extra_capability[0] = VAR_14;
 } else {
  VAR_11->ahw->extra_capability[0] = 0;
 }

 VAR_11->ahw->max_mac_filters = VAR_12.max_mac_filters;
 VAR_11->ahw->max_mtu = VAR_12.max_mtu;

 if (VAR_11->ahw->capabilities & VAR_0) {
  VAR_11->flags |= VAR_4;
  VAR_11->ahw->nic_mode = VAR_10;
  VAR_11->max_tx_rings = VAR_7;
  VAR_11->max_sds_rings = VAR_9;

  FUNC_1(&VAR_11->pdev->dev, "vNIC mode enabled.\n");
 } else {
  VAR_11->ahw->nic_mode = VAR_3;
  VAR_11->max_tx_rings = VAR_6;
  VAR_11->max_sds_rings = VAR_8;
  VAR_11->flags &= ~VAR_4;
 }

 return VAR_13;
}
