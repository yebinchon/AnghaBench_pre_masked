
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bits_per_pixel; int xres_virtual; int yres_virtual; } ;
struct fb_info {TYPE_1__ var; scalar_t__ screen_base; scalar_t__ par; } ;
struct fb_image {int dx; int width; int dy; int height; int depth; char* data; int fg_color; int bg_color; } ;
struct atafb_par {int next_line; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*,int,int,int,int,char const*,int ,int ) ;
 int FUNC_1 (struct fb_info*,int,int,int,int,char const*,int ,int ) ;
 int FUNC_2 (struct fb_info*,int,int,int,int,char const*,int ,int ) ;
 int FUNC_3 (struct fb_info*,int,int,int,int,char const*,int ,int ) ;
 int FUNC_4 (scalar_t__,char*,int,int,int,int,int,int,int) ;
 int FUNC_5 (struct fb_info*,struct fb_image const*) ;

__attribute__((used)) static void FUNC_6(struct fb_info *VAR_1, const struct fb_image *VAR_2)
{
 struct atafb_par *VAR_3 = (struct atafb_par *)VAR_1->par;
 int VAR_4, VAR_5;
 unsigned long *VAR_6;
 int VAR_7;
 const char *VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 VAR_4 = VAR_2->dx + VAR_2->width;
 VAR_5 = VAR_2->dy + VAR_2->height;
 VAR_9 = VAR_2->dx;
 VAR_10 = VAR_2->dy;
 VAR_4 = VAR_4 < VAR_1->var.xres_virtual ? VAR_4 : VAR_1->var.xres_virtual;
 VAR_5 = VAR_5 < VAR_1->var.yres_virtual ? VAR_5 : VAR_1->var.yres_virtual;
 VAR_11 = VAR_4 - VAR_9;
 VAR_12 = VAR_5 - VAR_10;

 if (VAR_2->depth == 1) {

  VAR_6 = (unsigned long *)
   ((unsigned long)VAR_1->screen_base & ~(VAR_0 - 1));
  VAR_7 = ((unsigned long)VAR_1->screen_base & (VAR_0 - 1)) * 8;
  VAR_7 += VAR_10 * VAR_3->next_line * 8 + VAR_9;
  VAR_8 = VAR_2->data;
  VAR_13 = (VAR_2->width + 7) / 8;
  while (VAR_12--) {

   if (VAR_1->var.bits_per_pixel == 1)
    FUNC_3(VAR_1, VAR_3->next_line,
         VAR_10, VAR_9, VAR_11, VAR_8,
         VAR_2->bg_color, VAR_2->fg_color);
   else if (VAR_1->var.bits_per_pixel == 2)
    FUNC_0(VAR_1, VAR_3->next_line,
       VAR_10, VAR_9, VAR_11, VAR_8,
       VAR_2->bg_color, VAR_2->fg_color);
   else if (VAR_1->var.bits_per_pixel == 4)
    FUNC_1(VAR_1, VAR_3->next_line,
       VAR_10, VAR_9, VAR_11, VAR_8,
       VAR_2->bg_color, VAR_2->fg_color);
   else
    FUNC_2(VAR_1, VAR_3->next_line,
       VAR_10, VAR_9, VAR_11, VAR_8,
       VAR_2->bg_color, VAR_2->fg_color);
   VAR_10++;
   VAR_8 += VAR_13;
  }
 } else {
  FUNC_4(VAR_1->screen_base, VAR_2->data, VAR_9, VAR_10, VAR_11,
      VAR_12, VAR_3->next_line, VAR_2->width,
      VAR_1->var.bits_per_pixel);
 }
}
