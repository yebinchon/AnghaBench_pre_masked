
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct omap_dss_device {TYPE_1__* driver; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {int (* update ) (struct omap_dss_device*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;int (* get_resolution ) (struct omap_dss_device*,scalar_t__*,scalar_t__*) ;} ;


 int VAR_0 ;
 struct omap_dss_device* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct omap_dss_device*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct omap_dss_device*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_1,
  u32 VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct omap_dss_device *VAR_6 = FUNC_0(VAR_1);
 u16 VAR_7, VAR_8;

 if (!VAR_6)
  return 0;

 if (VAR_4 == 0 || VAR_5 == 0)
  return 0;

 VAR_6->driver->get_resolution(VAR_6, &VAR_7, &VAR_8);

 if (VAR_2 + VAR_4 > VAR_7 || VAR_3 + VAR_5 > VAR_8)
  return -VAR_0;

 return VAR_6->driver->update(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
}
