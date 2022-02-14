
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bits_per_pixel; int xres_virtual; scalar_t__ nonstd; } ;
struct TYPE_3__ {int line_length; void* type; int type_aux; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static void FUNC_0(struct fb_info *VAR_6)
{
 if (VAR_6->var.bits_per_pixel == 4) {
  if (VAR_6->var.nonstd) {
   VAR_6->fix.type = VAR_3;
   VAR_6->fix.line_length = VAR_6->var.xres_virtual / 2;
  } else {
   VAR_6->fix.type = VAR_5;
   VAR_6->fix.type_aux = VAR_2;
   VAR_6->fix.line_length = VAR_6->var.xres_virtual / 8;
  }
 } else if (VAR_6->var.bits_per_pixel == 0) {
  VAR_6->fix.type = VAR_4;
  VAR_6->fix.type_aux = VAR_0;
  VAR_6->fix.line_length = VAR_6->var.xres_virtual / 4;
 } else {
  if (VAR_6->var.nonstd) {
   VAR_6->fix.type = VAR_5;
   VAR_6->fix.type_aux = VAR_1;
   VAR_6->fix.line_length = VAR_6->var.xres_virtual / 4;
  } else {
   VAR_6->fix.type = VAR_3;
   VAR_6->fix.line_length = VAR_6->var.xres_virtual;
  }
 }
}
