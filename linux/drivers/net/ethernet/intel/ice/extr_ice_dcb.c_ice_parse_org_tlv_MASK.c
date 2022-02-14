
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ice_lldp_org_tlv {int ouisubtype; } ;
struct ice_dcbx_cfg {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_lldp_org_tlv*,struct ice_dcbx_cfg*) ;
 int FUNC_1 (struct ice_lldp_org_tlv*,struct ice_dcbx_cfg*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ice_lldp_org_tlv *VAR_2, struct ice_dcbx_cfg *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_2(VAR_2->ouisubtype);
 VAR_5 = ((VAR_4 & VAR_0) >> VAR_1);
 switch (VAR_5) {
 case 128:
  FUNC_1(VAR_2, VAR_3);
  break;
 case 129:
  FUNC_0(VAR_2, VAR_3);
  break;
 default:
  break;
 }
}
