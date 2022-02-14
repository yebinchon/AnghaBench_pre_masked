
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bh_lru {scalar_t__* bhs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bh_lru* FUNC_0 (int *,int) ;

__attribute__((used)) static bool FUNC_1(int VAR_2, void *VAR_3)
{
 struct bh_lru *VAR_4 = FUNC_0(&VAR_1, VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->bhs[VAR_5])
   return 1;
 }

 return 0;
}
