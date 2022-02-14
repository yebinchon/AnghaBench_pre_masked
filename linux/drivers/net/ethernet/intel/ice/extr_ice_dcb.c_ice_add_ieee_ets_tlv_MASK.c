
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ice_lldp_org_tlv {int* tlvinfo; int ouisubtype; int typelen; } ;
struct ice_dcb_ets_cfg {int maxtcs; scalar_t__ willing; } ;
struct ice_dcbx_cfg {struct ice_dcb_ets_cfg etscfg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,struct ice_dcb_ets_cfg*) ;

__attribute__((used)) static void
FUNC_4(struct ice_lldp_org_tlv *VAR_8, struct ice_dcbx_cfg *VAR_9)
{
 struct ice_dcb_ets_cfg *VAR_10;
 u8 *VAR_11 = VAR_8->tlvinfo;
 u8 VAR_12 = 0;
 u32 VAR_13;
 u16 VAR_14;

 VAR_14 = ((VAR_7 << VAR_6) |
     VAR_2);
 VAR_8->typelen = FUNC_2(VAR_14);

 VAR_13 = ((VAR_0 << VAR_5) |
        VAR_4);
 VAR_8->ouisubtype = FUNC_1(VAR_13);
 VAR_10 = &VAR_9->etscfg;
 if (VAR_10->willing)
  VAR_12 = FUNC_0(VAR_3);
 VAR_12 |= VAR_10->maxtcs & VAR_1;
 VAR_11[0] = VAR_12;


 FUNC_3(&VAR_11[1], VAR_10);
}
