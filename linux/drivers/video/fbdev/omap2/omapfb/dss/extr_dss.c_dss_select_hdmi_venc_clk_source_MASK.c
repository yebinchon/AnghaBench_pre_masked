
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
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void FUNC_3(enum dss_hdmi_venc_clk_source_select VAR_6)
{
 enum omap_display_type VAR_7;
 VAR_7 = FUNC_2(VAR_5);


 FUNC_1((VAR_6 == VAR_2) && !(VAR_7 & VAR_4));
 FUNC_1((VAR_6 == VAR_1) && !(VAR_7 & VAR_3));


 if ((VAR_7 & VAR_4) && (VAR_7 & VAR_3))
  FUNC_0(VAR_0, VAR_6, 15, 15);
}
