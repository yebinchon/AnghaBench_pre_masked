
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;
struct uni_screen {int ** lines; } ;
typedef enum con_scroll { ____Placeholder_con_scroll } con_scroll ;
typedef int char32_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 struct uni_screen* FUNC_1 (struct vc_data*) ;
 int FUNC_2 (struct vc_data*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_1, unsigned int VAR_2, unsigned int VAR_3,
        enum con_scroll VAR_4, unsigned int VAR_5)
{
 struct uni_screen *VAR_6 = FUNC_1(VAR_1);

 if (VAR_6) {
  unsigned int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

  VAR_10 = VAR_3 - VAR_2;
  VAR_12 = VAR_3 - VAR_5;
  VAR_11 = VAR_5;
  if (VAR_4 == VAR_0) {
   VAR_12 = VAR_2;
   VAR_11 = VAR_10 - VAR_5;
  }
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_11, VAR_10); VAR_7++) {
   char32_t *VAR_13 = VAR_6->lines[VAR_2 + VAR_7];
   VAR_8 = VAR_7;
   while (1) {
    VAR_9 = VAR_8 + VAR_11;
    if (VAR_9 >= VAR_10)
     VAR_9 -= VAR_10;
    if (VAR_9 == VAR_7)
     break;
    VAR_6->lines[VAR_2 + VAR_8] = VAR_6->lines[VAR_2 + VAR_9];
    VAR_8 = VAR_9;
   }
   VAR_6->lines[VAR_2 + VAR_8] = VAR_13;
  }
  FUNC_2(VAR_1, VAR_12, VAR_5);
 }
}
