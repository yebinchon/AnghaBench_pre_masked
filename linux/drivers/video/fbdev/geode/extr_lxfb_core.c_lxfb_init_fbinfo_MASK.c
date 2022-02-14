
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct lxfb_par {int dummy; } ;
struct TYPE_4__ {int height; int width; scalar_t__ grayscale; int vmode; scalar_t__ accel_flags; int activate; scalar_t__ nonstd; } ;
struct TYPE_3__ {int accel; scalar_t__ ywrapstep; scalar_t__ ypanstep; scalar_t__ xpanstep; scalar_t__ type_aux; int type; int id; } ;
struct fb_info {int node; TYPE_2__ var; int cmap; void* pseudo_palette; int flags; int * fbops; TYPE_1__ fix; struct lxfb_par* par; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 struct fb_info* FUNC_1 (int,struct device*) ;
 int FUNC_2 (struct fb_info*) ;
 int VAR_5 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct fb_info *FUNC_4(struct device *VAR_6)
{
 struct lxfb_par *VAR_7;
 struct fb_info *VAR_8;


 VAR_8 = FUNC_1(sizeof(struct lxfb_par) + sizeof(u32) * 16,
     VAR_6);
 if (!VAR_8)
  return ((void*)0);

 VAR_7 = VAR_8->par;

 FUNC_3(VAR_8->fix.id, "Geode LX");

 VAR_8->fix.type = VAR_3;
 VAR_8->fix.type_aux = 0;
 VAR_8->fix.xpanstep = 0;
 VAR_8->fix.ypanstep = 0;
 VAR_8->fix.ywrapstep = 0;
 VAR_8->fix.accel = VAR_1;

 VAR_8->var.nonstd = 0;
 VAR_8->var.activate = VAR_2;
 VAR_8->var.height = -1;
 VAR_8->var.width = -1;
 VAR_8->var.accel_flags = 0;
 VAR_8->var.vmode = VAR_4;

 VAR_8->fbops = &VAR_5;
 VAR_8->flags = VAR_0;
 VAR_8->node = -1;

 VAR_8->pseudo_palette = (void *)VAR_7 + sizeof(struct lxfb_par);

 if (FUNC_0(&VAR_8->cmap, 256, 0) < 0) {
  FUNC_2(VAR_8);
  return ((void*)0);
 }

 VAR_8->var.grayscale = 0;

 return VAR_8;
}
