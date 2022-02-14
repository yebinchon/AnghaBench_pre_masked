
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl1e_tx_ring {struct atl1e_tpd_desc* desc; struct atl1e_tx_buffer* tx_buffer; } ;
struct atl1e_tx_buffer {int dummy; } ;
struct atl1e_tpd_desc {int dummy; } ;
struct atl1e_adapter {struct atl1e_tx_ring tx_ring; } ;



__attribute__((used)) static struct atl1e_tx_buffer *
FUNC_0(struct atl1e_adapter *VAR_0, struct atl1e_tpd_desc *VAR_1)
{
 struct atl1e_tx_ring *VAR_2 = &VAR_0->tx_ring;

 return &VAR_2->tx_buffer[VAR_1 - VAR_2->desc];
}
