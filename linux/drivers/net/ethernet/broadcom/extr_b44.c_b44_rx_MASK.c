
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int protocol; scalar_t__ data; } ;
struct rx_header {int flags; int len; } ;
struct ring_info {int mapping; struct sk_buff* skb; } ;
struct dma_desc {int dummy; } ;
struct b44 {int rx_cons; int rx_prod; TYPE_3__* dev; int napi; TYPE_2__* sdev; int force_copybreak; struct ring_info* rx_buffers; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int rx_dropped; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;
struct TYPE_5__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct b44*,int,int) ;
 int FUNC_1 (struct b44*,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct b44*,int ) ;
 int FUNC_4 (struct b44*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,scalar_t__,int ) ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (struct sk_buff*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (int ) ;
 struct sk_buff* FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 int FUNC_15 (struct sk_buff*,scalar_t__) ;
 int FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct b44 *VAR_9, int VAR_10)
{
 int VAR_11;
 u32 VAR_12, VAR_13;

 VAR_11 = 0;
 VAR_13 = FUNC_3(VAR_9, VAR_1) & VAR_3;
 VAR_13 /= sizeof(struct dma_desc);
 VAR_12 = VAR_9->rx_cons;

 while (VAR_12 != VAR_13 && VAR_10 > 0) {
  struct ring_info *VAR_14 = &VAR_9->rx_buffers[VAR_12];
  struct sk_buff *VAR_15 = VAR_14->skb;
  dma_addr_t VAR_16 = VAR_14->mapping;
  struct rx_header *VAR_17;
  u16 VAR_18;

  FUNC_6(VAR_9->sdev->dma_dev, VAR_16,
     VAR_7,
     VAR_4);
  VAR_17 = (struct rx_header *) VAR_15->data;
  VAR_18 = FUNC_9(VAR_17->len);
  if ((VAR_18 > (VAR_7 - VAR_8)) ||
      (VAR_17->flags & FUNC_5(VAR_6))) {
  drop_it:
   FUNC_1(VAR_9, VAR_12, VAR_9->rx_prod);
  drop_it_no_recycle:
   VAR_9->dev->stats.rx_dropped++;
   goto next_pkt;
  }

  if (VAR_18 == 0) {
   int VAR_19 = 0;

   do {
    FUNC_16(2);
    FUNC_2();
    VAR_18 = FUNC_9(VAR_17->len);
   } while (VAR_18 == 0 && VAR_19++ < 5);
   if (VAR_18 == 0)
    goto drop_it;
  }


  VAR_18 -= 4;

  if (!VAR_9->force_copybreak && VAR_18 > VAR_5) {
   int VAR_20;
   VAR_20 = FUNC_0(VAR_9, VAR_12, VAR_9->rx_prod);
   if (VAR_20 < 0)
    goto drop_it;
   FUNC_7(VAR_9->sdev->dma_dev, VAR_16,
      VAR_20, VAR_4);

   FUNC_15(VAR_15, VAR_18 + VAR_8);
   FUNC_14(VAR_15, VAR_8);
  } else {
   struct sk_buff *VAR_21;

   FUNC_1(VAR_9, VAR_12, VAR_9->rx_prod);
   VAR_21 = FUNC_10(&VAR_9->napi, VAR_18);
   if (VAR_21 == ((void*)0))
    goto drop_it_no_recycle;

   FUNC_15(VAR_21, VAR_18);

   FUNC_13(VAR_15, VAR_8,
        VAR_21->data, VAR_18);
   VAR_15 = VAR_21;
  }
  FUNC_12(VAR_15);
  VAR_15->protocol = FUNC_8(VAR_15, VAR_9->dev);
  FUNC_11(VAR_15);
  VAR_11++;
  VAR_10--;
 next_pkt:
  VAR_9->rx_prod = (VAR_9->rx_prod + 1) &
   (VAR_2 - 1);
  VAR_12 = (VAR_12 + 1) & (VAR_2 - 1);
 }

 VAR_9->rx_cons = VAR_12;
 FUNC_4(VAR_9, VAR_0, VAR_12 * sizeof(struct dma_desc));

 return VAR_11;
}
