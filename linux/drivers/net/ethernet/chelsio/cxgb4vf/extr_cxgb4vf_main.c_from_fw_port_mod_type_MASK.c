
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum fw_port_type { ____Placeholder_fw_port_type } fw_port_type ;
typedef enum fw_port_module_type { ____Placeholder_fw_port_module_type } fw_port_module_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static int FUNC_0(enum fw_port_type VAR_27,
     enum fw_port_module_type VAR_28)
{
 if (VAR_27 == VAR_6 ||
     VAR_27 == VAR_8 ||
     VAR_27 == VAR_7) {
  return VAR_26;
 } else if (VAR_27 == VAR_13 ||
     VAR_27 == VAR_12) {
  return VAR_23;
 } else if (VAR_27 == VAR_20 ||
     VAR_27 == VAR_19 ||
     VAR_27 == VAR_17 ||
     VAR_27 == VAR_18 ||
     VAR_27 == VAR_10 ||
     VAR_27 == VAR_11 ||
     VAR_27 == VAR_9 ||
     VAR_27 == VAR_21) {
  if (VAR_28 == VAR_1 ||
      VAR_28 == VAR_3 ||
      VAR_28 == VAR_0 ||
      VAR_28 == VAR_2)
   return VAR_23;
  else if (VAR_28 == VAR_5 ||
    VAR_28 == VAR_4)
   return VAR_22;
  else
   return VAR_25;
 } else if (VAR_27 == VAR_14 ||
     VAR_27 == VAR_15 ||
     VAR_27 == VAR_16) {
  return VAR_24;
 }

 return VAR_25;
}
