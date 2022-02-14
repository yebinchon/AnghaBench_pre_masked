
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int height; int width; } ;
struct vc_data {TYPE_2__ vc_font; } ;
struct fbcon_ops {int fontbuffer; TYPE_1__* p; } ;
struct TYPE_6__ {int size; int scan_align; int buf_align; } ;
struct fb_info {TYPE_3__ pixmap; struct fbcon_ops* fbcon_par; } ;
struct fb_image {int fg_color; int bg_color; int dx; int dy; int width; int depth; int height; int * data; } ;
struct TYPE_4__ {int scrollmode; } ;


 int FUNC_0 (int ,struct fb_info*) ;
 int VAR_0 ;
 int FUNC_1 (struct vc_data*,struct fb_info*,unsigned short const*,int,int,int,int,int,struct fb_image*,int *,int *) ;
 int * FUNC_2 (struct fb_info*,TYPE_3__*,int) ;
 int FUNC_3 (struct fb_info*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (unsigned short const*) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct vc_data *VAR_1, struct fb_info *VAR_2,
        const unsigned short *VAR_3, int VAR_4, int VAR_5, int VAR_6,
        int VAR_7, int VAR_8)
{
 struct fb_image VAR_9;
 struct fbcon_ops *VAR_10 = VAR_2->fbcon_par;
 u32 VAR_11 = (VAR_1->vc_font.height + 7)/8;
 u32 VAR_12 = VAR_11 * VAR_1->vc_font.width;
 u32 VAR_13 = VAR_2->pixmap.size/VAR_12;
 u32 VAR_14 = VAR_2->pixmap.scan_align - 1;
 u32 VAR_15 = VAR_2->pixmap.buf_align - 1;
 u32 VAR_16, VAR_17, VAR_18;
 u32 VAR_19 = FUNC_3(VAR_2, FUNC_6(VAR_3));
 u8 *VAR_20, *VAR_21 = ((void*)0);
 u32 VAR_22 = FUNC_0(VAR_10->p->scrollmode, VAR_2);

 if (!VAR_10->fontbuffer)
  return;

 VAR_9.fg_color = VAR_7;
 VAR_9.bg_color = VAR_8;
 VAR_9.dx = VAR_5 * VAR_1->vc_font.height;
 VAR_9.dy = VAR_22 - ((VAR_6 + VAR_4) * VAR_1->vc_font.width);
 VAR_9.width = VAR_1->vc_font.height;
 VAR_9.depth = 1;

 if (VAR_19) {
  VAR_21 = FUNC_5(VAR_12, VAR_0);
  if (!VAR_21)
   return;
 }

 VAR_3 += VAR_4 - 1;

 while (VAR_4) {
  if (VAR_4 > VAR_13)
   VAR_16 = VAR_13;
  else
   VAR_16 = VAR_4;

  VAR_9.height = VAR_1->vc_font.width * VAR_16;
  VAR_17 = ((VAR_9.width + 7) >> 3) + VAR_14;
  VAR_17 &= ~VAR_14;
  VAR_18 = VAR_17 * VAR_9.height + VAR_15;
  VAR_18 &= ~VAR_15;
  VAR_20 = FUNC_2(VAR_2, &VAR_2->pixmap, VAR_18);
  VAR_9.data = VAR_20;
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_19, VAR_16, VAR_17,
     VAR_11, VAR_12, &VAR_9, VAR_21, VAR_20);
  VAR_9.dy += VAR_9.height;
  VAR_4 -= VAR_16;
  VAR_3 -= VAR_16;
 }




 if (FUNC_7(VAR_21))
  FUNC_4(VAR_21);

}
