
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linear_range {unsigned int min; unsigned int step; unsigned int vals; unsigned int low_sel; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct linear_range *VAR_1,
           int VAR_2, unsigned int VAR_3,
           unsigned int *VAR_4, bool *VAR_5)
{
 int VAR_6;
 int VAR_7 = -VAR_0;

 *VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_1[VAR_6].min <= VAR_3) {
   if (VAR_1[VAR_6].min + VAR_1[VAR_6].step * VAR_1[VAR_6].vals >= VAR_3) {
    *VAR_5 = 1;
    *VAR_4 = VAR_1[VAR_6].low_sel + (VAR_3 - VAR_1[VAR_6].min) /
           VAR_1[VAR_6].step;
    VAR_7 = 0;
    break;
   }




   *VAR_4 = VAR_1[VAR_6].low_sel + VAR_1[VAR_6].vals;
   VAR_7 = 0;
  }
 }
 return VAR_7;
}
