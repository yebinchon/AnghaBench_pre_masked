
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_video_timings {int pixelclock; int x_res; int hfp; int hbp; int hsw; int y_res; int vfp; int vbp; int vsw; } ;
struct omap_dss_device {TYPE_1__* driver; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_timings ) (struct omap_dss_device*,struct omap_video_timings*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (struct omap_dss_device*,struct omap_video_timings*) ;

__attribute__((used)) static ssize_t FUNC_2(struct omap_dss_device *VAR_2, char *VAR_3)
{
 struct omap_video_timings VAR_4;

 if (!VAR_2->driver->get_timings)
  return -VAR_0;

 VAR_2->driver->get_timings(VAR_2, &VAR_4);

 return FUNC_0(VAR_3, VAR_1, "%u,%u/%u/%u/%u,%u/%u/%u/%u\n",
   VAR_4.pixelclock,
   VAR_4.x_res, VAR_4.hfp, VAR_4.hbp, VAR_4.hsw,
   VAR_4.y_res, VAR_4.vfp, VAR_4.vbp, VAR_4.vsw);
}
