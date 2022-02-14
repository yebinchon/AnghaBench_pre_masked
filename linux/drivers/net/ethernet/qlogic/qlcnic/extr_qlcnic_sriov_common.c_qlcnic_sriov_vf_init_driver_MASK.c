
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qlcnic_info {int capabilities; int op_mode; int max_mtu; int switch_mode; scalar_t__ phys_port; int max_rx_mcast_mac_filters; } ;
struct qlcnic_hardware_context {int capabilities; int op_mode; int max_mtu; int switch_mode; scalar_t__ physical_port; int fw_hal_version; int pci_func; int max_mc_count; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; TYPE_1__* pdev; int flags; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,struct qlcnic_info*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_info*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_5(struct qlcnic_adapter *VAR_2)
{
 struct qlcnic_hardware_context *VAR_3 = VAR_2->ahw;
 struct qlcnic_info VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_2, &VAR_4, 0);
 if (VAR_5)
  return VAR_5;

 VAR_3->max_mc_count = VAR_4.max_rx_mcast_mac_filters;

 VAR_5 = FUNC_2(VAR_2, &VAR_4, VAR_3->pci_func);
 if (VAR_5)
  return -VAR_0;

 if (FUNC_1(VAR_2))
  return -VAR_0;

 FUNC_4(VAR_2);
 VAR_2->flags |= VAR_1;
 FUNC_0(&VAR_2->pdev->dev, "HAL Version: %d\n",
   VAR_2->ahw->fw_hal_version);

 VAR_3->physical_port = (u8) VAR_4.phys_port;
 VAR_3->switch_mode = VAR_4.switch_mode;
 VAR_3->max_mtu = VAR_4.max_mtu;
 VAR_3->op_mode = VAR_4.op_mode;
 VAR_3->capabilities = VAR_4.capabilities;
 return 0;
}
