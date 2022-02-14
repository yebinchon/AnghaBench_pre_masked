
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int protocol; int ip_summed; struct net_device* dev; } ;
struct TYPE_3__ {int rx_dropped; } ;
struct net_device {int features; TYPE_1__ stats; } ;
struct napi_struct {int dummy; } ;
struct mtk_rx_ring {int calc_idx; int buf_size; int ** data; int frag_size; struct mtk_rx_dma* dma; int dma_size; } ;
struct mtk_rx_dma {int rxd2; int rxd4; unsigned int rxd1; int rxd3; } ;
struct mtk_eth {int ip_align; int rx_dma_l4_valid; TYPE_2__* soc; int dev; int state; struct net_device** netdev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_2 (int) ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 struct sk_buff* FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ,int *,int ,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,unsigned int,int ,int ) ;
 int FUNC_10 (struct sk_buff*,struct net_device*) ;
 int FUNC_11 (int ) ;
 struct mtk_rx_ring* FUNC_12 (struct mtk_eth*) ;
 int FUNC_13 (struct mtk_rx_dma*,struct mtk_rx_dma*) ;
 int FUNC_14 (struct mtk_eth*) ;
 int * FUNC_15 (int ) ;
 int FUNC_16 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct sk_buff*,unsigned int) ;
 int FUNC_20 (struct sk_buff*,int ) ;
 int FUNC_21 (struct sk_buff*,int) ;
 int FUNC_22 (int ,int *) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 () ;

__attribute__((used)) static int FUNC_25(struct napi_struct *VAR_13, int VAR_14,
         struct mtk_eth *VAR_15)
{
 struct mtk_rx_ring *VAR_16;
 int VAR_17;
 struct sk_buff *VAR_18;
 u8 *VAR_19, *VAR_20;
 struct mtk_rx_dma *VAR_21, VAR_22;
 int VAR_23 = 0;

 while (VAR_23 < VAR_14) {
  struct net_device *VAR_24;
  unsigned int VAR_25;
  dma_addr_t VAR_26;
  int VAR_27;

  VAR_16 = FUNC_12(VAR_15);
  if (FUNC_23(!VAR_16))
   goto rx_done;

  VAR_17 = FUNC_1(VAR_16->calc_idx, VAR_16->dma_size);
  VAR_21 = &VAR_16->dma[VAR_17];
  VAR_19 = VAR_16->data[VAR_17];

  FUNC_13(&VAR_22, VAR_21);
  if (!(VAR_22.rxd2 & VAR_9))
   break;


  if (FUNC_0(VAR_15->soc->caps, VAR_5)) {
   VAR_27 = 0;
  } else {
   VAR_27 = (VAR_22.rxd4 >> VAR_11) &
    VAR_10;
   VAR_27--;
  }

  if (FUNC_23(VAR_27 < 0 || VAR_27 >= VAR_3 ||
        !VAR_15->netdev[VAR_27]))
   goto release_desc;

  VAR_24 = VAR_15->netdev[VAR_27];

  if (FUNC_23(FUNC_22(VAR_4, &VAR_15->state)))
   goto release_desc;


  VAR_20 = FUNC_15(VAR_16->frag_size);
  if (FUNC_23(!VAR_20)) {
   VAR_24->stats.rx_dropped++;
   goto release_desc;
  }
  VAR_26 = FUNC_7(VAR_15->dev,
       VAR_20 + VAR_8 +
       VAR_15->ip_align,
       VAR_16->buf_size,
       VAR_1);
  if (FUNC_23(FUNC_8(VAR_15->dev, VAR_26))) {
   FUNC_18(VAR_20);
   VAR_24->stats.rx_dropped++;
   goto release_desc;
  }


  VAR_18 = FUNC_6(VAR_19, VAR_16->frag_size);
  if (FUNC_23(!VAR_18)) {
   FUNC_18(VAR_20);
   VAR_24->stats.rx_dropped++;
   goto release_desc;
  }
  FUNC_21(VAR_18, VAR_8 + VAR_7);

  FUNC_9(VAR_15->dev, VAR_22.rxd1,
     VAR_16->buf_size, VAR_1);
  VAR_25 = FUNC_2(VAR_22.rxd2);
  VAR_18->dev = VAR_24;
  FUNC_19(VAR_18, VAR_25);
  if (VAR_22.rxd4 & VAR_15->rx_dma_l4_valid)
   VAR_18->ip_summed = VAR_0;
  else
   FUNC_17(VAR_18);
  VAR_18->protocol = FUNC_10(VAR_18, VAR_24);

  if (VAR_24->features & VAR_6 &&
      FUNC_4(VAR_22.rxd3))
   FUNC_5(VAR_18, FUNC_11(VAR_2),
            FUNC_4(VAR_22.rxd3));
  FUNC_20(VAR_18, 0);
  FUNC_16(VAR_13, VAR_18);

  VAR_16->data[VAR_17] = VAR_20;
  VAR_21->rxd1 = (unsigned int)VAR_26;

release_desc:
  if (FUNC_0(VAR_15->soc->caps, VAR_5))
   VAR_21->rxd2 = VAR_12;
  else
   VAR_21->rxd2 = FUNC_3(VAR_16->buf_size);

  VAR_16->calc_idx = VAR_17;

  VAR_23++;
 }

rx_done:
 if (VAR_23) {



  FUNC_24();
  FUNC_14(VAR_15);
 }

 return VAR_23;
}
