
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int data; } ;
struct TYPE_4__ {int rxbuf; int * rx_edma; } ;
struct ath_softc {TYPE_2__ rx; int dev; struct ath_hw* sc_ah; } ;
struct ath_rxbuf {int list; scalar_t__ bf_buf_addr; struct sk_buff* bf_mpdu; } ;
struct TYPE_3__ {int rx_hp_qdepth; int rx_lp_qdepth; scalar_t__ rx_status_len; } ;
struct ath_hw {TYPE_1__ caps; } ;
struct ath_common {scalar_t__ rx_bufsize; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,scalar_t__) ;
 int FUNC_3 (struct ath_common*,char*) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (int *,int ) ;
 struct sk_buff* FUNC_6 (struct ath_common*,scalar_t__,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct ath_rxbuf* FUNC_8 (int ,int,int ) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__,int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct ath_softc *VAR_5, int VAR_6)
{
 struct ath_common *VAR_7 = FUNC_1(VAR_5->sc_ah);
 struct ath_hw *VAR_8 = VAR_5->sc_ah;
 struct sk_buff *VAR_9;
 struct ath_rxbuf *VAR_10;
 int VAR_11 = 0, VAR_12;
 u32 VAR_13;

 FUNC_2(VAR_8, VAR_7->rx_bufsize -
        VAR_8->caps.rx_status_len);

 FUNC_5(&VAR_5->rx.rx_edma[VAR_1],
          VAR_8->caps.rx_lp_qdepth);
 FUNC_5(&VAR_5->rx.rx_edma[VAR_0],
          VAR_8->caps.rx_hp_qdepth);

 VAR_13 = sizeof(struct ath_rxbuf) * VAR_6;
 VAR_10 = FUNC_8(VAR_5->dev, VAR_13, VAR_4);
 if (!VAR_10)
  return -VAR_3;

 FUNC_0(&VAR_5->rx.rxbuf);

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++, VAR_10++) {
  VAR_9 = FUNC_6(VAR_7, VAR_7->rx_bufsize, VAR_4);
  if (!VAR_9) {
   VAR_11 = -VAR_3;
   goto rx_init_fail;
  }

  FUNC_12(VAR_9->data, 0, VAR_7->rx_bufsize);
  VAR_10->bf_mpdu = VAR_9;

  VAR_10->bf_buf_addr = FUNC_9(VAR_5->dev, VAR_9->data,
       VAR_7->rx_bufsize,
       VAR_2);
  if (FUNC_13(FUNC_10(VAR_5->dev,
      VAR_10->bf_buf_addr))) {
    FUNC_7(VAR_9);
    VAR_10->bf_mpdu = ((void*)0);
    VAR_10->bf_buf_addr = 0;
    FUNC_3(VAR_7,
     "dma_mapping_error() on RX init\n");
    VAR_11 = -VAR_3;
    goto rx_init_fail;
  }

  FUNC_11(&VAR_10->list, &VAR_5->rx.rxbuf);
 }

 return 0;

rx_init_fail:
 FUNC_4(VAR_5);
 return VAR_11;
}
