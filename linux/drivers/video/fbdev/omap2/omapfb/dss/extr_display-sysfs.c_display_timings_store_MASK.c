
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_video_timings {int vsw; int vbp; int vfp; int y_res; int hsw; int hbp; int hfp; int x_res; int pixelclock; } ;
struct TYPE_3__ {struct omap_video_timings timings; } ;
struct omap_dss_device {TYPE_2__* driver; TYPE_1__ panel; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* check_timings ) (struct omap_dss_device*,struct omap_video_timings*) ;int (* enable ) (struct omap_dss_device*) ;int (* set_timings ) (struct omap_dss_device*,struct omap_video_timings*) ;int (* disable ) (struct omap_dss_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_video_timings VAR_2 ;
 struct omap_video_timings VAR_3 ;
 int FUNC_0 (char const*,char*,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (struct omap_dss_device*,struct omap_video_timings*) ;
 int FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (struct omap_dss_device*,struct omap_video_timings*) ;
 int FUNC_5 (struct omap_dss_device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct omap_dss_device *VAR_4,
 const char *VAR_5, size_t VAR_6)
{
 struct omap_video_timings VAR_7 = VAR_4->panel.timings;
 int VAR_8, VAR_9;

 if (!VAR_4->driver->set_timings || !VAR_4->driver->check_timings)
  return -VAR_1;

 VAR_9 = 0;
 if (!VAR_9 && FUNC_0(VAR_5, "%u,%hu/%hu/%hu/%hu,%hu/%hu/%hu/%hu",
    &VAR_7.pixelclock,
    &VAR_7.x_res, &VAR_7.hfp, &VAR_7.hbp, &VAR_7.hsw,
    &VAR_7.y_res, &VAR_7.vfp, &VAR_7.vbp, &VAR_7.vsw) != 9)
  return -VAR_0;

 VAR_8 = VAR_4->driver->check_timings(VAR_4, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_4->driver->disable(VAR_4);
 VAR_4->driver->set_timings(VAR_4, &VAR_7);
 VAR_8 = VAR_4->driver->enable(VAR_4);
 if (VAR_8)
  return VAR_8;

 return VAR_6;
}
