
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucc_hdlc_private {scalar_t__ dma_tx_addr; int * tx_buffer; int dev; scalar_t__ dma_rx_addr; int * rx_buffer; int * uccf; int * uf_regs; int * tx_skbuff; int * rx_skbuff; scalar_t__ ucc_pram_offset; TYPE_1__* ucc_pram; scalar_t__ dma_tx_bd; int * tx_bd_base; scalar_t__ dma_rx_bd; int * rx_bd_base; } ;
struct qe_bd {int dummy; } ;
struct TYPE_2__ {scalar_t__ tiptr; scalar_t__ riptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ucc_hdlc_private *VAR_3)
{
 FUNC_3(VAR_3->ucc_pram->riptr);
 FUNC_3(VAR_3->ucc_pram->tiptr);

 if (VAR_3->rx_bd_base) {
  FUNC_0(VAR_3->dev,
      VAR_1 * sizeof(struct qe_bd),
      VAR_3->rx_bd_base, VAR_3->dma_rx_bd);

  VAR_3->rx_bd_base = ((void*)0);
  VAR_3->dma_rx_bd = 0;
 }

 if (VAR_3->tx_bd_base) {
  FUNC_0(VAR_3->dev,
      VAR_2 * sizeof(struct qe_bd),
      VAR_3->tx_bd_base, VAR_3->dma_tx_bd);

  VAR_3->tx_bd_base = ((void*)0);
  VAR_3->dma_tx_bd = 0;
 }

 if (VAR_3->ucc_pram) {
  FUNC_3(VAR_3->ucc_pram_offset);
  VAR_3->ucc_pram = ((void*)0);
  VAR_3->ucc_pram_offset = 0;
  }

 FUNC_2(VAR_3->rx_skbuff);
 VAR_3->rx_skbuff = ((void*)0);

 FUNC_2(VAR_3->tx_skbuff);
 VAR_3->tx_skbuff = ((void*)0);

 if (VAR_3->uf_regs) {
  FUNC_1(VAR_3->uf_regs);
  VAR_3->uf_regs = ((void*)0);
 }

 if (VAR_3->uccf) {
  FUNC_4(VAR_3->uccf);
  VAR_3->uccf = ((void*)0);
 }

 if (VAR_3->rx_buffer) {
  FUNC_0(VAR_3->dev,
      VAR_1 * VAR_0,
      VAR_3->rx_buffer, VAR_3->dma_rx_addr);
  VAR_3->rx_buffer = ((void*)0);
  VAR_3->dma_rx_addr = 0;
 }

 if (VAR_3->tx_buffer) {
  FUNC_0(VAR_3->dev,
      VAR_2 * VAR_0,
      VAR_3->tx_buffer, VAR_3->dma_tx_addr);
  VAR_3->tx_buffer = ((void*)0);
  VAR_3->dma_tx_addr = 0;
 }
}
