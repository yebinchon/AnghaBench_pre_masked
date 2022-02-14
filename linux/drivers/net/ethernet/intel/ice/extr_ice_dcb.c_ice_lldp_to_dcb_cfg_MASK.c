
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int typelen ;
struct ice_lldp_org_tlv {int typelen; } ;
struct ice_dcbx_cfg {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_0 (struct ice_lldp_org_tlv*,struct ice_dcbx_cfg*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static enum ice_status
FUNC_2(u8 *VAR_8, struct ice_dcbx_cfg *VAR_9)
{
 struct ice_lldp_org_tlv *VAR_10;
 enum ice_status VAR_11 = 0;
 u16 VAR_12 = 0;
 u16 VAR_13;
 u16 VAR_14;
 u16 VAR_15;

 if (!VAR_8 || !VAR_9)
  return VAR_1;


 VAR_8 += VAR_0;
 VAR_10 = (struct ice_lldp_org_tlv *)VAR_8;
 while (1) {
  VAR_13 = FUNC_1(VAR_10->typelen);
  VAR_14 = ((VAR_13 & VAR_5) >> VAR_6);
  VAR_15 = ((VAR_13 & VAR_3) >> VAR_4);
  VAR_12 += sizeof(VAR_13) + VAR_15;


  if (VAR_14 == VAR_7 || VAR_12 > VAR_2)
   break;

  switch (VAR_14) {
  case 128:
   FUNC_0(VAR_10, VAR_9);
   break;
  default:
   break;
  }


  VAR_10 = (struct ice_lldp_org_tlv *)
        ((char *)VAR_10 + sizeof(VAR_10->typelen) + VAR_15);
 }

 return VAR_11;
}
