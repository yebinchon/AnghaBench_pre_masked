
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_res_tracker {int end; int* list; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ice_res_tracker *VAR_2, u16 VAR_3, u16 VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;

 if (VAR_3 > VAR_2->end)
  return -VAR_0;

 VAR_4 |= VAR_1;

 do {

  if (VAR_2->list[VAR_6++] & VAR_1) {
   VAR_5 = VAR_6;
   if ((VAR_5 + VAR_3) > VAR_2->end)
    break;
  }

  if (VAR_6 == (VAR_5 + VAR_3)) {
   int VAR_7 = VAR_5;


   while (VAR_7 != VAR_6)
    VAR_2->list[VAR_7++] = VAR_4;

   return VAR_5;
  }
 } while (VAR_6 < VAR_2->end);

 return -VAR_0;
}
