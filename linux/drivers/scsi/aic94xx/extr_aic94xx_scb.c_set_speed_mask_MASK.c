
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct asd_phy_desc {int max_sas_lrate; int min_sas_lrate; int max_sata_lrate; int min_sata_lrate; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(u8 *VAR_5, struct asd_phy_desc *VAR_6)
{

 *VAR_5 = VAR_2 | VAR_1 | VAR_0
  | VAR_4 | VAR_3;

 switch (VAR_6->max_sas_lrate) {
 case 128:
  *VAR_5 &= ~VAR_2;

 default:
 case 129:
  *VAR_5 &= ~VAR_1;

 case 130:
  *VAR_5 &= ~VAR_0;
 }

 switch (VAR_6->min_sas_lrate) {
 case 128:
  *VAR_5 |= VAR_1;

 case 129:
  *VAR_5 |= VAR_0;
 default:
 case 130:

  ;
 }

 switch (VAR_6->max_sata_lrate) {
 case 129:
  *VAR_5 &= ~VAR_4;

 default:
 case 130:
  *VAR_5 &= ~VAR_3;
 }

 switch (VAR_6->min_sata_lrate) {
 case 129:
  *VAR_5 |= VAR_3;
 default:
 case 130:

  ;
 }
}
