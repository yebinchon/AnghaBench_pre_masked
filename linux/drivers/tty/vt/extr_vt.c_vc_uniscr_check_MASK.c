
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int vc_cols; int vc_rows; int vc_hi_font_mask; struct uni_screen* vc_uni_screen; scalar_t__ vc_origin; int vc_utf; } ;
struct uni_screen {int ** lines; } ;
typedef int char32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct vc_data*,int,int) ;
 int FUNC_3 (int ) ;
 struct uni_screen* FUNC_4 (int,int) ;

int FUNC_5(struct vc_data *VAR_4)
{
 struct uni_screen *VAR_5;
 unsigned short *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (FUNC_1(VAR_3))
  return -VAR_2;

 FUNC_0();

 if (!VAR_4->vc_utf)
  return -VAR_0;

 if (VAR_4->vc_uni_screen)
  return 0;

 VAR_5 = FUNC_4(VAR_4->vc_cols, VAR_4->vc_rows);
 if (!VAR_5)
  return -VAR_1;







 VAR_6 = (unsigned short *)VAR_4->vc_origin;
 VAR_9 = VAR_4->vc_hi_font_mask | 0xff;
 for (VAR_8 = 0; VAR_8 < VAR_4->vc_rows; VAR_8++) {
  char32_t *VAR_10 = VAR_5->lines[VAR_8];
  for (VAR_7 = 0; VAR_7 < VAR_4->vc_cols; VAR_7++) {
   u16 VAR_11 = FUNC_3(VAR_6++) & VAR_9;
   VAR_10[VAR_7] = FUNC_2(VAR_4, VAR_11, 1);
  }
 }

 VAR_4->vc_uni_screen = VAR_5;
 return 0;
}
