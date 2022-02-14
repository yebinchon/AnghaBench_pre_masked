
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int width; } ;
struct vc_data {TYPE_1__ vc_font; scalar_t__ vc_hi_font_mask; } ;
struct fbcon_ops {int * fontbuffer; } ;
struct fb_info {TYPE_2__* fbops; struct fbcon_ops* fbcon_par; } ;
struct fb_image {int height; } ;
struct TYPE_4__ {int (* fb_imageblit ) (struct fb_info*,struct fb_image*) ;} ;


 int FUNC_0 (int *,int,int *,int,int ) ;
 int FUNC_1 (int *,int,int *,int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fb_info*,struct fb_image*) ;
 int FUNC_5 (int *,int *,int,struct vc_data*) ;

__attribute__((used)) static inline void FUNC_6(struct vc_data *VAR_0, struct fb_info *VAR_1,
        const u16 *VAR_2, u32 VAR_3, u32 VAR_4,
        u32 VAR_5, u32 VAR_6, u32 VAR_7,
        struct fb_image *VAR_8, u8 *VAR_9, u8 *VAR_10)
{
 struct fbcon_ops *VAR_11 = VAR_1->fbcon_par;
 u16 VAR_12 = VAR_0->vc_hi_font_mask ? 0x1ff : 0xff;
 u32 VAR_13 = VAR_0->vc_font.width >> 3;
 u8 *VAR_14;

 while (VAR_4--) {
  VAR_14 = VAR_11->fontbuffer + (FUNC_3(VAR_2--) & VAR_12)*VAR_7;

  if (VAR_3) {
   FUNC_5(VAR_9, VAR_14, VAR_3, VAR_0);
   VAR_14 = VAR_9;
  }

  if (FUNC_2(VAR_13 == 1))
   FUNC_0(VAR_10, VAR_5, VAR_14, VAR_13,
      VAR_8->height);
  else
   FUNC_1(VAR_10, VAR_5, VAR_14, VAR_13,
           VAR_8->height);

  VAR_10 += VAR_6;
 }

 VAR_1->fbops->fb_imageblit(VAR_1, VAR_8);
}
