
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned long vc_visible_origin; unsigned long vc_origin; int vc_size_row; scalar_t__ vc_scr_end; } ;
typedef int ptrdiff_t ;



void FUNC_0(struct vc_data *VAR_0, int VAR_1,
  unsigned int VAR_2, void *VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5 = (unsigned long)VAR_3;
 ptrdiff_t VAR_6 = (void *)VAR_0->vc_scr_end - VAR_3;
 ptrdiff_t VAR_7 = (void *)VAR_0->vc_visible_origin - VAR_3;
 ptrdiff_t VAR_8 = (void *)VAR_0->vc_origin - VAR_3;
 int VAR_9 = VAR_0->vc_size_row * 4;
 int VAR_10, VAR_11, VAR_12, VAR_13;


 if (!VAR_1) {
  VAR_0->vc_visible_origin = VAR_0->vc_origin;
  return;
 }


 if (VAR_2 > VAR_6 + VAR_9) {
  VAR_10 = VAR_6;
  VAR_11 = VAR_2 + VAR_0->vc_size_row;
 } else {
  VAR_10 = 0;
  VAR_11 = VAR_4;
 }

 VAR_12 = (VAR_7 - VAR_10 + VAR_11) % VAR_11 + VAR_1 * VAR_0->vc_size_row;
 VAR_13 = (VAR_8 - VAR_10 + VAR_11) % VAR_11;


 if (VAR_13 < 2 * VAR_9)
  VAR_9 = 0;
 if (VAR_12 < VAR_9)
  VAR_12 = 0;
 if (VAR_12 > VAR_13 - VAR_9)
  VAR_12 = VAR_13;

 VAR_0->vc_visible_origin = VAR_5 + (VAR_10 + VAR_12) % VAR_11;
}
