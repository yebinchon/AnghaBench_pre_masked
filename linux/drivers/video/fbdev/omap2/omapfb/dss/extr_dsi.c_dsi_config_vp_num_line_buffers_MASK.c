
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_video_timings {int x_res; } ;
struct dsi_data {scalar_t__ mode; int line_buffer_size; struct omap_video_timings timings; int pix_fmt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct platform_device*,int ,int,int,int) ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (VAR_3->mode == VAR_1) {
  int VAR_5 = FUNC_2(VAR_3->pix_fmt);
  struct omap_video_timings *VAR_6 = &VAR_3->timings;




  if (VAR_3->line_buffer_size <= VAR_6->x_res * VAR_5 / 8)
   VAR_4 = 0;
  else
   VAR_4 = 2;
 } else {

  VAR_4 = 2;
 }


 FUNC_0(VAR_2, VAR_0, VAR_4, 13, 12);
}
