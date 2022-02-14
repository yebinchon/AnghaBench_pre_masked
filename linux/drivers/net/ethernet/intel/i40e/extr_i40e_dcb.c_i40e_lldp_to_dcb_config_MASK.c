
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
typedef int typelength ;
struct i40e_lldp_org_tlv {int typelength; } ;
struct i40e_dcbx_config {int dummy; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

 int FUNC_0 (struct i40e_lldp_org_tlv*,struct i40e_dcbx_config*) ;
 scalar_t__ FUNC_1 (int ) ;

i40e_status FUNC_2(u8 *VAR_8,
        struct i40e_dcbx_config *VAR_9)
{
 i40e_status VAR_10 = 0;
 struct i40e_lldp_org_tlv *VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 u16 VAR_14;
 u16 VAR_15 = 0;

 if (!VAR_8 || !VAR_9)
  return VAR_1;


 VAR_8 += VAR_0;
 VAR_11 = (struct i40e_lldp_org_tlv *)VAR_8;
 while (1) {
  VAR_14 = FUNC_1(VAR_11->typelength);
  VAR_12 = (u16)((VAR_14 & VAR_5) >>
        VAR_6);
  VAR_13 = (u16)((VAR_14 & VAR_3) >>
          VAR_4);
  VAR_15 += sizeof(VAR_14) + VAR_13;


  if ((VAR_12 == VAR_7) || (VAR_15 > VAR_2))
   break;

  switch (VAR_12) {
  case 128:
   FUNC_0(VAR_11, VAR_9);
   break;
  default:
   break;
  }


  VAR_11 = (struct i40e_lldp_org_tlv *)((char *)VAR_11 +
          sizeof(VAR_11->typelength) +
          VAR_13);
 }

 return VAR_10;
}
