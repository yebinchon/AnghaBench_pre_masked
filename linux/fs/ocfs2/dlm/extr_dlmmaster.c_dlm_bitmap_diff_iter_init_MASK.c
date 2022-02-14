
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_bitmap_diff_iter {int curnode; unsigned long* orig_bm; unsigned long* cur_bm; unsigned long* diff_bm; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct dlm_bitmap_diff_iter *VAR_1,
          unsigned long *VAR_2,
          unsigned long *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 int VAR_6;

 VAR_1->curnode = -1;
 VAR_1->orig_bm = VAR_2;
 VAR_1->cur_bm = VAR_3;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
         VAR_4 = *(VAR_1->orig_bm + VAR_6);
         VAR_5 = *(VAR_1->cur_bm + VAR_6);
  VAR_1->diff_bm[VAR_6] = (VAR_4 & ~VAR_5) | (VAR_5 & ~VAR_4);
 }
}
