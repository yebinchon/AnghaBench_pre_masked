
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ice_lldp_org_tlv {int typelen; } ;
struct ice_dcbx_cfg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ice_lldp_org_tlv*,struct ice_dcbx_cfg*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(u8 *VAR_5, u16 *VAR_6, struct ice_dcbx_cfg *VAR_7)
{
 u16 VAR_8, VAR_9 = 0, VAR_10 = VAR_4;
 struct ice_lldp_org_tlv *VAR_11;
 u16 VAR_12;

 VAR_11 = (struct ice_lldp_org_tlv *)VAR_5;
 while (1) {
  FUNC_0(VAR_11, VAR_7, VAR_10++);
  VAR_12 = FUNC_1(VAR_11->typelen);
  VAR_8 = (VAR_12 & VAR_1) >> VAR_2;
  if (VAR_8)
   VAR_9 += VAR_8 + 2;

  if (VAR_10 >= VAR_3 ||
      VAR_9 > VAR_0)
   break;

  if (VAR_8)
   VAR_11 = (struct ice_lldp_org_tlv *)
    ((char *)VAR_11 + sizeof(VAR_11->typelen) + VAR_8);
 }
 *VAR_6 = VAR_9;
}
