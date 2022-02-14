
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_8__ {int (* de_imageblit ) (TYPE_4__*,int ,int,int ,unsigned int,unsigned int,unsigned int,int ,int ,int,int ,unsigned int,unsigned int,int ) ;} ;
struct sm750_dev {int slock; TYPE_4__ accel; } ;
struct TYPE_5__ {unsigned int oScreen; } ;
struct lynxfb_par {TYPE_1__ crtc; struct sm750_dev* dev; } ;
struct TYPE_7__ {unsigned int line_length; scalar_t__ visual; } ;
struct TYPE_6__ {int bits_per_pixel; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_3__ fix; TYPE_2__ var; struct lynxfb_par* par; } ;
struct fb_image {int depth; size_t fg_color; size_t bg_color; int width; int height; int dy; int dx; int data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int ,int,int ,unsigned int,unsigned int,unsigned int,int ,int ,int,int ,unsigned int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_3,
     const struct fb_image *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9;
 struct lynxfb_par *VAR_10;
 struct sm750_dev *VAR_11;

 VAR_10 = VAR_3->par;
 VAR_11 = VAR_10->dev;




 VAR_5 = VAR_10->crtc.oScreen;
 VAR_6 = VAR_3->fix.line_length;
 VAR_7 = VAR_3->var.bits_per_pixel >> 3;


 if (VAR_4->depth != 1) {
  FUNC_0(VAR_3, VAR_4);
  return;
 }

 if (VAR_3->fix.visual == VAR_1 ||
     VAR_3->fix.visual == VAR_0) {
  VAR_8 = ((u32 *)VAR_3->pseudo_palette)[VAR_4->fg_color];
  VAR_9 = ((u32 *)VAR_3->pseudo_palette)[VAR_4->bg_color];
 } else {
  VAR_8 = VAR_4->fg_color;
  VAR_9 = VAR_4->bg_color;
 }







 FUNC_1(&VAR_11->slock);

 VAR_11->accel.de_imageblit(&VAR_11->accel,
          VAR_4->data, VAR_4->width >> 3, 0,
          VAR_5, VAR_6, VAR_7,
          VAR_4->dx, VAR_4->dy,
          VAR_4->width, VAR_4->height,
          VAR_8, VAR_9, VAR_2);
 FUNC_2(&VAR_11->slock);
}
