
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lpt_heap {int cnt; struct ubifs_lprops** arr; } ;
struct ubifs_lprops {int hpos; } ;
struct ubifs_info {int dummy; } ;


 int FUNC_0 (struct ubifs_lprops*,int) ;

__attribute__((used)) static void FUNC_1(struct ubifs_info *VAR_0, struct ubifs_lpt_heap *VAR_1,
       struct ubifs_lprops *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_2, VAR_4);

 if (VAR_3) {
  int VAR_9 = (VAR_3 - 1) / 2;

  VAR_6 = FUNC_0(VAR_1->arr[VAR_9], VAR_4);
  if (VAR_5 > VAR_6) {

   while (1) {
    VAR_1->arr[VAR_9]->hpos = VAR_3;
    VAR_1->arr[VAR_3] = VAR_1->arr[VAR_9];
    VAR_1->arr[VAR_9] = VAR_2;
    VAR_2->hpos = VAR_9;
    VAR_3 = VAR_9;
    if (!VAR_3)
     return;
    VAR_9 = (VAR_3 - 1) / 2;
    VAR_6 = FUNC_0(VAR_1->arr[VAR_9], VAR_4);
    if (VAR_5 <= VAR_6)
     return;

   }
  }
 }


 while (1) {

  VAR_8 = VAR_3 * 2 + 1;
  if (VAR_8 >= VAR_1->cnt)
   return;
  VAR_6 = FUNC_0(VAR_1->arr[VAR_8], VAR_4);
  if (VAR_5 < VAR_6) {

   if (VAR_8 + 1 < VAR_1->cnt) {
    VAR_7 = FUNC_0(VAR_1->arr[VAR_8 + 1],
        VAR_4);
    if (VAR_7 > VAR_6)
     VAR_8 += 1;
   }
   VAR_1->arr[VAR_8]->hpos = VAR_3;
   VAR_1->arr[VAR_3] = VAR_1->arr[VAR_8];
   VAR_1->arr[VAR_8] = VAR_2;
   VAR_2->hpos = VAR_8;
   VAR_3 = VAR_8;
   continue;
  }

  VAR_8 += 1;
  if (VAR_8 >= VAR_1->cnt)
   return;
  VAR_7 = FUNC_0(VAR_1->arr[VAR_8], VAR_4);
  if (VAR_5 < VAR_7) {

   VAR_1->arr[VAR_8]->hpos = VAR_3;
   VAR_1->arr[VAR_3] = VAR_1->arr[VAR_8];
   VAR_1->arr[VAR_8] = VAR_2;
   VAR_2->hpos = VAR_8;
   VAR_3 = VAR_8;
   continue;
  }
  return;
 }
}
