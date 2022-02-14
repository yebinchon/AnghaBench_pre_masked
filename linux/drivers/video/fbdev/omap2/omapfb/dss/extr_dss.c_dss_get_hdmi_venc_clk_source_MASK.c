
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum omap_display_type { ____Placeholder_omap_display_type } omap_display_type ;
typedef enum dss_hdmi_venc_clk_source_select { ____Placeholder_dss_hdmi_venc_clk_source_select } dss_hdmi_venc_clk_source_select ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;

enum dss_hdmi_venc_clk_source_select FUNC_2(void)
{
 enum omap_display_type VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 if ((VAR_6 & VAR_3) == 0)
  return VAR_2;

 if ((VAR_6 & VAR_4) == 0)
  return VAR_1;

 return FUNC_0(VAR_0, 15, 15);
}
