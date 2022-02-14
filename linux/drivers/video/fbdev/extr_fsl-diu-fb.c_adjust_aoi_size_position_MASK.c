
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mfb_info {int index; scalar_t__ x_aoi_d; scalar_t__ y_aoi_d; int count; struct fsl_diu_data* parent; } ;
struct fsl_diu_data {TYPE_2__* fsl_diu_info; } ;
struct fb_var_screeninfo {void* xres; int yres; } ;
struct fb_info {struct mfb_info* par; } ;
typedef enum mfb_index { ____Placeholder_mfb_index } mfb_index ;
typedef void* __u32 ;
struct TYPE_3__ {void* yres; void* xres; } ;
struct TYPE_4__ {TYPE_1__ var; struct mfb_info* par; } ;
__attribute__((used)) static void FUNC_0(struct fb_var_screeninfo *VAR_0,
    struct fb_info *VAR_1)
{
 struct mfb_info *VAR_2, *VAR_3, *VAR_4 = VAR_1->par;
 struct fsl_diu_data *VAR_5 = VAR_4->parent;
 int VAR_6, VAR_7;
 enum mfb_index VAR_8 = VAR_4->index;
 int VAR_9, VAR_10;
 __u32 VAR_11, VAR_12, VAR_13;

 VAR_11 = VAR_5->fsl_diu_info[0].var.xres;
 VAR_12 = VAR_5->fsl_diu_info[0].var.yres;

 if (VAR_4->x_aoi_d < 0)
  VAR_4->x_aoi_d = 0;
 if (VAR_4->y_aoi_d < 0)
  VAR_4->y_aoi_d = 0;
 switch (VAR_8) {
 case 132:
  if (VAR_4->x_aoi_d != 0)
   VAR_4->x_aoi_d = 0;
  if (VAR_4->y_aoi_d != 0)
   VAR_4->y_aoi_d = 0;
  break;
 case 131:
 case 129:
  VAR_2 = VAR_5->fsl_diu_info[VAR_8+1].par;
  VAR_9 = VAR_2->count > 0 ? 1 : 0;
  if (VAR_0->xres > VAR_11)
   VAR_0->xres = VAR_11;
  if ((VAR_4->x_aoi_d + VAR_0->xres) > VAR_11)
   VAR_4->x_aoi_d = VAR_11 - VAR_0->xres;

  if (VAR_9)
   VAR_6 = VAR_2->y_aoi_d;
  else
   VAR_6 = VAR_12;
  if (VAR_0->yres > VAR_6)
   VAR_0->yres = VAR_6;
  if ((VAR_4->y_aoi_d + VAR_0->yres) > VAR_6)
   VAR_4->y_aoi_d = VAR_6 - VAR_0->yres;
  break;
 case 130:
 case 128:
  VAR_3 = VAR_5->fsl_diu_info[VAR_8-1].par;
  VAR_13 = VAR_5->fsl_diu_info[VAR_8-1].var.yres;
  VAR_7 = VAR_3->y_aoi_d + VAR_13;
  VAR_10 = VAR_3->count > 0 ? 1 : 0;
  if (VAR_0->xres > VAR_11)
   VAR_0->xres = VAR_11;
  if ((VAR_4->x_aoi_d + VAR_0->xres) > VAR_11)
   VAR_4->x_aoi_d = VAR_11 - VAR_0->xres;
  if (VAR_4->y_aoi_d < 0)
   VAR_4->y_aoi_d = 0;
  if (VAR_10) {
   if (VAR_4->y_aoi_d < VAR_7)
    VAR_4->y_aoi_d = VAR_7;
   VAR_6 = VAR_12
      - VAR_7;
  } else
   VAR_6 = VAR_12;
  if (VAR_0->yres > VAR_6)
   VAR_0->yres = VAR_6;
  if ((VAR_4->y_aoi_d + VAR_0->yres) > VAR_12)
   VAR_4->y_aoi_d = VAR_12 - VAR_0->yres;
  break;
 }
}
