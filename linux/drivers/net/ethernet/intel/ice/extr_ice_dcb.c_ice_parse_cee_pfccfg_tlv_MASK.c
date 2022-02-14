
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int willing; void* pfccap; void* pfcena; } ;
struct ice_dcbx_cfg {TYPE_1__ pfc; } ;
struct ice_cee_feat_tlv {void** tlvinfo; int en_will_err; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct ice_cee_feat_tlv *VAR_1,
    struct ice_dcbx_cfg *VAR_2)
{
 u8 *VAR_3 = VAR_1->tlvinfo;

 if (VAR_1->en_will_err & VAR_0)
  VAR_2->pfc.willing = 1;






 VAR_2->pfc.pfcena = VAR_3[0];
 VAR_2->pfc.pfccap = VAR_3[1];
}
