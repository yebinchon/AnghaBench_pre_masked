
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_monspecs {int modedb_len; struct fb_videomode* modedb; } ;
typedef struct fb_monspecs u8 ;
struct omap_video_timings {int dummy; } ;
struct omap_dss_device {TYPE_1__* driver; } ;
struct fb_videomode {scalar_t__ pixclock; int xres; int vmode; } ;
struct TYPE_2__ {int (* read_edid ) (struct omap_dss_device*,struct fb_monspecs*,int) ;int (* check_timings ) (struct omap_dss_device*,struct omap_video_timings*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fb_videomode*) ;
 int FUNC_1 (struct fb_monspecs*,struct fb_monspecs*) ;
 int FUNC_2 (struct fb_videomode*,struct omap_dss_device*,struct omap_video_timings*) ;
 int FUNC_3 (struct fb_monspecs*) ;
 struct fb_monspecs* FUNC_4 (int,int ) ;
 struct fb_monspecs* FUNC_5 (int,int ) ;
 int FUNC_6 (struct omap_dss_device*,struct fb_monspecs*,int) ;
 int FUNC_7 (struct omap_dss_device*,struct omap_video_timings*) ;

__attribute__((used)) static int FUNC_8(struct omap_dss_device *VAR_6,
  struct omap_video_timings *VAR_7)
{
 struct fb_monspecs *VAR_8;
 u8 *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 if (!VAR_6->driver->read_edid)
  return -VAR_0;

 VAR_13 = 0x80 * 2;
 VAR_9 = FUNC_4(VAR_13, VAR_5);
 if (VAR_9 == ((void*)0))
  return -VAR_2;

 VAR_10 = VAR_6->driver->read_edid(VAR_6, VAR_9, VAR_13);
 if (VAR_10 < 0)
  goto err1;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_5);
 if (VAR_8 == ((void*)0)) {
  VAR_10 = -VAR_2;
  goto err1;
 }

 FUNC_1(VAR_9, VAR_8);

 VAR_12 = -1;

 for (VAR_11 = 0; VAR_11 < VAR_8->modedb_len; ++VAR_11) {
  struct fb_videomode *VAR_14;
  struct omap_video_timings VAR_15;

  VAR_14 = &VAR_8->modedb[VAR_11];

  if (VAR_14->pixclock == 0)
   continue;


  if (VAR_14->xres == 2880 || VAR_14->xres == 1440)
   continue;

  if (VAR_14->vmode & VAR_4 ||
    VAR_14->vmode & VAR_3)
   continue;

  FUNC_2(VAR_14, VAR_6, &VAR_15);

  VAR_10 = VAR_6->driver->check_timings(VAR_6, &VAR_15);
  if (VAR_10 == 0) {
   VAR_12 = VAR_11;
   break;
  }
 }

 if (VAR_12 == -1) {
  VAR_10 = -VAR_1;
  goto err2;
 }

 FUNC_2(&VAR_8->modedb[VAR_12], VAR_6,
  VAR_7);

 VAR_10 = 0;

err2:
 FUNC_0(VAR_8->modedb);
 FUNC_3(VAR_8);
err1:
 FUNC_3(VAR_9);

 return VAR_10;
}
