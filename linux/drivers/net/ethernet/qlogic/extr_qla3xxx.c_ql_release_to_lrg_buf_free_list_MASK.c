
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ql_rcv_buf_cb {void* buf_phy_addr_high; void* buf_phy_addr_low; TYPE_1__* skb; struct ql_rcv_buf_cb* next; } ;
struct ql3_adapter {int lrg_buf_free_count; scalar_t__ lrg_buffer_len; int lrg_buf_skb_check; int ndev; int pdev; struct ql_rcv_buf_cb* lrg_buf_free_tail; struct ql_rcv_buf_cb* lrg_buf_free_head; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct ql_rcv_buf_cb*,int ,int ) ;
 int FUNC_5 (struct ql_rcv_buf_cb*,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,scalar_t__,int ) ;
 int FUNC_10 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct ql3_adapter *VAR_4,
         struct ql_rcv_buf_cb *VAR_5)
{
 dma_addr_t VAR_6;
 int VAR_7;
 VAR_5->next = ((void*)0);

 if (VAR_4->lrg_buf_free_tail == ((void*)0)) {
  VAR_4->lrg_buf_free_head = VAR_4->lrg_buf_free_tail = VAR_5;
 } else {
  VAR_4->lrg_buf_free_tail->next = VAR_5;
  VAR_4->lrg_buf_free_tail = VAR_5;
 }

 if (!VAR_5->skb) {
  VAR_5->skb = FUNC_6(VAR_4->ndev,
         VAR_4->lrg_buffer_len);
  if (FUNC_11(!VAR_5->skb)) {
   VAR_4->lrg_buf_skb_check++;
  } else {




   FUNC_10(VAR_5->skb, VAR_1);
   VAR_6 = FUNC_9(VAR_4->pdev,
          VAR_5->skb->data,
          VAR_4->lrg_buffer_len -
          VAR_1,
          VAR_0);
   VAR_7 = FUNC_8(VAR_4->pdev, VAR_6);
   if (VAR_7) {
    FUNC_7(VAR_4->ndev,
        "PCI mapping failed with error: %d\n",
        VAR_7);
    FUNC_3(VAR_5->skb);
    VAR_5->skb = ((void*)0);

    VAR_4->lrg_buf_skb_check++;
    return;
   }

   VAR_5->buf_phy_addr_low =
       FUNC_2(FUNC_0(VAR_6));
   VAR_5->buf_phy_addr_high =
       FUNC_2(FUNC_1(VAR_6));
   FUNC_4(VAR_5, VAR_2, VAR_6);
   FUNC_5(VAR_5, VAR_3,
       VAR_4->lrg_buffer_len -
       VAR_1);
  }
 }

 VAR_4->lrg_buf_free_count++;
}
