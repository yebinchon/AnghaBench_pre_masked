
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linear_range {unsigned int low_sel; unsigned int vals; unsigned int min; unsigned int step; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct linear_range *VAR_1,
           int VAR_2, unsigned int VAR_3,
           unsigned int *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_1[VAR_5].low_sel <= VAR_3 && VAR_1[VAR_5].low_sel + VAR_1[VAR_5].vals >= VAR_3) {
   *VAR_4 = VAR_1[VAR_5].min + (VAR_3 - VAR_1[VAR_5].low_sel) * VAR_1[VAR_5].step;
   return 0;
  }
 }
 return -VAR_0;
}
