
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct sw_tx_bd {size_t first_bd; int flags; struct sk_buff* skb; } ;
struct sk_buff {scalar_t__ len; int end; } ;
struct eth_tx_start_bd {int nbd; } ;
struct eth_tx_bd {int nbd; } ;
struct bnx2x_fp_txdata {TYPE_1__* tx_desc_ring; int txq_index; struct sw_tx_bd* tx_buf_ring; } ;
struct bnx2x {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct eth_tx_start_bd reg_bd; struct eth_tx_start_bd start_bd; } ;


 int FUNC_0 (struct eth_tx_start_bd*) ;
 size_t FUNC_1 (struct eth_tx_start_bd*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int ,size_t,struct sw_tx_bd*,struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_4 (size_t) ;
 size_t FUNC_5 (size_t) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *,int ,size_t,int ) ;
 int FUNC_10 (int *,int ,size_t,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static u16 FUNC_14(struct bnx2x *VAR_5, struct bnx2x_fp_txdata *VAR_6,
        u16 VAR_7, unsigned int *VAR_8,
        unsigned int *VAR_9)
{
 struct sw_tx_bd *VAR_10 = &VAR_6->tx_buf_ring[VAR_7];
 struct eth_tx_start_bd *VAR_11;
 struct eth_tx_bd *VAR_12;
 struct sk_buff *VAR_13 = VAR_10->skb;
 u16 VAR_14 = FUNC_5(VAR_10->first_bd), VAR_15;
 int VAR_16;
 u16 VAR_17 = 0;


 FUNC_13(&VAR_13->end);

 FUNC_3(VAR_4, "fp[%d]: pkt_idx %d  buff @(%p)->skb %p\n",
    VAR_6->txq_index, VAR_7, VAR_10, VAR_13);

 VAR_11 = &VAR_6->tx_desc_ring[VAR_14].start_bd;

 VAR_16 = FUNC_11(VAR_11->nbd) - 1;






 VAR_15 = VAR_16 + VAR_10->first_bd;


 VAR_14 = FUNC_5(FUNC_4(VAR_14));


 --VAR_16;
 VAR_14 = FUNC_5(FUNC_4(VAR_14));

 if (VAR_10->flags & VAR_0) {

  --VAR_16;
  VAR_14 = FUNC_5(FUNC_4(VAR_14));
 }


 if (VAR_10->flags & VAR_1) {
  VAR_12 = &VAR_6->tx_desc_ring[VAR_14].reg_bd;
  VAR_17 = FUNC_1(VAR_12);
  --VAR_16;
  VAR_14 = FUNC_5(FUNC_4(VAR_14));
 }


 FUNC_10(&VAR_5->pdev->dev, FUNC_0(VAR_11),
    FUNC_1(VAR_11) + VAR_17,
    VAR_2);


 while (VAR_16 > 0) {

  VAR_12 = &VAR_6->tx_desc_ring[VAR_14].reg_bd;
  FUNC_9(&VAR_5->pdev->dev, FUNC_0(VAR_12),
          FUNC_1(VAR_12), VAR_2);
  if (--VAR_16)
   VAR_14 = FUNC_5(FUNC_4(VAR_14));
 }


 FUNC_6(!VAR_13);
 if (FUNC_12(VAR_13)) {
  (*VAR_8)++;
  (*VAR_9) += VAR_13->len;
  FUNC_8(VAR_13);
 }

 VAR_10->first_bd = 0;
 VAR_10->skb = ((void*)0);

 return VAR_15;
}
