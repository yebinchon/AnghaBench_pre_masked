
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftgmac100_rxdes {int rxdes0; } ;
struct ftgmac100 {size_t rx_pointer; struct ftgmac100_rxdes* rxdes; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct ftgmac100 *VAR_1)
{
 struct ftgmac100_rxdes *VAR_2 = &VAR_1->rxdes[VAR_1->rx_pointer];


 return !!(VAR_2->rxdes0 & FUNC_0(VAR_0));
}
