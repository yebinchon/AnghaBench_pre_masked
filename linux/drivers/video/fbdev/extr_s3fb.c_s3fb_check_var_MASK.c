
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct s3fb_info {scalar_t__ chip; } ;
struct fb_var_screeninfo {int xres; int xres_virtual; int yres; int yres_virtual; int bits_per_pixel; int pixclock; } ;
struct fb_info {int screen_size; int node; struct s3fb_info* par; } ;
struct TYPE_3__ {int xresstep; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fb_info*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int *,struct fb_var_screeninfo*,int ) ;
 int FUNC_3 (int *,int ,int *,int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*,struct fb_var_screeninfo*,int *) ;

__attribute__((used)) static int FUNC_5(struct fb_var_screeninfo *VAR_5, struct fb_info *VAR_6)
{
 struct s3fb_info *VAR_7 = VAR_6->par;
 int VAR_8, VAR_9, VAR_10;
 u16 VAR_11, VAR_12, VAR_13;


 VAR_8 = FUNC_4 (VAR_4, VAR_5, ((void*)0));



 if ((VAR_7->chip == VAR_0) ? (VAR_8 == 7) : (VAR_8 == 6))
  VAR_8 = -VAR_1;

 if (VAR_8 < 0) {
  FUNC_1(VAR_6, "unsupported mode requested\n");
  return VAR_8;
 }


 if (VAR_5->xres > VAR_5->xres_virtual)
  VAR_5->xres_virtual = VAR_5->xres;

 if (VAR_5->yres > VAR_5->yres_virtual)
  VAR_5->yres_virtual = VAR_5->yres;


 VAR_10 = VAR_4[VAR_8].xresstep - 1;
 VAR_5->xres_virtual = (VAR_5->xres_virtual+VAR_10) & ~VAR_10;


 VAR_9 = ((VAR_5->bits_per_pixel * VAR_5->xres_virtual) >> 3) * VAR_5->yres_virtual;
 if (VAR_9 > VAR_6->screen_size) {
  FUNC_1(VAR_6, "not enough framebuffer memory (%d kB requested , %u kB available)\n",
         VAR_9 >> 10, (unsigned int) (VAR_6->screen_size >> 10));
  return -VAR_1;
 }

 VAR_8 = FUNC_2 (&VAR_3, VAR_5, VAR_6->node);
 if (VAR_8 < 0) {
  FUNC_1(VAR_6, "invalid timings requested\n");
  return VAR_8;
 }

 VAR_8 = FUNC_3(&VAR_2, FUNC_0(VAR_5->pixclock), &VAR_11, &VAR_12, &VAR_13,
    VAR_6->node);
 if (VAR_8 < 0) {
  FUNC_1(VAR_6, "invalid pixclock value requested\n");
  return VAR_8;
 }

 return 0;
}
