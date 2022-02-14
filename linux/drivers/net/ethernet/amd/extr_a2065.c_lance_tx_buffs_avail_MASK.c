
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_private {scalar_t__ tx_old; scalar_t__ tx_new; int tx_ring_mod_mask; } ;



__attribute__((used)) static int FUNC_0(struct lance_private *VAR_0)
{
 if (VAR_0->tx_old <= VAR_0->tx_new)
  return VAR_0->tx_old + VAR_0->tx_ring_mod_mask - VAR_0->tx_new;
 return VAR_0->tx_old - VAR_0->tx_new - 1;
}
