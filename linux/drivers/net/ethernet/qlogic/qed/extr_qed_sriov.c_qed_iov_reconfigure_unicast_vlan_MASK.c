
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* vlans; } ;
struct qed_vf_info {int relative_vf_id; int opaque_fid; TYPE_2__ shadow_config; int vport_id; } ;
struct qed_hwfn {int dummy; } ;
struct qed_filter_ucast {int is_rx_filter; int is_tx_filter; int vlan; int type; int opcode; int vport_to_add_to; } ;
typedef int filter ;
struct TYPE_3__ {int vid; int used; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct qed_filter_ucast*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,int ,struct qed_filter_ucast*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_5,
         struct qed_vf_info *VAR_6)
{
 struct qed_filter_ucast VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.is_rx_filter = 1;
 VAR_7.is_tx_filter = 1;
 VAR_7.vport_to_add_to = VAR_6->vport_id;
 VAR_7.opcode = VAR_1;


 for (VAR_9 = 0; VAR_9 < VAR_0 + 1; VAR_9++) {
  if (!VAR_6->shadow_config.vlans[VAR_9].used)
   continue;

  VAR_7.type = VAR_2;
  VAR_7.vlan = VAR_6->shadow_config.vlans[VAR_9].vid;
  FUNC_1(VAR_5, VAR_3,
      "Reconfiguring VLAN [0x%04x] for VF [%04x]\n",
      VAR_7.vlan, VAR_6->relative_vf_id);
  VAR_8 = FUNC_3(VAR_5, VAR_6->opaque_fid,
          &VAR_7, VAR_4, ((void*)0));
  if (VAR_8) {
   FUNC_0(VAR_5,
      "Failed to configure VLAN [%04x] to VF [%04x]\n",
      VAR_7.vlan, VAR_6->relative_vf_id);
   break;
  }
 }

 return VAR_8;
}
