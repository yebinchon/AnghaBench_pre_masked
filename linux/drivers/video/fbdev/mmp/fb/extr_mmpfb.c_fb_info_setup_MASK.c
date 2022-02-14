
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmpfb_info {scalar_t__ pix_fmt; int fb_size; int fb_start; int pseudo_palette; int fb_start_dma; int name; } ;
struct TYPE_4__ {int xres_virtual; int bits_per_pixel; int yres; } ;
struct TYPE_3__ {int line_length; int visual; int smem_len; int smem_start; int accel; scalar_t__ ywrapstep; int ypanstep; scalar_t__ xpanstep; scalar_t__ type_aux; int type; int id; } ;
struct fb_info {int flags; int node; int cmap; int screen_size; int screen_base; int pseudo_palette; int * fbops; TYPE_2__ var; TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_11,
   struct mmpfb_info *VAR_12)
{
 int VAR_13 = 0;

 VAR_11->flags = VAR_1 | VAR_4 |
  VAR_2 | VAR_3;
 VAR_11->node = -1;
 FUNC_1(VAR_11->fix.id, VAR_12->name);
 VAR_11->fix.type = VAR_6;
 VAR_11->fix.type_aux = 0;
 VAR_11->fix.xpanstep = 0;
 VAR_11->fix.ypanstep = VAR_11->var.yres;
 VAR_11->fix.ywrapstep = 0;
 VAR_11->fix.accel = VAR_5;
 VAR_11->fix.smem_start = VAR_12->fb_start_dma;
 VAR_11->fix.smem_len = VAR_12->fb_size;
 VAR_11->fix.visual = (VAR_12->pix_fmt == VAR_9) ?
  VAR_7 : VAR_8;
 VAR_11->fix.line_length = VAR_11->var.xres_virtual *
  VAR_11->var.bits_per_pixel / 8;
 VAR_11->fbops = &VAR_10;
 VAR_11->pseudo_palette = VAR_12->pseudo_palette;
 VAR_11->screen_base = VAR_12->fb_start;
 VAR_11->screen_size = VAR_12->fb_size;


 if (FUNC_0(&VAR_11->cmap, 256, 0) < 0)
  VAR_13 = -VAR_0;

 return VAR_13;
}
