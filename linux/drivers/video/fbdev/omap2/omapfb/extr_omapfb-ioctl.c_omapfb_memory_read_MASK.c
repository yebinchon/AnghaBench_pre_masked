
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_memory_read {int buffer_size; int w; int h; int buffer; int y; int x; } ;
struct omap_dss_device {TYPE_1__* driver; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {int (* memory_read ) (struct omap_dss_device*,void*,int,int ,int ,int,int) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,void*,int) ;
 struct omap_dss_device* FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct omap_dss_device*,void*,int,int ,int ,int,int) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct fb_info *VAR_4,
  struct omapfb_memory_read *VAR_5)
{
 struct omap_dss_device *VAR_6 = FUNC_3(VAR_4);
 void *VAR_7;
 int VAR_8;

 if (!VAR_6 || !VAR_6->driver->memory_read)
  return -VAR_2;

 if (!FUNC_1(VAR_5->buffer, VAR_5->buffer_size))
  return -VAR_0;

 if (VAR_5->w > 4096 || VAR_5->h > 4096)
  return -VAR_1;

 if (VAR_5->w * VAR_5->h * 3 > VAR_5->buffer_size)
  return -VAR_1;

 VAR_7 = FUNC_6(VAR_5->buffer_size);
 if (!VAR_7) {
  FUNC_0("vmalloc failed\n");
  return -VAR_3;
 }

 VAR_8 = VAR_6->driver->memory_read(VAR_6, VAR_7, VAR_5->buffer_size,
   VAR_5->x, VAR_5->y, VAR_5->w, VAR_5->h);

 if (VAR_8 > 0) {
  if (FUNC_2(VAR_5->buffer, VAR_7, VAR_8))
   VAR_8 = -VAR_0;
 }

 FUNC_5(VAR_7);

 return VAR_8;
}
