
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum maxim_device_type { ____Placeholder_maxim_device_type } maxim_device_type ;
typedef enum max14577_muic_charger_type { ____Placeholder_max14577_muic_charger_type } max14577_muic_charger_type ;
 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static enum max14577_muic_charger_type FUNC_1(
  enum maxim_device_type VAR_1, u8 VAR_2) {
 switch (VAR_2) {
 case 132:
 case 128:
 case 133:
 case 134:
 case 129:
 case 130:
  return VAR_2;
 case 135:
 case 131:
  if (VAR_1 == VAR_0)
   VAR_2 |= 0x8;
  return VAR_2;
 default:
  FUNC_0(1, "max14577: Unsupported chgtyp register value 0x%02x", VAR_2);
  return VAR_2;
 }
}
