
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_lldp_org_tlv {int dummy; } ;
struct ice_dcbx_cfg {int dummy; } ;






 int FUNC_0 (struct ice_lldp_org_tlv*,struct ice_dcbx_cfg*) ;
 int FUNC_1 (struct ice_lldp_org_tlv*,struct ice_dcbx_cfg*) ;
 int FUNC_2 (struct ice_lldp_org_tlv*,struct ice_dcbx_cfg*) ;
 int FUNC_3 (struct ice_lldp_org_tlv*,struct ice_dcbx_cfg*) ;

__attribute__((used)) static void
FUNC_4(struct ice_lldp_org_tlv *VAR_0, struct ice_dcbx_cfg *VAR_1,
  u16 VAR_2)
{
 switch (VAR_2) {
 case 130:
  FUNC_1(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 128:
  FUNC_3(VAR_0, VAR_1);
  break;
 case 131:
  FUNC_0(VAR_0, VAR_1);
  break;
 default:
  break;
 }
}
