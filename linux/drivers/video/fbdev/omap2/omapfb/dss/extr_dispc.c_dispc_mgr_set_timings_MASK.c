
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_video_timings {unsigned int x_res; unsigned int y_res; unsigned int hsw; unsigned int hfp; unsigned int hbp; unsigned int vsw; unsigned int vfp; unsigned int vbp; unsigned int pixelclock; scalar_t__ interlace; int sync_pclk_edge; int de_level; int data_pclk_edge; int hsync_level; int vsync_level; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 () ;
 int FUNC_1 (char*,unsigned long,...) ;
 int FUNC_2 (int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int,unsigned int,int) ;
 int FUNC_4 (int,struct omap_video_timings*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(enum omap_channel VAR_0,
  const struct omap_video_timings *VAR_1)
{
 unsigned VAR_2, VAR_3;
 unsigned long VAR_4, VAR_5;
 struct omap_video_timings VAR_6 = *VAR_1;

 FUNC_1("channel %d xres %u yres %u\n", VAR_0, VAR_6.x_res, VAR_6.y_res);

 if (!FUNC_4(VAR_0, &VAR_6)) {
  FUNC_0();
  return;
 }

 if (FUNC_5(VAR_0)) {
  FUNC_2(VAR_0, VAR_6.hsw, VAR_6.hfp, VAR_6.hbp, VAR_6.vsw,
    VAR_6.vfp, VAR_6.vbp, VAR_6.vsync_level, VAR_6.hsync_level,
    VAR_6.data_pclk_edge, VAR_6.de_level, VAR_6.sync_pclk_edge);

  VAR_2 = VAR_6.x_res + VAR_6.hfp + VAR_6.hsw + VAR_6.hbp;
  VAR_3 = VAR_6.y_res + VAR_6.vfp + VAR_6.vsw + VAR_6.vbp;

  VAR_4 = VAR_1->pixelclock / VAR_2;
  VAR_5 = VAR_1->pixelclock / VAR_2 / VAR_3;

  FUNC_1("pck %u\n", VAR_1->pixelclock);
  FUNC_1("hsw %d hfp %d hbp %d vsw %d vfp %d vbp %d\n",
   VAR_6.hsw, VAR_6.hfp, VAR_6.hbp, VAR_6.vsw, VAR_6.vfp, VAR_6.vbp);
  FUNC_1("vsync_level %d hsync_level %d data_pclk_edge %d de_level %d sync_pclk_edge %d\n",
   VAR_6.vsync_level, VAR_6.hsync_level, VAR_6.data_pclk_edge,
   VAR_6.de_level, VAR_6.sync_pclk_edge);

  FUNC_1("hsync %luHz, vsync %luHz\n", VAR_4, VAR_5);
 } else {
  if (VAR_6.interlace)
   VAR_6.y_res /= 2;
 }

 FUNC_3(VAR_0, VAR_6.x_res, VAR_6.y_res);
}
