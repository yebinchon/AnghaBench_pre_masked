
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vmode; int yoffset; int xoffset; } ;
struct fbcon_ops {TYPE_2__ var; } ;
struct TYPE_3__ {int vmode; int yoffset; int xoffset; } ;
struct fb_info {TYPE_1__ var; struct fbcon_ops* fbcon_par; } ;


 int FUNC_0 (struct fb_info*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0)
{
 struct fbcon_ops *VAR_1 = VAR_0->fbcon_par;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1->var);
 VAR_1->var.xoffset = VAR_0->var.xoffset;
 VAR_1->var.yoffset = VAR_0->var.yoffset;
 VAR_1->var.vmode = VAR_0->var.vmode;
 return VAR_2;
}
