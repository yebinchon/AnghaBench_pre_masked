
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct page **VAR_0, int VAR_1,
          int VAR_2, s32 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (!VAR_2 && VAR_3 > 0)
   FUNC_1(VAR_0[VAR_4]);
  FUNC_0(VAR_0[VAR_4]);
 }
}
