
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ice_lldp_org_tlv {int * tlvinfo; } ;
struct ice_dcbx_cfg {int etsrec; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct ice_lldp_org_tlv *VAR_0,
     struct ice_dcbx_cfg *VAR_1)
{
 u8 *VAR_2 = VAR_0->tlvinfo;


 FUNC_0(&VAR_2[1], &VAR_1->etsrec);
}
