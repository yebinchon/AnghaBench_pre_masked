
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct rx_ring {size_t lbq_clean_idx; int lbq_free_cnt; size_t lbq_len; size_t lbq_prod_idx; int lbq_prod_idx_db_reg; int lbq_buf_size; struct bq_desc* lbq; } ;
struct ql_adapter {int ndev; int pdev; } ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ map; } ;
struct TYPE_4__ {TYPE_1__ pg_chunk; } ;
struct bq_desc {int * addr; TYPE_2__ p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bq_desc*,int ,scalar_t__) ;
 int FUNC_2 (struct bq_desc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ql_adapter*,int ,int ,char*,int,size_t) ;
 int FUNC_4 (struct ql_adapter*,int ,int ,int ,char*,size_t) ;
 int FUNC_5 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (struct ql_adapter*,struct rx_ring*,struct bq_desc*) ;
 int FUNC_7 (size_t,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_8(struct ql_adapter *VAR_6, struct rx_ring *VAR_7)
{
 u32 VAR_8 = VAR_7->lbq_clean_idx;
 u32 VAR_9 = VAR_8;
 struct bq_desc *VAR_10;
 u64 VAR_11;
 int VAR_12;

 while (VAR_7->lbq_free_cnt > 32) {
  for (VAR_12 = (VAR_7->lbq_clean_idx % 16); VAR_12 < 16; VAR_12++) {
   FUNC_4(VAR_6, VAR_5, VAR_0, VAR_6->ndev,
         "lbq: try cleaning clean_idx = %d.\n",
         VAR_8);
   VAR_10 = &VAR_7->lbq[VAR_8];
   if (FUNC_6(VAR_6, VAR_7, VAR_10)) {
    VAR_7->lbq_clean_idx = VAR_8;
    FUNC_3(VAR_6, VAR_2, VAR_6->ndev,
      "Could not get a page chunk, i=%d, clean_idx =%d .\n",
      VAR_12, VAR_8);
    return;
   }

   VAR_11 = VAR_10->p.pg_chunk.map +
    VAR_10->p.pg_chunk.offset;
   FUNC_1(VAR_10, VAR_3, VAR_11);
   FUNC_2(VAR_10, VAR_4,
     VAR_7->lbq_buf_size);
   *VAR_10->addr = FUNC_0(VAR_11);

   FUNC_5(VAR_6->pdev, VAR_11,
      VAR_7->lbq_buf_size,
      VAR_1);
   VAR_8++;
   if (VAR_8 == VAR_7->lbq_len)
    VAR_8 = 0;
  }

  VAR_7->lbq_clean_idx = VAR_8;
  VAR_7->lbq_prod_idx += 16;
  if (VAR_7->lbq_prod_idx == VAR_7->lbq_len)
   VAR_7->lbq_prod_idx = 0;
  VAR_7->lbq_free_cnt -= 16;
 }

 if (VAR_9 != VAR_8) {
  FUNC_4(VAR_6, VAR_5, VAR_0, VAR_6->ndev,
        "lbq: updating prod idx = %d.\n",
        VAR_7->lbq_prod_idx);
  FUNC_7(VAR_7->lbq_prod_idx,
    VAR_7->lbq_prod_idx_db_reg);
 }
}
