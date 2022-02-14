
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {scalar_t__ data; } ;
struct alx_rx_queue {size_t write_idx; size_t read_idx; struct alx_buffer* bufs; struct alx_rfd* rfd; } ;
struct alx_rfd {int addr; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct alx_priv {size_t rx_ringsz; TYPE_3__ hw; int rxbuf_size; int dev; TYPE_1__** qnapi; } ;
struct alx_buffer {struct sk_buff* skb; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct alx_rx_queue* rxq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (struct alx_buffer*,int,int) ;
 int FUNC_8 (struct alx_buffer*,int ,int ) ;
 int VAR_2 ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct alx_priv *VAR_3, gfp_t VAR_4)
{
 struct alx_rx_queue *VAR_5 = VAR_3->qnapi[0]->rxq;
 struct sk_buff *VAR_6;
 struct alx_buffer *VAR_7;
 dma_addr_t VAR_8;
 u16 VAR_9, VAR_10, VAR_11 = 0;

 VAR_10 = VAR_9 = VAR_5->write_idx;
 if (++VAR_10 == VAR_3->rx_ringsz)
  VAR_10 = 0;
 VAR_7 = &VAR_5->bufs[VAR_9];

 while (!VAR_7->skb && VAR_10 != VAR_5->read_idx) {
  struct alx_rfd *VAR_12 = &VAR_5->rfd[VAR_9];
  VAR_6 = FUNC_1(VAR_3->dev, VAR_3->rxbuf_size + 64, VAR_4);
  if (!VAR_6)
   break;

  if (((unsigned long)VAR_6->data & 0xfff) == 0xfc0)
   FUNC_9(VAR_6, 64);

  VAR_8 = FUNC_5(&VAR_3->hw.pdev->dev,
         VAR_6->data, VAR_3->rxbuf_size,
         VAR_1);
  if (FUNC_6(&VAR_3->hw.pdev->dev, VAR_8)) {
   FUNC_4(VAR_6);
   break;
  }




  if (FUNC_0(VAR_8 & 3)) {
   FUNC_4(VAR_6);
   break;
  }

  VAR_7->skb = VAR_6;
  FUNC_8(VAR_7, VAR_2, VAR_3->rxbuf_size);
  FUNC_7(VAR_7, VAR_8, VAR_8);
  VAR_12->addr = FUNC_3(VAR_8);

  VAR_9 = VAR_10;
  if (++VAR_10 == VAR_3->rx_ringsz)
   VAR_10 = 0;
  VAR_7 = &VAR_5->bufs[VAR_9];
  VAR_11++;
 }

 if (VAR_11) {

  FUNC_10();
  VAR_5->write_idx = VAR_9;
  FUNC_2(&VAR_3->hw, VAR_0, VAR_9);
 }

 return VAR_11;
}
