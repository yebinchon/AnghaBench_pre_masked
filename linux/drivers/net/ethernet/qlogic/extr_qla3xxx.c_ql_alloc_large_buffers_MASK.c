
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct ql_rcv_buf_cb {int index; void* buf_phy_addr_high; void* buf_phy_addr_low; struct sk_buff* skb; } ;
struct ql3_adapter {int num_large_buffers; int lrg_buffer_len; int ndev; int pdev; struct ql_rcv_buf_cb* lrg_buf; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ql_rcv_buf_cb*,int ,int ) ;
 int FUNC_5 (struct ql_rcv_buf_cb*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct ql_rcv_buf_cb*,int ,int) ;
 struct sk_buff* FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char*,int,...) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int,int ) ;
 int FUNC_11 (struct ql3_adapter*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct ql3_adapter *VAR_5)
{
 int VAR_6;
 struct ql_rcv_buf_cb *VAR_7;
 struct sk_buff *VAR_8;
 dma_addr_t VAR_9;
 int VAR_10;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_large_buffers; VAR_6++) {
  VAR_8 = FUNC_7(VAR_5->ndev,
           VAR_5->lrg_buffer_len);
  if (FUNC_13(!VAR_8)) {

   FUNC_8(VAR_5->ndev,
       "large buff alloc failed for %d bytes at index %d\n",
       VAR_5->lrg_buffer_len * 2, VAR_6);
   FUNC_11(VAR_5);
   return -VAR_0;
  } else {

   VAR_7 = &VAR_5->lrg_buf[VAR_6];
   FUNC_6(VAR_7, 0, sizeof(struct ql_rcv_buf_cb));
   VAR_7->index = VAR_6;
   VAR_7->skb = VAR_8;




   FUNC_12(VAR_8, VAR_2);
   VAR_9 = FUNC_10(VAR_5->pdev,
          VAR_8->data,
          VAR_5->lrg_buffer_len -
          VAR_2,
          VAR_1);

   VAR_10 = FUNC_9(VAR_5->pdev, VAR_9);
   if (VAR_10) {
    FUNC_8(VAR_5->ndev,
        "PCI mapping failed with error: %d\n",
        VAR_10);
    FUNC_3(VAR_8);
    FUNC_11(VAR_5);
    return -VAR_0;
   }

   FUNC_4(VAR_7, VAR_3, VAR_9);
   FUNC_5(VAR_7, VAR_4,
       VAR_5->lrg_buffer_len -
       VAR_2);
   VAR_7->buf_phy_addr_low =
       FUNC_2(FUNC_0(VAR_9));
   VAR_7->buf_phy_addr_high =
       FUNC_2(FUNC_1(VAR_9));
  }
 }
 return 0;
}
