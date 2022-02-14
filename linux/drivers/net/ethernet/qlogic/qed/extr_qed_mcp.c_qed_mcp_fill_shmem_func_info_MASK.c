
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef void* u16 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_function_info {int pause_on_host; int wwn_port; int wwn_node; void* ovlan; void** mac; int bandwidth_max; int bandwidth_min; int protocol; void* mtu; } ;
struct TYPE_6__ {scalar_t__ b_wol_support; } ;
struct qed_hwfn {TYPE_3__ hw_info; TYPE_2__* cdev; TYPE_1__* mcp_info; } ;
struct public_func {int config; int mac_upper; int mac_lower; int ovlan_stag; scalar_t__ mtu_size; scalar_t__ fcoe_wwn_node_name_upper; scalar_t__ fcoe_wwn_node_name_lower; scalar_t__ fcoe_wwn_port_name_upper; scalar_t__ fcoe_wwn_port_name_lower; } ;
struct TYPE_5__ {void* wol_config; int wol_mac; } ;
struct TYPE_4__ {struct qed_mcp_function_info func_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int FUNC_2 (struct qed_hwfn*,int,char*,int,int ,int ,int ,void*,void*,void*,void*,void*,void*,int,int,void*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct qed_hwfn*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int *,void**,int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,struct public_func*,int ) ;
 scalar_t__ FUNC_7 (struct qed_hwfn*,struct public_func*,struct qed_ptt*,int *) ;
 scalar_t__ FUNC_8 (struct qed_hwfn*) ;
 int FUNC_9 (struct qed_hwfn*,struct public_func*) ;

int FUNC_10(struct qed_hwfn *VAR_12,
     struct qed_ptt *VAR_13)
{
 struct qed_mcp_function_info *VAR_14;
 struct public_func VAR_15;

 FUNC_6(VAR_12, VAR_13, &VAR_15, FUNC_3(VAR_12));
 VAR_14 = &VAR_12->mcp_info->func_info;

 VAR_14->pause_on_host = (VAR_15.config &
          VAR_4) ? 1 : 0;

 if (FUNC_7(VAR_12, &VAR_15, VAR_13,
        &VAR_14->protocol)) {
  FUNC_0(VAR_12, "Unknown personality %08x\n",
         (u32)(VAR_15.config & VAR_5));
  return -VAR_1;
 }

 FUNC_9(VAR_12, &VAR_15);

 if (VAR_15.mac_upper || VAR_15.mac_lower) {
  VAR_14->mac[0] = (u8)(VAR_15.mac_upper >> 8);
  VAR_14->mac[1] = (u8)(VAR_15.mac_upper);
  VAR_14->mac[2] = (u8)(VAR_15.mac_lower >> 24);
  VAR_14->mac[3] = (u8)(VAR_15.mac_lower >> 16);
  VAR_14->mac[4] = (u8)(VAR_15.mac_lower >> 8);
  VAR_14->mac[5] = (u8)(VAR_15.mac_lower);


  FUNC_4(&VAR_12->cdev->wol_mac, VAR_14->mac, VAR_2);
 } else {
  FUNC_1(VAR_12, "MAC is 0 in shmem\n");
 }

 VAR_14->wwn_port = (u64)VAR_15.fcoe_wwn_port_name_lower |
    (((u64)VAR_15.fcoe_wwn_port_name_upper) << 32);
 VAR_14->wwn_node = (u64)VAR_15.fcoe_wwn_node_name_lower |
    (((u64)VAR_15.fcoe_wwn_node_name_upper) << 32);

 VAR_14->ovlan = (u16)(VAR_15.ovlan_stag & VAR_3);

 VAR_14->mtu = (u16)VAR_15.mtu_size;

 VAR_12->hw_info.b_wol_support = VAR_10;
 VAR_12->cdev->wol_config = (u8)VAR_9;
 if (FUNC_8(VAR_12)) {
  u32 VAR_16 = 0, VAR_17 = 0;
  int VAR_18;

  VAR_18 = FUNC_5(VAR_12, VAR_13,
     VAR_0, 0, &VAR_16, &VAR_17);
  if (VAR_18)
   return VAR_18;
  if (VAR_16 == VAR_6)
   VAR_12->hw_info.b_wol_support = VAR_11;
 }

 FUNC_2(VAR_12, (VAR_8 | VAR_7),
     "Read configuration from shmem: pause_on_host %02x protocol %02x BW [%02x - %02x] MAC %02x:%02x:%02x:%02x:%02x:%02x wwn port %llx node %llx ovlan %04x wol %02x\n",
  VAR_14->pause_on_host, VAR_14->protocol,
  VAR_14->bandwidth_min, VAR_14->bandwidth_max,
  VAR_14->mac[0], VAR_14->mac[1], VAR_14->mac[2],
  VAR_14->mac[3], VAR_14->mac[4], VAR_14->mac[5],
  VAR_14->wwn_port, VAR_14->wwn_node,
  VAR_14->ovlan, (u8)VAR_12->hw_info.b_wol_support);

 return 0;
}
