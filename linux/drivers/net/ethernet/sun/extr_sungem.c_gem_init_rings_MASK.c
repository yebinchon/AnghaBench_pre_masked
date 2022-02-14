
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct net_device {scalar_t__ mtu; } ;
struct gem_txd {scalar_t__ buffer; scalar_t__ control_word; } ;
struct gem_rxd {void* status_word; void* buffer; } ;
struct gem_init_block {struct gem_txd* txd; struct gem_rxd* rxd; } ;
struct gem {int pdev; scalar_t__ rx_buf_sz; struct sk_buff** rx_skbs; scalar_t__ tx_old; scalar_t__ tx_new; scalar_t__ rx_old; scalar_t__ rx_new; struct net_device* dev; struct gem_init_block* init_block; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gem*) ;
 int FUNC_1 (struct gem*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 () ;
 struct sk_buff* FUNC_4 (struct net_device*,int ,int ) ;
 int FUNC_5 (struct gem*) ;
 scalar_t__ FUNC_6 (scalar_t__,unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(struct gem *VAR_8)
{
 struct gem_init_block *VAR_9 = VAR_8->init_block;
 struct net_device *VAR_10 = VAR_8->dev;
 int VAR_11;
 dma_addr_t VAR_12;

 VAR_8->rx_new = VAR_8->rx_old = VAR_8->tx_new = VAR_8->tx_old = 0;

 FUNC_5(VAR_8);

 VAR_8->rx_buf_sz = FUNC_6(VAR_10->mtu + VAR_0 + VAR_7,
       (unsigned)VAR_6);

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  struct sk_buff *VAR_13;
  struct gem_rxd *VAR_14 = &VAR_9->rxd[VAR_11];

  VAR_13 = FUNC_4(VAR_10, FUNC_1(VAR_8), VAR_1);
  if (!VAR_13) {
   VAR_14->buffer = 0;
   VAR_14->status_word = 0;
   continue;
  }

  VAR_8->rx_skbs[VAR_11] = VAR_13;
  FUNC_9(VAR_13, (VAR_8->rx_buf_sz + VAR_3));
  VAR_12 = FUNC_8(VAR_8->pdev,
     FUNC_11(VAR_13->data),
     FUNC_7(VAR_13->data),
     FUNC_1(VAR_8),
     VAR_2);
  VAR_14->buffer = FUNC_2(VAR_12);
  FUNC_3();
  VAR_14->status_word = FUNC_2(FUNC_0(VAR_8));
  FUNC_10(VAR_13, VAR_3);
 }

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  struct gem_txd *VAR_15 = &VAR_9->txd[VAR_11];

  VAR_15->control_word = 0;
  FUNC_3();
  VAR_15->buffer = 0;
 }
 FUNC_12();
}
