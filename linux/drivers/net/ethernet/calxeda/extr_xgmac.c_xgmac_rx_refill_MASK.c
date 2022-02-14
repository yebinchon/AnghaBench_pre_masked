
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xgmac_priv {int rx_head; int rx_tail; TYPE_1__* dev; scalar_t__ dma_buf_sz; struct sk_buff** rx_skbuff; int device; struct xgmac_dma_desc* dma_rx; } ;
struct xgmac_dma_desc {int dummy; } ;
struct sk_buff {int data; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct xgmac_dma_desc*,int ,scalar_t__) ;
 int FUNC_1 (struct xgmac_dma_desc*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ,int ) ;
 struct sk_buff* FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,char*,int,int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct xgmac_priv *VAR_5)
{
 struct xgmac_dma_desc *VAR_6;
 dma_addr_t VAR_7;
 int VAR_8 = VAR_5->dev->mtu + VAR_3 + VAR_2;

 while (FUNC_6(VAR_5->rx_head, VAR_5->rx_tail, VAR_1) > 1) {
  int VAR_9 = VAR_5->rx_head;
  struct sk_buff *VAR_10;

  VAR_6 = VAR_5->dma_rx + VAR_9;

  if (VAR_5->rx_skbuff[VAR_9] == ((void*)0)) {
   VAR_10 = FUNC_7(VAR_5->dev, VAR_8);
   if (FUNC_9(VAR_10 == ((void*)0)))
    break;

   VAR_7 = FUNC_3(VAR_5->device, VAR_10->data,
            VAR_5->dma_buf_sz - VAR_4,
            VAR_0);
   if (FUNC_4(VAR_5->device, VAR_7)) {
    FUNC_2(VAR_10);
    break;
   }
   VAR_5->rx_skbuff[VAR_9] = VAR_10;
   FUNC_0(VAR_6, VAR_7, VAR_5->dma_buf_sz);
  }

  FUNC_8(VAR_5->dev, "rx ring: head %d, tail %d\n",
   VAR_5->rx_head, VAR_5->rx_tail);

  VAR_5->rx_head = FUNC_5(VAR_5->rx_head, VAR_1);
  FUNC_1(VAR_6);
 }
}
