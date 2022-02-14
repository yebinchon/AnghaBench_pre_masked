
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucc_fast_private {scalar_t__ uf_regs; scalar_t__ ucc_fast_rx_virtual_fifo_base_offset; scalar_t__ ucc_fast_tx_virtual_fifo_base_offset; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ucc_fast_private*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct ucc_fast_private * VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->ucc_fast_tx_virtual_fifo_base_offset)
  FUNC_2(VAR_0->ucc_fast_tx_virtual_fifo_base_offset);

 if (VAR_0->ucc_fast_rx_virtual_fifo_base_offset)
  FUNC_2(VAR_0->ucc_fast_rx_virtual_fifo_base_offset);

 if (VAR_0->uf_regs)
  FUNC_0(VAR_0->uf_regs);

 FUNC_1(VAR_0);
}
