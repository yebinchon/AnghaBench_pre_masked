
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int bits_per_pixel; int xres_virtual; } ;
struct TYPE_3__ {int line_length; int visual; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_3)
{
 u32 VAR_4 = VAR_3->var.bits_per_pixel;

 VAR_3->fix.visual =
  VAR_4 == 8 ? VAR_0 : VAR_1;
 VAR_3->fix.line_length = FUNC_0(VAR_3->var.xres_virtual * VAR_4 / 8,
  VAR_2);
}
