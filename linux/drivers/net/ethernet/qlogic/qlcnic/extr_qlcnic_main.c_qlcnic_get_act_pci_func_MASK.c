
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_pci_info {int dummy; } ;
struct qlcnic_hardware_context {int port_type; scalar_t__ op_mode; int max_vnic_func; int total_nic_func; } ;
struct qlcnic_adapter {int flags; struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 struct qlcnic_pci_info* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct qlcnic_pci_info*) ;
 int FUNC_2 (struct qlcnic_adapter*,struct qlcnic_pci_info*) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_6)
{
 struct qlcnic_hardware_context *VAR_7 = VAR_6->ahw;
 struct qlcnic_pci_info *VAR_8;
 int VAR_9;

 if (!(VAR_6->flags & VAR_2)) {
  switch (VAR_7->port_type) {
  case 129:
   VAR_7->total_nic_func = VAR_4;
   break;
  case 128:
   VAR_7->total_nic_func = VAR_5;
   break;
  }
  return 0;
 }

 if (VAR_7->op_mode == VAR_3)
  return 0;

 VAR_8 = FUNC_0(VAR_7->max_vnic_func, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_6, VAR_8);
 FUNC_1(VAR_8);
 return VAR_9;
}
