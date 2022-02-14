
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_8__ {int (* de_fillrect ) (TYPE_4__*,unsigned int,unsigned int,unsigned int,int ,int ,int ,int ,size_t,unsigned int) ;} ;
struct sm750_dev {int slock; TYPE_4__ accel; } ;
struct TYPE_5__ {unsigned int oScreen; } ;
struct lynxfb_par {TYPE_1__ crtc; struct sm750_dev* dev; } ;
struct TYPE_7__ {int bits_per_pixel; } ;
struct TYPE_6__ {unsigned int line_length; } ;
struct fb_info {scalar_t__ state; scalar_t__ pseudo_palette; TYPE_3__ var; TYPE_2__ fix; struct lynxfb_par* par; } ;
struct fb_fillrect {size_t color; int height; int width; int dy; int dx; int rop; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,unsigned int,unsigned int,unsigned int,int ,int ,int ,int ,size_t,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_4,
    const struct fb_fillrect *VAR_5)
{
 struct lynxfb_par *VAR_6;
 struct sm750_dev *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 u32 VAR_12;

 if (VAR_4->state != VAR_0)
  return;

 VAR_6 = VAR_4->par;
 VAR_7 = VAR_6->dev;





 VAR_8 = VAR_6->crtc.oScreen;
 VAR_9 = VAR_4->fix.line_length;
 VAR_10 = VAR_4->var.bits_per_pixel >> 3;

 VAR_12 = (VAR_10 == 1) ? VAR_5->color :
  ((u32 *)VAR_4->pseudo_palette)[VAR_5->color];
 VAR_11 = (VAR_5->rop != VAR_3) ? VAR_2 : VAR_1;







 FUNC_0(&VAR_7->slock);

 VAR_7->accel.de_fillrect(&VAR_7->accel,
         VAR_8, VAR_9, VAR_10,
         VAR_5->dx, VAR_5->dy,
         VAR_5->width, VAR_5->height,
         VAR_12, VAR_11);
 FUNC_1(&VAR_7->slock);
}
