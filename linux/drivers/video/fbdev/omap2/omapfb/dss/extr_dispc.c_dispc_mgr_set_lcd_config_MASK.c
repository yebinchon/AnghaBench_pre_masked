
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_lcd_mgr_config {int lcden_sig_polarity; int video_port_width; int clock_info; int fifohandcheck; int stallmode; int io_pad_mode; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;

void FUNC_7(enum omap_channel VAR_0,
  const struct dss_lcd_mgr_config *VAR_1)
{
 FUNC_4(VAR_1->io_pad_mode);

 FUNC_2(VAR_0, VAR_1->stallmode);
 FUNC_1(VAR_0, VAR_1->fifohandcheck);

 FUNC_3(VAR_0, &VAR_1->clock_info);

 FUNC_6(VAR_0, VAR_1->video_port_width);

 FUNC_0(VAR_1->lcden_sig_polarity);

 FUNC_5(VAR_0);
}
