
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_var_screeninfo {int bits_per_pixel; } ;
struct TYPE_3__ {int smem_len; int xpanstep; int ypanstep; scalar_t__ mmio_len; scalar_t__ ywrapstep; scalar_t__ type_aux; int id; int accel; } ;
struct fb_info {int flags; int screen_base; int screen_size; int cmap; TYPE_1__ fix; int * fbops; int pseudo_palette; struct fb_var_screeninfo var; struct cirrusfb_info* par; } ;
struct cirrusfb_info {size_t btype; int pseudo_palette; } ;
struct TYPE_4__ {int name; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (struct cirrusfb_info*) ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_14)
{
 struct cirrusfb_info *VAR_15 = VAR_14->par;
 struct fb_var_screeninfo *VAR_16 = &VAR_14->var;

 VAR_14->pseudo_palette = VAR_15->pseudo_palette;
 VAR_14->flags = VAR_1
      | VAR_6
      | VAR_7
      | VAR_4
      | VAR_5
      | VAR_2;
 if (VAR_13 || FUNC_1(VAR_15)) {
  VAR_14->flags |= VAR_3;
  VAR_14->fix.accel = VAR_9;
 } else
  VAR_14->fix.accel = VAR_8;

 VAR_14->fbops = &VAR_12;

 if (VAR_15->btype == VAR_0) {
  if (VAR_16->bits_per_pixel == 16)
   VAR_14->screen_base += 1 * VAR_10;
  if (VAR_16->bits_per_pixel == 32)
   VAR_14->screen_base += 2 * VAR_10;
 }


 FUNC_2(VAR_14->fix.id, VAR_11[VAR_15->btype].name,
  sizeof(VAR_14->fix.id));



 VAR_14->fix.smem_len = VAR_14->screen_size;
 if (VAR_16->bits_per_pixel == 1)
  VAR_14->fix.smem_len /= 4;
 VAR_14->fix.type_aux = 0;
 VAR_14->fix.xpanstep = 1;
 VAR_14->fix.ypanstep = 1;
 VAR_14->fix.ywrapstep = 0;


 VAR_14->fix.mmio_len = 0;

 FUNC_0(&VAR_14->cmap, 256, 0);

 return 0;
}
