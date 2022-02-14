
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct page **VAR_0,
        u64 VAR_1, bool VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2)
   FUNC_1(VAR_0[VAR_3]);

  FUNC_0(VAR_0[VAR_3]);
  VAR_0[VAR_3] = ((void*)0);
 }
}
