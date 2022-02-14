
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct qlcnic_vport {int* mac; } ;
struct qlcnic_vf_info {int pci_func; struct qlcnic_vport* vp; } ;
struct qlcnic_macvlan_mbx {int mac_addr0; int mac_addr1; int mac_addr2; int mac_addr3; int mac_addr4; int mac_addr5; scalar_t__ vlan; } ;
struct TYPE_2__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; int type; } ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct qlcnic_cmd_args*) ;
 struct qlcnic_cmd_args* FUNC_1 (int,int ) ;
 int FUNC_2 (int*,struct qlcnic_macvlan_mbx*,int) ;
 int FUNC_3 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_4 (struct qlcnic_cmd_args*) ;
 int FUNC_5 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_6 (struct qlcnic_adapter*,int ) ;

__attribute__((used)) static int FUNC_7(struct qlcnic_adapter *VAR_9,
           struct qlcnic_vf_info *VAR_10,
           u16 VAR_11, u8 VAR_12)
{
 struct qlcnic_cmd_args *VAR_13;
 struct qlcnic_macvlan_mbx VAR_14;
 struct qlcnic_vport *VAR_15;
 u8 *VAR_16;
 int VAR_17;
 u32 *VAR_18;
 int VAR_19;

 VAR_15 = VAR_10->vp;

 VAR_13 = FUNC_1(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_17 = FUNC_3(VAR_13, VAR_9, VAR_4);
 if (VAR_17)
  goto free_cmd;

 VAR_13->type = VAR_8;
 VAR_19 = FUNC_6(VAR_9, VAR_10->pci_func);
 if (VAR_19 < 0) {
  VAR_17 = -VAR_1;
  goto free_args;
 }

 if (VAR_11)
  VAR_12 = ((VAR_12 == VAR_5 || VAR_12 == VAR_6) ?
        VAR_6 : VAR_7);

 VAR_13->req.arg[1] = VAR_12 | (1 << 8) | (3 << 6);
 VAR_13->req.arg[1] |= ((VAR_19 & 0xffff) << 16) | VAR_0;

 VAR_16 = VAR_15->mac;
 VAR_14.vlan = VAR_11;
 VAR_14.mac_addr0 = VAR_16[0];
 VAR_14.mac_addr1 = VAR_16[1];
 VAR_14.mac_addr2 = VAR_16[2];
 VAR_14.mac_addr3 = VAR_16[3];
 VAR_14.mac_addr4 = VAR_16[4];
 VAR_14.mac_addr5 = VAR_16[5];
 VAR_18 = &VAR_13->req.arg[2];
 FUNC_2(VAR_18, &VAR_14, sizeof(struct qlcnic_macvlan_mbx));

 VAR_17 = FUNC_5(VAR_9, VAR_13);

 if (!VAR_17)
  return VAR_17;

free_args:
 FUNC_4(VAR_13);
free_cmd:
 FUNC_0(VAR_13);
 return VAR_17;
}
