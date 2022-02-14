
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vc_data {scalar_t__ vc_hi_font_mask; } ;
struct fb_tileblit {int sx; int sy; int width; int height; int fg; int bg; int length; scalar_t__* indices; } ;
struct fb_info {TYPE_1__* tileops; int pixmap; } ;
struct TYPE_2__ {int (* fb_tileblit ) (struct fb_info*,struct fb_tileblit*) ;} ;


 scalar_t__ FUNC_0 (struct fb_info*,int *,int) ;
 unsigned short FUNC_1 (int ) ;
 int FUNC_2 (struct fb_info*,struct fb_tileblit*) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_0, struct fb_info *VAR_1,
         const unsigned short *VAR_2, int VAR_3, int VAR_4, int VAR_5,
         int VAR_6, int VAR_7)
{
 struct fb_tileblit VAR_8;
 unsigned short VAR_9 = VAR_0->vc_hi_font_mask ? 0x1ff : 0xff;
 int VAR_10 = sizeof(u32) * VAR_3, VAR_11;

 VAR_8.sx = VAR_5;
 VAR_8.sy = VAR_4;
 VAR_8.width = VAR_3;
 VAR_8.height = 1;
 VAR_8.fg = VAR_6;
 VAR_8.bg = VAR_7;
 VAR_8.length = VAR_3;
 VAR_8.indices = (u32 *) FUNC_0(VAR_1, &VAR_1->pixmap, VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  VAR_8.indices[VAR_11] = (u32)(FUNC_1(VAR_2++) & VAR_9);

 VAR_1->tileops->fb_tileblit(VAR_1, &VAR_8);
}
