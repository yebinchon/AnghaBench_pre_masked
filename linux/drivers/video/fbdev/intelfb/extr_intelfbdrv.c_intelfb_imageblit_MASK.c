
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct intelfb_info {int depth; size_t* pseudo_palette; int pitch; } ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; } ;
struct fb_image {int depth; size_t fg_color; size_t bg_color; int dy; int dx; int data; int height; int width; } ;


 int FUNC_0 (struct intelfb_info*,struct fb_info*) ;
 int FUNC_1 (char*) ;
 struct intelfb_info* FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*,struct fb_image const*) ;
 int FUNC_4 (struct intelfb_info*,size_t,size_t,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_0,
         const struct fb_image *VAR_1)
{
        struct intelfb_info *VAR_2 = FUNC_2(VAR_0);
 u32 VAR_3, VAR_4;





 if (!FUNC_0(VAR_2, VAR_0) || VAR_2->depth == 4
     || VAR_1->depth != 1) {
  FUNC_3(VAR_0, VAR_1);
  return;
 }

 if (VAR_2->depth != 8) {
  VAR_3 = VAR_2->pseudo_palette[VAR_1->fg_color];
  VAR_4 = VAR_2->pseudo_palette[VAR_1->bg_color];
 } else {
  VAR_3 = VAR_1->fg_color;
  VAR_4 = VAR_1->bg_color;
 }

 if (!FUNC_4(VAR_2, VAR_3, VAR_4, VAR_1->width,
        VAR_1->height, VAR_1->data,
        VAR_1->dx, VAR_1->dy,
        VAR_2->pitch, VAR_0->var.bits_per_pixel)) {
  FUNC_3(VAR_0, VAR_1);
  return;
 }
}
