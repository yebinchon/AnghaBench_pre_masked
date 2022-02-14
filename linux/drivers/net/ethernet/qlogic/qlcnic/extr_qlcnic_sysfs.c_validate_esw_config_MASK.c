
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct qlcnic_hardware_context {scalar_t__ max_vnic_func; scalar_t__ op_mode; scalar_t__ pci_base0; } ;
struct qlcnic_esw_func_cfg {scalar_t__ pci_func; int op_mode; int mac_override; int promisc_mode; int op_type; int vlan_id; int mac_anti_spoof; int offload_flags; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (struct qlcnic_hardware_context*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct qlcnic_adapter *VAR_5,
          struct qlcnic_esw_func_cfg *VAR_6, int VAR_7)
{
 struct qlcnic_hardware_context *VAR_8 = VAR_5->ahw;
 int VAR_9, VAR_10;
 u32 VAR_11;
 u8 VAR_12;

 if (FUNC_4(VAR_5))
  VAR_11 = FUNC_6(VAR_8->pci_base0 + VAR_1);
 else
  VAR_11 = FUNC_1(VAR_8, VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_12 = VAR_6[VAR_9].pci_func;
  if (VAR_12 >= VAR_8->max_vnic_func)
   return -VAR_0;

  if (VAR_5->ahw->op_mode == VAR_2)
   if (FUNC_5(VAR_5, VAR_12) < 0)
    return -VAR_0;

  switch (VAR_6[VAR_9].op_mode) {
  case 128:
   if (FUNC_4(VAR_5)) {
    VAR_10 = FUNC_3(VAR_11, VAR_12);
   } else {
    VAR_10 = FUNC_2(VAR_11,
          VAR_12);
    VAR_6[VAR_9].offload_flags = 0;
   }

   if (VAR_10 != VAR_3) {
    if (VAR_6[VAR_9].mac_anti_spoof != 0)
     return -VAR_0;
    if (VAR_6[VAR_9].mac_override != 1)
     return -VAR_0;
    if (VAR_6[VAR_9].promisc_mode != 1)
     return -VAR_0;
   }
   break;
  case 130:
   if (!FUNC_0(VAR_6[VAR_9].vlan_id))
    return -VAR_0;
   if (!VAR_6[VAR_9].op_type)
    return -VAR_0;
   break;
  case 129:
   if (!VAR_6[VAR_9].op_type)
    return -VAR_0;
   break;
  default:
   return -VAR_0;
  }
 }

 return 0;
}
