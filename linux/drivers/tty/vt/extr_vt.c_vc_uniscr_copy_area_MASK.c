
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_screen {int ** lines; } ;
typedef int char32_t ;


 int FUNC_0 (int *,int *,unsigned int) ;
 int FUNC_1 (int *,char,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct uni_screen *VAR_0,
    unsigned int VAR_1,
    unsigned int VAR_2,
    struct uni_screen *VAR_3,
    unsigned int VAR_4,
    unsigned int VAR_5,
    unsigned int VAR_6)
{
 unsigned int VAR_7 = 0;

 if (!VAR_0)
  return;

 while (VAR_5 < VAR_6) {
  char32_t *VAR_8 = VAR_3->lines[VAR_5];
  char32_t *VAR_9 = VAR_0->lines[VAR_7];

  FUNC_0(VAR_9, VAR_8, VAR_4 * sizeof(char32_t));
  if (VAR_1 - VAR_4)
   FUNC_1(VAR_9 + VAR_4, ' ', VAR_1 - VAR_4);
  VAR_5++;
  VAR_7++;
 }
 while (VAR_7 < VAR_2) {
  char32_t *VAR_10 = VAR_0->lines[VAR_7];

  FUNC_1(VAR_10, ' ', VAR_1);
  VAR_7++;
 }
}
