
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftmac100_rxdes {int rxdes1; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ftmac100_rxdes *VAR_1,
        unsigned int VAR_2)
{
 VAR_1->rxdes1 &= FUNC_1(VAR_0);
 VAR_1->rxdes1 |= FUNC_1(FUNC_0(VAR_2));
}
