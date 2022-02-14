
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_desc {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct hclge_desc *VAR_2, int VAR_3, bool VAR_4)
{


 unsigned int VAR_5;
 unsigned int VAR_6;

 if (VAR_3 > 255 || VAR_3 < 0)
  return -VAR_0;

 if (VAR_3 >= 0 && VAR_3 < 192) {
  VAR_5 = VAR_3 / 32;
  VAR_6 = VAR_3 % 32;
  if (VAR_4)
   VAR_2[1].data[VAR_5] &= FUNC_0(~(1 << VAR_6));
  else
   VAR_2[1].data[VAR_5] |= FUNC_0(1 << VAR_6);
 } else {
  VAR_5 = (VAR_3 - 192) / 32;
  VAR_6 = VAR_3 % 32;
  if (VAR_4)
   VAR_2[2].data[VAR_5] &= FUNC_0(~(1 << VAR_6));
  else
   VAR_2[2].data[VAR_5] |= FUNC_0(1 << VAR_6);
 }

 return 0;
}
