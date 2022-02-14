
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct rx_ring {size_t sbq_clean_idx; int sbq_free_cnt; size_t sbq_len; int sbq_prod_idx; int sbq_prod_idx_db_reg; int sbq_buf_size; struct bq_desc* sbq; } ;
struct ql_adapter {int ndev; int pdev; } ;
struct TYPE_5__ {TYPE_2__* skb; } ;
struct bq_desc {size_t index; int * addr; TYPE_1__ p; } ;
struct TYPE_6__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct bq_desc*,int ,int ) ;
 int FUNC_3 (struct bq_desc*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_6 (struct ql_adapter*,int ,int ,int ,char*,size_t) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (size_t,int ) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_11(struct ql_adapter *VAR_8, struct rx_ring *VAR_9)
{
 u32 VAR_10 = VAR_9->sbq_clean_idx;
 u32 VAR_11 = VAR_10;
 struct bq_desc *VAR_12;
 u64 VAR_13;
 int VAR_14;

 while (VAR_9->sbq_free_cnt > 16) {
  for (VAR_14 = (VAR_9->sbq_clean_idx % 16); VAR_14 < 16; VAR_14++) {
   VAR_12 = &VAR_9->sbq[VAR_10];
   FUNC_6(VAR_8, VAR_7, VAR_0, VAR_8->ndev,
         "sbq: try cleaning clean_idx = %d.\n",
         VAR_10);
   if (VAR_12->p.skb == ((void*)0)) {
    FUNC_6(VAR_8, VAR_7, VAR_0,
          VAR_8->ndev,
          "sbq: getting new skb for index %d.\n",
          VAR_12->index);
    VAR_12->p.skb =
        FUNC_4(VAR_8->ndev,
           VAR_3);
    if (VAR_12->p.skb == ((void*)0)) {
     VAR_9->sbq_clean_idx = VAR_10;
     return;
    }
    FUNC_10(VAR_12->p.skb, VAR_2);
    VAR_13 = FUNC_8(VAR_8->pdev,
           VAR_12->p.skb->data,
           VAR_9->sbq_buf_size,
           VAR_1);
    if (FUNC_7(VAR_8->pdev, VAR_13)) {
     FUNC_5(VAR_8, VAR_4, VAR_8->ndev,
        "PCI mapping failed.\n");
     VAR_9->sbq_clean_idx = VAR_10;
     FUNC_1(VAR_12->p.skb);
     VAR_12->p.skb = ((void*)0);
     return;
    }
    FUNC_2(VAR_12, VAR_5, VAR_13);
    FUNC_3(VAR_12, VAR_6,
        VAR_9->sbq_buf_size);
    *VAR_12->addr = FUNC_0(VAR_13);
   }

   VAR_10++;
   if (VAR_10 == VAR_9->sbq_len)
    VAR_10 = 0;
  }
  VAR_9->sbq_clean_idx = VAR_10;
  VAR_9->sbq_prod_idx += 16;
  if (VAR_9->sbq_prod_idx == VAR_9->sbq_len)
   VAR_9->sbq_prod_idx = 0;
  VAR_9->sbq_free_cnt -= 16;
 }

 if (VAR_11 != VAR_10) {
  FUNC_6(VAR_8, VAR_7, VAR_0, VAR_8->ndev,
        "sbq: updating prod idx = %d.\n",
        VAR_9->sbq_prod_idx);
  FUNC_9(VAR_9->sbq_prod_idx,
    VAR_9->sbq_prod_idx_db_reg);
 }
}
