
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iwl_ucode_tlv {int type; int * data; } ;
struct TYPE_2__ {int external_ini_cfg; int internal_ini_cfg; } ;
struct iwl_trans {TYPE_1__ dbg; } ;
struct iwl_fw_ini_header {int tlv_version; int apply_point; } ;
typedef enum iwl_ini_cfg_state { ____Placeholder_iwl_ini_cfg_state } iwl_ini_cfg_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct iwl_trans*,char*,scalar_t__,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct iwl_ucode_tlv*) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct iwl_trans *VAR_5, struct iwl_ucode_tlv *VAR_6,
         bool VAR_7)
{
 struct iwl_fw_ini_header *VAR_8 = (void *)&VAR_6->data[0];
 u32 VAR_9 = FUNC_3(VAR_6->type);
 u32 VAR_10 = FUNC_3(VAR_8->apply_point);
 u32 VAR_11 = VAR_9 - VAR_4;
 enum iwl_ini_cfg_state *VAR_12 = VAR_7 ?
  &VAR_5->dbg.external_ini_cfg : &VAR_5->dbg.internal_ini_cfg;

 FUNC_0(VAR_5, "WRT: read TLV 0x%x, apply point %d\n",
       VAR_9, VAR_10);

 if (VAR_11 >= VAR_0) {
  FUNC_1(VAR_5, "WRT: Unsupported TLV 0x%x\n", VAR_9);
  goto out_err;
 }

 if (!FUNC_2(VAR_6)) {
  FUNC_1(VAR_5, "WRT: Unsupported TLV 0x%x version %u\n", VAR_9,
   FUNC_3(VAR_8->tlv_version));
  goto out_err;
 }

 if (*VAR_12 == VAR_3)
  *VAR_12 = VAR_2;

 return;

out_err:
 *VAR_12 = VAR_1;
}
