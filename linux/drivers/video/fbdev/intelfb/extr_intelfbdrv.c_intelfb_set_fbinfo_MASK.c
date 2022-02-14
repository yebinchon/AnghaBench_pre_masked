
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; int physical; } ;
struct intelfb_info {int mmio_base_phys; TYPE_2__ fb; int name; int pseudo_palette; struct fb_info* info; } ;
struct TYPE_6__ {int xpanstep; int ypanstep; int accel; int mmio_len; int mmio_start; scalar_t__ ywrapstep; scalar_t__ type_aux; int type; int smem_len; int smem_start; int id; } ;
struct TYPE_4__ {int size; int buf_align; int access_align; int scan_align; int flags; } ;
struct fb_info {int var; TYPE_3__ fix; TYPE_1__ pixmap; int pseudo_palette; int * fbops; int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct intelfb_info*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct intelfb_info*,int *) ;

__attribute__((used)) static int FUNC_4(struct intelfb_info *VAR_6)
{
 struct fb_info *VAR_7 = VAR_6->info;

 FUNC_0("intelfb_set_fbinfo\n");

 VAR_7->flags = VAR_0;
 VAR_7->fbops = &VAR_5;
 VAR_7->pseudo_palette = VAR_6->pseudo_palette;

 VAR_7->pixmap.size = 64*1024;
 VAR_7->pixmap.buf_align = 8;
 VAR_7->pixmap.access_align = 32;
 VAR_7->pixmap.flags = VAR_2;

 if (FUNC_1(VAR_6))
  return 1;

 VAR_7->pixmap.scan_align = 1;
 FUNC_2(VAR_7->fix.id, VAR_6->name);
 VAR_7->fix.smem_start = VAR_6->fb.physical;
 VAR_7->fix.smem_len = VAR_6->fb.size;
 VAR_7->fix.type = VAR_3;
 VAR_7->fix.type_aux = 0;
 VAR_7->fix.xpanstep = 8;
 VAR_7->fix.ypanstep = 1;
 VAR_7->fix.ywrapstep = 0;
 VAR_7->fix.mmio_start = VAR_6->mmio_base_phys;
 VAR_7->fix.mmio_len = VAR_4;
 VAR_7->fix.accel = VAR_1;
 FUNC_3(VAR_6, &VAR_7->var);

 return 0;
}
