
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct vbe_mode_ib {unsigned int bytes_per_scan_line; int phys_base_ptr; } ;
struct TYPE_7__ {int total_memory; } ;
struct uvesafb_par {int ypan; int vbe_modes_cnt; TYPE_2__ vbe_ib; TYPE_1__* vbe_modes; } ;
struct TYPE_8__ {unsigned int yres; int yres_virtual; } ;
struct TYPE_10__ {int ypanstep; int ywrapstep; unsigned int smem_len; int smem_start; } ;
struct fb_info {int flags; TYPE_4__* fbops; TYPE_3__ var; TYPE_5__ fix; struct uvesafb_par* par; int * pseudo_palette; } ;
struct TYPE_9__ {int * fb_pan_display; int * fb_blank; } ;
struct TYPE_6__ {int bytes_per_scan_line; int y_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 TYPE_5__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_6, struct vbe_mode_ib *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 struct uvesafb_par *VAR_11 = VAR_6->par;
 int VAR_12, VAR_13;

 VAR_6->pseudo_palette = ((u8 *)VAR_6->par + sizeof(struct uvesafb_par));
 VAR_6->fix = VAR_3;
 VAR_6->fix.ypanstep = VAR_11->ypan ? 1 : 0;
 VAR_6->fix.ywrapstep = (VAR_11->ypan > 1) ? 1 : 0;


 if (!VAR_2)
  VAR_6->fbops->fb_blank = ((void*)0);





 VAR_9 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_11->vbe_modes_cnt; VAR_12++) {
  VAR_13 = VAR_11->vbe_modes[VAR_12].bytes_per_scan_line *
     VAR_11->vbe_modes[VAR_12].y_res;
  if (VAR_13 > VAR_9)
   VAR_9 = VAR_13;
 }
 VAR_9 *= 2;






 VAR_8 = VAR_6->var.yres * VAR_7->bytes_per_scan_line;






 VAR_10 = VAR_11->vbe_ib.total_memory * 65536;
 if (VAR_5)
  VAR_10 = VAR_5 * 1024 * 1024;
 if (VAR_10 < VAR_8)
  VAR_10 = VAR_8;







 if (VAR_4)
  VAR_9 = VAR_4 * 1024 * 1024;
 if (VAR_9 < VAR_8)
  VAR_9 = VAR_8;
 if (VAR_9 > VAR_10)
  VAR_9 = VAR_10;

 VAR_6->fix.smem_len = VAR_9;
 VAR_6->fix.smem_start = VAR_7->phys_base_ptr;





 VAR_6->var.yres_virtual = VAR_6->fix.smem_len /
     VAR_7->bytes_per_scan_line;

 if (VAR_11->ypan && VAR_6->var.yres_virtual > VAR_6->var.yres) {
  FUNC_0("scrolling: %s using protected mode interface, yres_virtual=%d\n",
   (VAR_11->ypan > 1) ? "ywrap" : "ypan",
   VAR_6->var.yres_virtual);
 } else {
  FUNC_0("scrolling: redraw\n");
  VAR_6->var.yres_virtual = VAR_6->var.yres;
  VAR_11->ypan = 0;
 }

 VAR_6->flags = VAR_0 |
   (VAR_11->ypan ? VAR_1 : 0);

 if (!VAR_11->ypan)
  VAR_6->fbops->fb_pan_display = ((void*)0);
}
