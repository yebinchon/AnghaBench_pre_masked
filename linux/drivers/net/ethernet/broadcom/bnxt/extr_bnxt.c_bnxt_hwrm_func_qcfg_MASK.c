
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hwrm_func_qcfg_output {int port_partition_type; scalar_t__ evb_mode; int max_mtu_configured; int flags; int registered_vfs; int vlan; } ;
struct hwrm_func_qcfg_input {int fid; int member_0; } ;
struct bnxt_vf_info {int vlan; } ;
struct TYPE_2__ {int registered_vfs; } ;
struct bnxt {int port_partition_type; int hwrm_spec_code; int max_mtu; int hwrm_cmd_lock; int br_mode; int flags; int fw_cap; TYPE_1__ pf; struct bnxt_vf_info vf; struct hwrm_func_qcfg_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct bnxt*,struct hwrm_func_qcfg_input*,int,int ) ;
 int FUNC_3 (struct bnxt*,struct hwrm_func_qcfg_input*,int ,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct bnxt *VAR_15)
{
 struct hwrm_func_qcfg_input VAR_16 = {0};
 struct hwrm_func_qcfg_output *VAR_17 = VAR_15->hwrm_cmd_resp_addr;
 u16 VAR_18;
 int VAR_19;

 FUNC_3(VAR_15, &VAR_16, VAR_13, -1, -1);
 VAR_16.fid = FUNC_4(0xffff);
 FUNC_6(&VAR_15->hwrm_cmd_lock);
 VAR_19 = FUNC_2(VAR_15, &VAR_16, sizeof(VAR_16), VAR_12);
 if (VAR_19)
  goto func_qcfg_exit;
 VAR_18 = FUNC_5(VAR_17->flags);
 if (VAR_18 & (VAR_9 |
       VAR_10)) {
  VAR_15->fw_cap |= VAR_2;
  if (VAR_18 & VAR_9)
   VAR_15->fw_cap |= VAR_1;
 }
 if (FUNC_0(VAR_15) && (VAR_18 & VAR_11))
  VAR_15->flags |= VAR_0;

 switch (VAR_17->port_partition_type) {
 case 130:
 case 129:
 case 128:
  VAR_15->port_partition_type = VAR_17->port_partition_type;
  break;
 }
 if (VAR_15->hwrm_spec_code < 0x10707 ||
     VAR_17->evb_mode == VAR_7)
  VAR_15->br_mode = VAR_5;
 else if (VAR_17->evb_mode == VAR_8)
  VAR_15->br_mode = VAR_6;
 else
  VAR_15->br_mode = VAR_4;

 VAR_15->max_mtu = FUNC_5(VAR_17->max_mtu_configured);
 if (!VAR_15->max_mtu)
  VAR_15->max_mtu = VAR_3;

func_qcfg_exit:
 FUNC_7(&VAR_15->hwrm_cmd_lock);
 return VAR_19;
}
