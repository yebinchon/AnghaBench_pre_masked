
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct netsec_priv {int dummy; } ;
struct netsec_desc_ring {TYPE_1__* desc; struct netsec_de* vaddr; } ;
struct netsec_desc {int len; int addr; int dma_addr; } ;
struct netsec_de {int attr; int buf_len_info; int data_buf_addr_lw; int data_buf_addr_up; } ;
struct TYPE_2__ {int len; int addr; int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct netsec_priv *VAR_6,
        struct netsec_desc_ring *VAR_7, u16 VAR_8,
        const struct netsec_desc *VAR_9)
{
 struct netsec_de *VAR_10 = VAR_7->vaddr + VAR_1 * VAR_8;
 u32 VAR_11 = (1 << VAR_5) |
     (1 << VAR_2) |
     (1 << VAR_4);

 if (VAR_8 == VAR_0 - 1)
  VAR_11 |= (1 << VAR_3);

 VAR_10->data_buf_addr_up = FUNC_2(VAR_9->dma_addr);
 VAR_10->data_buf_addr_lw = FUNC_1(VAR_9->dma_addr);
 VAR_10->buf_len_info = VAR_9->len;
 VAR_10->attr = VAR_11;
 FUNC_0();

 VAR_7->desc[VAR_8].dma_addr = VAR_9->dma_addr;
 VAR_7->desc[VAR_8].addr = VAR_9->addr;
 VAR_7->desc[VAR_8].len = VAR_9->len;
}
