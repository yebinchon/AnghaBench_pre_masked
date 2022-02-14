
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {int * page; int map; } ;
struct rx_ring {size_t lbq_curr_idx; size_t lbq_clean_idx; size_t lbq_len; TYPE_3__ pg_chunk; struct bq_desc* lbq; } ;
struct ql_adapter {int pdev; } ;
struct TYPE_4__ {int * page; scalar_t__ last_flag; int map; } ;
struct TYPE_5__ {TYPE_1__ pg_chunk; } ;
struct bq_desc {TYPE_2__ p; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ql_adapter*) ;

__attribute__((used)) static void FUNC_3(struct ql_adapter *VAR_1, struct rx_ring *VAR_2)
{
 struct bq_desc *VAR_3;

 uint32_t VAR_4, VAR_5;

 VAR_4 = VAR_2->lbq_curr_idx;
 VAR_5 = VAR_2->lbq_clean_idx;
 while (VAR_4 != VAR_5) {
  VAR_3 = &VAR_2->lbq[VAR_4];

  if (VAR_3->p.pg_chunk.last_flag) {
   FUNC_0(VAR_1->pdev,
    VAR_3->p.pg_chunk.map,
    FUNC_2(VAR_1),
           VAR_0);
   VAR_3->p.pg_chunk.last_flag = 0;
  }

  FUNC_1(VAR_3->p.pg_chunk.page);
  VAR_3->p.pg_chunk.page = ((void*)0);

  if (++VAR_4 == VAR_2->lbq_len)
   VAR_4 = 0;

 }
 if (VAR_2->pg_chunk.page) {
  FUNC_0(VAR_1->pdev, VAR_2->pg_chunk.map,
   FUNC_2(VAR_1), VAR_0);
  FUNC_1(VAR_2->pg_chunk.page);
  VAR_2->pg_chunk.page = ((void*)0);
 }
}
