
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168_eth_private {int tx_curr_desc_q; int tx_ring_size; int tx_used_desc_q; int tx_desc_count; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct pxa168_eth_private *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->tx_curr_desc_q;
 VAR_0->tx_curr_desc_q = (VAR_1 + 1) % VAR_0->tx_ring_size;
 FUNC_0(VAR_0->tx_curr_desc_q == VAR_0->tx_used_desc_q);
 VAR_0->tx_desc_count++;

 return VAR_1;
}
