
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {unsigned int vc_size_row; unsigned long vc_origin; unsigned long vc_scr_end; int vc_hi_font_mask; } ;
struct uni_screen {int ** lines; } ;
typedef int char32_t ;


 int FUNC_0 (int) ;
 struct uni_screen* FUNC_1 (struct vc_data*) ;
 int FUNC_2 (struct vc_data*,int,int) ;
 int FUNC_3 (void*,int *,unsigned int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct vc_data*,int,int) ;

void FUNC_6(struct vc_data *VAR_0, void *VAR_1, int VAR_2,
    unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 struct uni_screen *VAR_6 = FUNC_1(VAR_0);
 int VAR_7 = VAR_3 * VAR_0->vc_size_row + VAR_4 * 2;
 unsigned long VAR_8;

 FUNC_0(!VAR_6);

 VAR_8 = (unsigned long)FUNC_5(VAR_0, VAR_7, VAR_2);
 if (VAR_8 >= VAR_0->vc_origin && VAR_8 < VAR_0->vc_scr_end) {





  VAR_3 = (VAR_8 - VAR_0->vc_origin) / VAR_0->vc_size_row;
  VAR_4 = ((VAR_8 - VAR_0->vc_origin) % VAR_0->vc_size_row) / 2;
  FUNC_3(VAR_1, &VAR_6->lines[VAR_3][VAR_4], VAR_5 * sizeof(char32_t));
 } else {






  u16 *VAR_9 = (u16 *)VAR_8;
  int VAR_10 = VAR_0->vc_hi_font_mask | 0xff;
  char32_t *VAR_11 = VAR_1;
  while (VAR_5--) {
   u16 VAR_12 = FUNC_4(VAR_9++) & VAR_10;
   *VAR_11++ = FUNC_2(VAR_0, VAR_12, 1);
  }
 }
}
