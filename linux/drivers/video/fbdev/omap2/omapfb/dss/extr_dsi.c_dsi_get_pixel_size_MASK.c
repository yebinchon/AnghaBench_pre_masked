
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum omap_dss_dsi_pixel_format { ____Placeholder_omap_dss_dsi_pixel_format } omap_dss_dsi_pixel_format ;


 int FUNC_0 () ;





u8 FUNC_1(enum omap_dss_dsi_pixel_format VAR_0)
{
 switch (VAR_0) {
 case 128:
 case 130:
  return 24;
 case 129:
  return 18;
 case 131:
  return 16;
 default:
  FUNC_0();
  return 0;
 }
}
