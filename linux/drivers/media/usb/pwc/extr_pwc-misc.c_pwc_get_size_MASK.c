
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int image_mask; } ;


 int VAR_0 ;
 int** VAR_1 ;

int FUNC_0(struct pwc_device *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;



 for (VAR_5 = VAR_0 - 1; VAR_5 >= 0; VAR_5--) {
  if (!(VAR_2->image_mask & (1 << VAR_5)))
   continue;

  if (VAR_1[VAR_5][0] <= VAR_3 &&
      VAR_1[VAR_5][1] <= VAR_4)
   return VAR_5;
 }


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2->image_mask & (1 << VAR_5))
   return VAR_5;
 }


 return 0;
}
