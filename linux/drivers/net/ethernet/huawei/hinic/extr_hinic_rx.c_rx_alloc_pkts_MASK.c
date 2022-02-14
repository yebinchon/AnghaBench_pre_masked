
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int len; } ;
struct hinic_sge {int dummy; } ;
struct hinic_rxq {int rq; int netdev; } ;
struct hinic_rq_wqe {int dummy; } ;
struct hinic_dev {unsigned int rx_weight; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 struct hinic_rq_wqe* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,struct hinic_rq_wqe*,struct hinic_sge*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,struct hinic_rq_wqe*,struct sk_buff*) ;
 int FUNC_5 (struct hinic_sge*,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 struct hinic_dev* FUNC_7 (int ) ;
 struct sk_buff* FUNC_8 (struct hinic_rxq*,int *) ;
 int FUNC_9 (struct hinic_rxq*,struct sk_buff*,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct hinic_rxq *VAR_1)
{
 struct hinic_dev *VAR_2 = FUNC_7(VAR_1->netdev);
 struct hinic_rq_wqe *VAR_3;
 unsigned int VAR_4;
 struct hinic_sge VAR_5;
 dma_addr_t VAR_6;
 struct sk_buff *VAR_7;
 u16 VAR_8;
 int VAR_9;

 VAR_4 = FUNC_0(VAR_1->rq);


 if (VAR_4 > VAR_2->rx_weight)
  VAR_4 = VAR_2->rx_weight;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_7 = FUNC_8(VAR_1, &VAR_6);
  if (!VAR_7) {
   FUNC_6(VAR_1->netdev, "Failed to alloc Rx skb\n");
   goto skb_out;
  }

  FUNC_5(&VAR_5, VAR_6, VAR_7->len);

  VAR_3 = FUNC_1(VAR_1->rq, VAR_0,
       &VAR_8);
  if (!VAR_3) {
   FUNC_9(VAR_1, VAR_7, VAR_6);
   goto skb_out;
  }

  FUNC_2(VAR_1->rq, VAR_8, VAR_3, &VAR_5);

  FUNC_4(VAR_1->rq, VAR_8, VAR_3, VAR_7);
 }

skb_out:
 if (VAR_9) {
  FUNC_10();

  FUNC_3(VAR_1->rq, VAR_8);
 }

 return VAR_9;
}
