
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ice_lldp_org_tlv {int* tlvinfo; int ouisubtype; int typelen; } ;
struct TYPE_2__ {int pfccap; int pfcena; scalar_t__ mbc; scalar_t__ willing; } ;
struct ice_dcbx_cfg {TYPE_1__ pfc; } ;


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

__attribute__((used)) static void
FUNC_3(struct ice_lldp_org_tlv *VAR_8, struct ice_dcbx_cfg *VAR_9)
{
 u8 *VAR_10 = VAR_8->tlvinfo;
 u32 VAR_11;
 u16 VAR_12;

 VAR_12 = ((VAR_7 << VAR_6) |
     VAR_2);
 VAR_8->typelen = FUNC_2(VAR_12);

 VAR_11 = ((VAR_0 << VAR_5) |
        VAR_4);
 VAR_8->ouisubtype = FUNC_1(VAR_11);







 if (VAR_9->pfc.willing)
  VAR_10[0] = FUNC_0(VAR_3);

 if (VAR_9->pfc.mbc)
  VAR_10[0] |= FUNC_0(VAR_1);

 VAR_10[0] |= VAR_9->pfc.pfccap & 0xF;
 VAR_10[1] = VAR_9->pfc.pfcena;
}
