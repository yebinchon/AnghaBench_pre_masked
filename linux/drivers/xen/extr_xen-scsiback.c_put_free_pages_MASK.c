
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct page**) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct page **VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = VAR_1 + VAR_5, VAR_8 = VAR_5;

 if (VAR_5 == 0)
  return;
 if (VAR_7 > VAR_3) {
  VAR_8 = FUNC_2(VAR_5, VAR_7 - VAR_3);
  FUNC_0(VAR_8, VAR_4 + VAR_5 - VAR_8);
  VAR_8 = VAR_5 - VAR_8;
 }
 FUNC_3(&VAR_0, VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  FUNC_1(&VAR_4[VAR_7]->lru, &VAR_2);
 VAR_1 += VAR_8;
 FUNC_4(&VAR_0, VAR_6);
}
