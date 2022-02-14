
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int (* de_copyarea ) (TYPE_4__*,unsigned int,unsigned int,int ,int ,unsigned int,unsigned int,unsigned int,int ,int ,int ,int ,int ) ;} ;
struct sm750_dev {int slock; TYPE_4__ accel; } ;
struct TYPE_5__ {unsigned int oScreen; } ;
struct lynxfb_par {TYPE_1__ crtc; struct sm750_dev* dev; } ;
struct TYPE_7__ {int bits_per_pixel; } ;
struct TYPE_6__ {unsigned int line_length; } ;
struct fb_info {TYPE_3__ var; TYPE_2__ fix; struct lynxfb_par* par; } ;
struct fb_copyarea {int height; int width; int dy; int dx; int sy; int sx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,unsigned int,unsigned int,int ,int ,unsigned int,unsigned int,unsigned int,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_1,
    const struct fb_copyarea *VAR_2)
{
 struct lynxfb_par *VAR_3;
 struct sm750_dev *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7;

 VAR_3 = VAR_1->par;
 VAR_4 = VAR_3->dev;





 VAR_5 = VAR_3->crtc.oScreen;
 VAR_6 = VAR_1->fix.line_length;
 VAR_7 = VAR_1->var.bits_per_pixel >> 3;







 FUNC_0(&VAR_4->slock);

 VAR_4->accel.de_copyarea(&VAR_4->accel,
         VAR_5, VAR_6, VAR_2->sx, VAR_2->sy,
         VAR_5, VAR_6, VAR_7, VAR_2->dx, VAR_2->dy,
         VAR_2->width, VAR_2->height,
         VAR_0);
 FUNC_1(&VAR_4->slock);
}
