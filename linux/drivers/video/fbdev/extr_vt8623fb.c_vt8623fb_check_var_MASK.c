
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fb_var_screeninfo {int xres; int xres_virtual; int yres; int yres_virtual; int bits_per_pixel; int vmode; } ;
struct fb_info {int screen_size; int node; } ;
struct TYPE_3__ {int xresstep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_info*,char*,...) ;
 int FUNC_1 (int *,struct fb_var_screeninfo*,int ) ;
 int FUNC_2 (TYPE_1__*,struct fb_var_screeninfo*,int *) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_4, struct fb_info *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;


 VAR_6 = FUNC_2 (VAR_3, VAR_4, ((void*)0));
 if (VAR_6 < 0)
 {
  FUNC_0(VAR_5, "unsupported mode requested\n");
  return VAR_6;
 }


 if (VAR_4->xres > VAR_4->xres_virtual)
  VAR_4->xres_virtual = VAR_4->xres;

 if (VAR_4->yres > VAR_4->yres_virtual)
  VAR_4->yres_virtual = VAR_4->yres;


 VAR_8 = VAR_3[VAR_6].xresstep - 1;
 VAR_4->xres_virtual = (VAR_4->xres_virtual+VAR_8) & ~VAR_8;


 VAR_7 = ((VAR_4->bits_per_pixel * VAR_4->xres_virtual) >> 3) * VAR_4->yres_virtual;
 if (VAR_7 > VAR_5->screen_size)
 {
  FUNC_0(VAR_5, "not enough framebuffer memory (%d kB requested, %d kB available)\n",
         VAR_7 >> 10, (unsigned int) (VAR_5->screen_size >> 10));
  return -VAR_0;
 }


 if ((VAR_4->bits_per_pixel == 0) && (VAR_7 > (256*1024)))
 {
  FUNC_0(VAR_5, "text framebuffer size too large (%d kB requested, 256 kB possible)\n",
         VAR_7 >> 10);
  return -VAR_0;
 }

 VAR_6 = FUNC_1 (&VAR_2, VAR_4, VAR_5->node);
 if (VAR_6 < 0)
 {
  FUNC_0(VAR_5, "invalid timings requested\n");
  return VAR_6;
 }


 if (VAR_4->vmode & VAR_1)
  return -VAR_0;

 return 0;
}
