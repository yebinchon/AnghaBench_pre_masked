
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_rom_font {int next_font; } ;
struct sti_rom {int font_start; } ;
struct sti_cooked_rom {struct sti_cooked_font* font_start; } ;
struct sti_cooked_font {struct sti_cooked_font* next_font; struct sti_rom_font* raw; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct sti_cooked_rom *VAR_1,
     struct sti_rom *VAR_2)
{
 struct sti_rom_font *VAR_3, *VAR_4;
 struct sti_cooked_font *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return 0;

 VAR_1->font_start = VAR_5;

 VAR_3 = ((void *)VAR_2) + (VAR_2->font_start);

 VAR_4 = VAR_3;
 VAR_5->raw = VAR_3;

 while (VAR_3->next_font) {
  VAR_3 = ((void *)VAR_4) + (VAR_3->next_font);

  VAR_5->next_font = FUNC_0(sizeof(*VAR_5), VAR_0);
  if (!VAR_5->next_font)
   return 1;

  VAR_5 = VAR_5->next_font;

  VAR_5->raw = VAR_3;
 }

 VAR_5->next_font = ((void*)0);
 return 1;
}
