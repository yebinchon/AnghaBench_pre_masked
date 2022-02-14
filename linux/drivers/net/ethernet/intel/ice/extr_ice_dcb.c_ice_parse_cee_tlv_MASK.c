
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct ice_lldp_org_tlv {int typelen; int ouisubtype; } ;
struct ice_dcbx_cfg {int dummy; } ;
struct TYPE_2__ {int typelen; } ;
struct ice_cee_feat_tlv {TYPE_1__ hdr; } ;
struct ice_cee_ctrl_tlv {int dummy; } ;
typedef int ouisubtype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ice_cee_feat_tlv*,struct ice_dcbx_cfg*) ;
 int FUNC_1 (struct ice_cee_feat_tlv*,struct ice_dcbx_cfg*) ;
 int FUNC_2 (struct ice_cee_feat_tlv*,struct ice_dcbx_cfg*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ice_lldp_org_tlv *VAR_8, struct ice_dcbx_cfg *VAR_9)
{
 struct ice_cee_feat_tlv *VAR_10;
 u8 VAR_11, VAR_12 = 0;
 u16 VAR_13, VAR_14, VAR_15;
 u32 VAR_16;

 VAR_16 = FUNC_3(VAR_8->ouisubtype);
 VAR_11 = (u8)((VAR_16 & VAR_4) >>
         VAR_5);

 if (VAR_11 != VAR_0)
  return;

 VAR_15 = FUNC_4(VAR_8->typelen);
 VAR_14 = ((VAR_15 & VAR_2) >> VAR_3);
 VAR_13 = sizeof(VAR_8->typelen) + sizeof(VAR_16) +
  sizeof(struct ice_cee_ctrl_tlv);

 if (VAR_14 <= VAR_13)
  return;

 VAR_10 = (struct ice_cee_feat_tlv *)((char *)VAR_8 + VAR_13);
 while (VAR_12 < VAR_1) {
  u16 VAR_17;

  VAR_15 = FUNC_4(VAR_10->hdr.typelen);
  VAR_17 = ((VAR_15 & VAR_2) >> VAR_3);
  VAR_11 = (u8)((VAR_15 & VAR_6) >>
          VAR_7);
  switch (VAR_11) {
  case 128:
   FUNC_2(VAR_10, VAR_9);
   break;
  case 129:
   FUNC_1(VAR_10, VAR_9);
   break;
  case 130:
   FUNC_0(VAR_10, VAR_9);
   break;
  default:
   return;
  }
  VAR_12++;

  VAR_10 = (struct ice_cee_feat_tlv *)
     ((char *)VAR_10 + sizeof(VAR_10->hdr.typelen) +
      VAR_17);
 }
}
