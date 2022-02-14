
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_ntb_dev {int dummy; } ;
typedef enum ntb_topo { ____Placeholder_ntb_topo } ntb_topo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;





enum ntb_topo FUNC_0(struct intel_ntb_dev *VAR_6, u8 VAR_7)
{
 switch (VAR_7 & VAR_5) {
 case 132:
  return VAR_1;

 case 133:
  return VAR_0;

 case 130:
 case 131:
  return VAR_3;

 case 128:
 case 129:
  return VAR_4;
 }

 return VAR_2;
}
