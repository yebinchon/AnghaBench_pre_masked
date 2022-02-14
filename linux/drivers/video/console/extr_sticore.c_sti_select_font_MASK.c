
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_cooked_rom {struct sti_cooked_font* font_start; } ;
struct sti_cooked_font {struct sti_cooked_font* next_font; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 struct sti_cooked_font* FUNC_0 (struct sti_cooked_rom*,int ) ;

__attribute__((used)) static struct sti_cooked_font *FUNC_1(struct sti_cooked_rom *VAR_5,
  int (*VAR_6)(struct sti_cooked_rom *, int, int))
{
 struct sti_cooked_font *VAR_7;
 int VAR_8;
 int VAR_9 = VAR_4;


 if ((VAR_7 = FUNC_0(VAR_5, VAR_2[VAR_9])))
  return VAR_7;

 if (VAR_3[VAR_9] && VAR_0[VAR_9])
  VAR_1[VAR_9] = VAR_6(VAR_5,
    VAR_0[VAR_9], VAR_3[VAR_9]);

 for (VAR_7 = VAR_5->font_start, VAR_8 = VAR_1[VAR_9];
     VAR_7 && (VAR_8 > 0);
     VAR_7 = VAR_7->next_font, VAR_8--);

 if (VAR_7)
  return VAR_7;
 else
  return VAR_5->font_start;
}
