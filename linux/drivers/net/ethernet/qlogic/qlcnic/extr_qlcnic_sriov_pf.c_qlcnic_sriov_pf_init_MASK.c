
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qlcnic_info {int capabilities; int max_mtu; int switch_mode; scalar_t__ phys_port; } ;
struct qlcnic_hardware_context {int nic_mode; int capabilities; int max_mtu; int switch_mode; scalar_t__ physical_port; scalar_t__ pci_func; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*,struct qlcnic_info*,scalar_t__) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_info*) ;
 int FUNC_5 (struct qlcnic_adapter*,struct qlcnic_info*,scalar_t__) ;
 int FUNC_6 (struct qlcnic_adapter*,scalar_t__,int) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*,int) ;
 int FUNC_9 (struct qlcnic_adapter*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct qlcnic_adapter *VAR_1)
{
 struct qlcnic_hardware_context *VAR_2 = VAR_1->ahw;
 struct qlcnic_info VAR_3, VAR_4, VAR_5;
 int VAR_6;
 u8 VAR_7 = VAR_2->pci_func;

 if (!FUNC_3(VAR_1))
  return 0;

 VAR_6 = FUNC_8(VAR_1, 1);
 if (VAR_6)
  return VAR_6;

 if (FUNC_0(VAR_1)) {
  VAR_6 = FUNC_7(VAR_1);
  if (VAR_6)
   goto disable_vlan_filtering;
 }

 VAR_6 = FUNC_6(VAR_1, VAR_7, 1);
 if (VAR_6)
  goto disable_vlan_filtering;

 VAR_6 = FUNC_9(VAR_1, 1, VAR_7);
 if (VAR_6)
  goto disable_eswitch;

 VAR_6 = FUNC_4(VAR_1, &VAR_4);
 if (VAR_6)
  goto delete_vport;

 VAR_6 = FUNC_1(VAR_1, &VAR_3, VAR_7);
 if (VAR_6)
  goto delete_vport;

 VAR_6 = FUNC_5(VAR_1, &VAR_5, VAR_7);
 if (VAR_6)
  goto delete_vport;

 VAR_6 = FUNC_2(VAR_1, 1);
 if (VAR_6)
  goto delete_vport;

 VAR_2->physical_port = (u8) VAR_3.phys_port;
 VAR_2->switch_mode = VAR_3.switch_mode;
 VAR_2->max_mtu = VAR_3.max_mtu;
 VAR_2->capabilities = VAR_3.capabilities;
 VAR_2->nic_mode = VAR_0;
 return VAR_6;

delete_vport:
 FUNC_9(VAR_1, 0, VAR_7);

disable_eswitch:
 FUNC_6(VAR_1, VAR_7, 0);

disable_vlan_filtering:
 FUNC_8(VAR_1, 0);

 return VAR_6;
}
