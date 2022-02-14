
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring {size_t tail; scalar_t__ size; scalar_t__* skb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct tx_ring *VAR_2)
{
 if (VAR_2->skb[VAR_2->tail])
  return 0;

 return (VAR_2->size + VAR_0 < VAR_1) ? 1 : 0;
}
