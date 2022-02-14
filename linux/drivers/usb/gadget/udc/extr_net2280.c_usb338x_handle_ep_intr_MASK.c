
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct net2280 {int * ep; } ;


 size_t FUNC_0 (int *) ;
 size_t FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net2280 *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_4 = FUNC_1(VAR_0[VAR_3]);

  if (!VAR_2)
   break;

  if (!(VAR_2 & VAR_4))
   continue;

  VAR_2 &= ~VAR_4;

  FUNC_2(&VAR_1->ep[VAR_3]);
 }
}
