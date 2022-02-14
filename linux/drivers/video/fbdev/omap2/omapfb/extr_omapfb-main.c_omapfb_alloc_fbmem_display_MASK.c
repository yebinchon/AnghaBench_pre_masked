
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct omapfb_info {scalar_t__ rotation_type; struct omapfb2_device* fbdev; } ;
struct omapfb2_device {int dummy; } ;
struct omap_dss_device {TYPE_1__* driver; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {int (* get_resolution ) (struct omap_dss_device*,int*,int*) ;} ;


 int FUNC_0 (char*,int,unsigned long) ;
 struct omapfb_info* FUNC_1 (struct fb_info*) ;
 scalar_t__ VAR_0 ;
 struct omap_dss_device* FUNC_2 (struct fb_info*) ;
 unsigned long FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (struct fb_info*,unsigned long,unsigned long) ;
 int FUNC_6 (struct omapfb2_device*,struct omap_dss_device*) ;
 int FUNC_7 (struct omap_dss_device*,int*,int*) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3)
{
 struct omapfb_info *VAR_4 = FUNC_1(VAR_1);
 struct omapfb2_device *VAR_5 = VAR_4->fbdev;
 struct omap_dss_device *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_1);

 if (!VAR_6)
  return 0;

 switch (FUNC_6(VAR_5, VAR_6)) {
 case 16:
  VAR_7 = 2;
  break;
 case 24:
  VAR_7 = 4;
  break;
 default:
  VAR_7 = 4;
  break;
 }

 if (!VAR_2) {
  u16 VAR_8, VAR_9;

  VAR_6->driver->get_resolution(VAR_6, &VAR_8, &VAR_9);

  if (VAR_4->rotation_type == VAR_0) {
   VAR_2 = FUNC_3(FUNC_4(VAR_8, VAR_9, VAR_7),
     FUNC_4(VAR_9, VAR_8, VAR_7));

   FUNC_0("adjusting fb mem size for VRFB, %u -> %lu\n",
     VAR_8 * VAR_9 * VAR_7, VAR_2);
  } else {
   VAR_2 = VAR_8 * VAR_9 * VAR_7;
  }
 }

 if (!VAR_2)
  return 0;

 return FUNC_5(VAR_1, VAR_2, VAR_3);
}
