
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ftmac100_rxdes {int dummy; } ;
struct ftmac100 {size_t rx_pointer; TYPE_1__* descs; } ;
struct TYPE_2__ {struct ftmac100_rxdes* rxdes; } ;



__attribute__((used)) static struct ftmac100_rxdes *FUNC_0(struct ftmac100 *VAR_0)
{
 return &VAR_0->descs->rxdes[VAR_0->rx_pointer];
}
