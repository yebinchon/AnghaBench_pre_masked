
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ice_lldp_org_tlv {int ouisubtype; int typelen; int * tlvinfo; } ;
struct ice_dcb_ets_cfg {int dummy; } ;
struct ice_dcbx_cfg {struct ice_dcb_ets_cfg etsrec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct ice_dcb_ets_cfg*) ;

__attribute__((used)) static void
FUNC_3(struct ice_lldp_org_tlv *VAR_6,
   struct ice_dcbx_cfg *VAR_7)
{
 struct ice_dcb_ets_cfg *VAR_8;
 u8 *VAR_9 = VAR_6->tlvinfo;
 u32 VAR_10;
 u16 VAR_11;

 VAR_11 = ((VAR_5 << VAR_4) |
     VAR_1);
 VAR_6->typelen = FUNC_1(VAR_11);

 VAR_10 = ((VAR_0 << VAR_3) |
        VAR_2);
 VAR_6->ouisubtype = FUNC_0(VAR_10);

 VAR_8 = &VAR_7->etsrec;



 FUNC_2(&VAR_9[1], VAR_8);
}
