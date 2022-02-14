
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_eth {int * netdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mtk_eth *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1->netdev[VAR_2])
   continue;
  if (FUNC_0(VAR_1->netdev[VAR_2]))
   return 1;
 }

 return 0;
}
