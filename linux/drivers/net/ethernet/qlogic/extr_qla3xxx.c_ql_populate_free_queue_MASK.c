
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ql_rcv_buf_cb {struct ql_rcv_buf_cb* next; void* buf_phy_addr_high; void* buf_phy_addr_low; TYPE_1__* skb; } ;
struct ql3_adapter {int lrg_buf_skb_check; scalar_t__ lrg_buffer_len; int ndev; int pdev; struct ql_rcv_buf_cb* lrg_buf_free_head; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct ql_rcv_buf_cb*,int ,int ) ;
 int FUNC_5 (struct ql_rcv_buf_cb*,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,scalar_t__,int ) ;
 int FUNC_11 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct ql3_adapter *VAR_5)
{
 struct ql_rcv_buf_cb *VAR_6 = VAR_5->lrg_buf_free_head;
 dma_addr_t VAR_7;
 int VAR_8;

 while (VAR_6) {
  if (!VAR_6->skb) {
   VAR_6->skb =
    FUNC_6(VAR_5->ndev,
       VAR_5->lrg_buffer_len);
   if (FUNC_12(!VAR_6->skb)) {
    FUNC_8(VAR_0, VAR_5->ndev,
           "Failed netdev_alloc_skb()\n");
    break;
   } else {




    FUNC_11(VAR_6->skb, VAR_2);
    VAR_7 = FUNC_10(VAR_5->pdev,
           VAR_6->skb->data,
           VAR_5->lrg_buffer_len -
           VAR_2,
           VAR_1);

    VAR_8 = FUNC_9(VAR_5->pdev, VAR_7);
    if (VAR_8) {
     FUNC_7(VAR_5->ndev,
         "PCI mapping failed with error: %d\n",
         VAR_8);
     FUNC_3(VAR_6->skb);
     VAR_6->skb = ((void*)0);
     break;
    }


    VAR_6->buf_phy_addr_low =
     FUNC_2(FUNC_0(VAR_7));
    VAR_6->buf_phy_addr_high =
     FUNC_2(FUNC_1(VAR_7));
    FUNC_4(VAR_6, VAR_3, VAR_7);
    FUNC_5(VAR_6, VAR_4,
        VAR_5->lrg_buffer_len -
        VAR_2);
    --VAR_5->lrg_buf_skb_check;
    if (!VAR_5->lrg_buf_skb_check)
     return 1;
   }
  }
  VAR_6 = VAR_6->next;
 }
 return 0;
}
