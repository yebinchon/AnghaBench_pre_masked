
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
struct bh_lru {int * bhs; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*,int ) ;
 struct bh_lru* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct buffer_head *VAR_2)
{
 struct buffer_head *VAR_3 = VAR_2;
 struct bh_lru *VAR_4;
 int VAR_5;

 FUNC_3();
 FUNC_0();

 VAR_4 = FUNC_6(&VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_5(VAR_3, VAR_4->bhs[VAR_5]);
  if (VAR_3 == VAR_2) {
   FUNC_1();
   return;
  }
 }

 FUNC_4(VAR_2);
 FUNC_1();
 FUNC_2(VAR_3);
}
