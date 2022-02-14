
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_umac_alive {int umac_minor; int umac_major; } ;
struct iwl_lmac_alive {int ucode_minor; int ucode_major; int ver_subtype; int ver_type; } ;
struct TYPE_3__ {void* umac_minor; void* umac_major; void* lmac_minor; void* lmac_major; int subtype; int type; } ;
struct TYPE_4__ {TYPE_1__ fw_ver; } ;
struct iwl_fw_runtime {TYPE_2__ dump; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_fw_runtime *VAR_0,
            struct iwl_lmac_alive *VAR_1,
            struct iwl_umac_alive *VAR_2)
{
 if (VAR_1) {
  VAR_0->dump.fw_ver.type = VAR_1->ver_type;
  VAR_0->dump.fw_ver.subtype = VAR_1->ver_subtype;
  VAR_0->dump.fw_ver.lmac_major = FUNC_0(VAR_1->ucode_major);
  VAR_0->dump.fw_ver.lmac_minor = FUNC_0(VAR_1->ucode_minor);
 }

 if (VAR_2) {
  VAR_0->dump.fw_ver.umac_major = FUNC_0(VAR_2->umac_major);
  VAR_0->dump.fw_ver.umac_minor = FUNC_0(VAR_2->umac_minor);
 }
}
