
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_cooked_rom {struct sti_cooked_font* font_start; } ;
struct sti_cooked_font {TYPE_1__* raw; struct sti_cooked_font* next_font; } ;
struct TYPE_2__ {int width; int height; } ;



__attribute__((used)) static int FUNC_0(struct sti_cooked_rom *VAR_0, int VAR_1, int VAR_2)
{
 struct sti_cooked_font *VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = VAR_0->font_start; VAR_3; VAR_3 = VAR_3->next_font, VAR_4++) {
  if ((VAR_3->raw->width == VAR_2) &&
      (VAR_3->raw->height == VAR_1))
   return VAR_4;
 }
 return 0;
}
