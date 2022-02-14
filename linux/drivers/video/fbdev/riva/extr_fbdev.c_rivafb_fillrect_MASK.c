
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
struct TYPE_8__ {scalar_t__ Architecture; TYPE_3__* Bitmap; } ;
struct riva_par {int* palette; TYPE_4__ riva; } ;
struct TYPE_5__ {int bits_per_pixel; } ;
struct fb_info {int flags; scalar_t__ pseudo_palette; TYPE_1__ var; struct riva_par* par; } ;
struct fb_fillrect {int color; int rop; int dx; int dy; int width; int height; } ;
struct TYPE_7__ {TYPE_2__* UnclippedRectangle; int Color1A; } ;
struct TYPE_6__ {int WidthHeight; int TopLeft; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_4__,int ,int) ;


 int FUNC_2 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct riva_par*,int) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_3, const struct fb_fillrect *VAR_4)
{
 struct riva_par *VAR_5 = VAR_3->par;
 u_int VAR_6, VAR_7 = 0;

 if ((VAR_3->flags & VAR_1)) {
  FUNC_2(VAR_3, VAR_4);
  return;
 }

 if (VAR_3->var.bits_per_pixel == 8)
  VAR_6 = VAR_4->color;
 else {
  if (VAR_5->riva.Architecture != VAR_2)
   VAR_6 = ((u32 *)VAR_3->pseudo_palette)[VAR_4->color];
  else
   VAR_6 = VAR_5->palette[VAR_4->color];
 }

 switch (VAR_4->rop) {
 case 128:
  VAR_7 = 0x66;
  break;
 case 129:
 default:
  VAR_7 = 0xCC;
  break;
 }

 FUNC_4(VAR_5, VAR_7);

 FUNC_1(VAR_5->riva, VAR_0, 1);
 FUNC_0(&VAR_5->riva.Bitmap->Color1A, 0, VAR_6);

 FUNC_1(VAR_5->riva, VAR_0, 2);
 FUNC_0(&VAR_5->riva.Bitmap->UnclippedRectangle[0].TopLeft, 0,
  (VAR_4->dx << 16) | VAR_4->dy);
 FUNC_3();
 FUNC_0(&VAR_5->riva.Bitmap->UnclippedRectangle[0].WidthHeight, 0,
  (VAR_4->width << 16) | VAR_4->height);
 FUNC_3();
 FUNC_4(VAR_5, 0xcc);

}
