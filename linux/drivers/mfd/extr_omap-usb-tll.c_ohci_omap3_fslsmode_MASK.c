
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum usbhs_omap_port_mode { ____Placeholder_usbhs_omap_port_mode } usbhs_omap_port_mode ;
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

 int FUNC_0 (char*) ;

__attribute__((used)) static unsigned FUNC_1(enum usbhs_omap_port_mode VAR_10)
{
 switch (VAR_10) {
 case 128:
 case 136:
  return VAR_6;

 case 135:
  return VAR_7;

 case 138:
  return VAR_2;

 case 137:
  return VAR_4;

 case 130:
  return VAR_8;

 case 129:
  return VAR_9;

 case 132:
  return VAR_3;

 case 131:
  return VAR_5;

 case 134:
  return VAR_1;

 case 133:
  return VAR_0;
 default:
  FUNC_0("Invalid port mode, using default\n");
  return VAR_6;
 }
}
