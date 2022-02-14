
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_video_timings {unsigned long pixelclock; } ;
struct omap_overlay_manager {int id; } ;
struct omap_dss_device {struct omap_overlay_manager* manager; } ;
struct dpi_data {scalar_t__ pll; struct omap_video_timings timings; struct omap_dss_device output; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int FUNC_1 (struct dpi_data*,unsigned long,unsigned long*,int*,int*) ;
 int FUNC_2 (struct dpi_data*,int ,unsigned long,unsigned long*,int*,int*) ;
 int FUNC_3 (struct omap_overlay_manager*,struct omap_video_timings*) ;

__attribute__((used)) static int FUNC_4(struct dpi_data *VAR_0)
{
 struct omap_dss_device *VAR_1 = &VAR_0->output;
 struct omap_overlay_manager *VAR_2 = VAR_1->manager;
 struct omap_video_timings *VAR_3 = &VAR_0->timings;
 int VAR_4 = 0, VAR_5 = 0;
 unsigned long VAR_6 = 0;
 unsigned long VAR_7;
 int VAR_8 = 0;

 if (VAR_0->pll)
  VAR_8 = FUNC_2(VAR_0, VAR_2->id, VAR_3->pixelclock, &VAR_6,
    &VAR_4, &VAR_5);
 else
  VAR_8 = FUNC_1(VAR_0, VAR_3->pixelclock, &VAR_6,
    &VAR_4, &VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_7 = VAR_6 / VAR_4 / VAR_5;

 if (VAR_7 != VAR_3->pixelclock) {
  FUNC_0("Could not find exact pixel clock. Requested %d Hz, got %lu Hz\n",
   VAR_3->pixelclock, VAR_7);

  VAR_3->pixelclock = VAR_7;
 }

 FUNC_3(VAR_2, VAR_3);

 return 0;
}
