
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_6__ {int buf2_addr; } ;
struct TYPE_7__ {TYPE_1__ rx_rd_des23; } ;
struct sxgbe_rx_norm_desc {TYPE_2__ rdes23; } ;
struct sxgbe_priv_data {unsigned int dma_rx_size; int dma_buf_sz; size_t cur_rx_qnum; TYPE_5__* hw; TYPE_3__** rxq; int device; int dev; } ;
struct sk_buff {int data; } ;
struct TYPE_10__ {TYPE_4__* desc; } ;
struct TYPE_9__ {int (* set_rx_int_on_com ) (struct sxgbe_rx_norm_desc*) ;int (* set_rx_owner ) (struct sxgbe_rx_norm_desc*) ;} ;
struct TYPE_8__ {scalar_t__ cur_rx; unsigned int dirty_rx; int * rx_skbuff_dma; struct sk_buff** rx_skbuff; struct sxgbe_rx_norm_desc* dma_rx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int ,int) ;
 int FUNC_3 (struct sxgbe_rx_norm_desc*) ;
 int FUNC_4 (struct sxgbe_rx_norm_desc*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct sxgbe_priv_data *VAR_1)
{
 unsigned int VAR_2 = VAR_1->dma_rx_size;
 int VAR_3 = VAR_1->dma_buf_sz;
 u8 VAR_4 = VAR_1->cur_rx_qnum;

 for (; VAR_1->rxq[VAR_4]->cur_rx - VAR_1->rxq[VAR_4]->dirty_rx > 0;
      VAR_1->rxq[VAR_4]->dirty_rx++) {
  unsigned int VAR_5 = VAR_1->rxq[VAR_4]->dirty_rx % VAR_2;
  struct sxgbe_rx_norm_desc *VAR_6;

  VAR_6 = VAR_1->rxq[VAR_4]->dma_rx + VAR_5;

  if (FUNC_1(VAR_1->rxq[VAR_4]->rx_skbuff[VAR_5] == ((void*)0))) {
   struct sk_buff *VAR_7;

   VAR_7 = FUNC_2(VAR_1->dev, VAR_3);

   if (FUNC_5(VAR_7 == ((void*)0)))
    break;

   VAR_1->rxq[VAR_4]->rx_skbuff[VAR_5] = VAR_7;
   VAR_1->rxq[VAR_4]->rx_skbuff_dma[VAR_5] =
    FUNC_0(VAR_1->device, VAR_7->data, VAR_3,
            VAR_0);

   VAR_6->rdes23.rx_rd_des23.buf2_addr =
    VAR_1->rxq[VAR_4]->rx_skbuff_dma[VAR_5];
  }


  FUNC_6();
  VAR_1->hw->desc->set_rx_owner(VAR_6);
  VAR_1->hw->desc->set_rx_int_on_com(VAR_6);

  FUNC_6();
 }
}
