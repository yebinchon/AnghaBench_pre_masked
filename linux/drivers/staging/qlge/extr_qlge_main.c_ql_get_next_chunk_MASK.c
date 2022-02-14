
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {scalar_t__ offset; int last_flag; int * page; int va; int map; } ;
struct rx_ring {scalar_t__ lbq_buf_size; TYPE_1__ pg_chunk; } ;
struct ql_adapter {int ndev; int lbq_buf_order; int pdev; } ;
struct TYPE_4__ {TYPE_1__ pg_chunk; } ;
struct bq_desc {TYPE_2__ p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (struct ql_adapter*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct ql_adapter *VAR_5, struct rx_ring *VAR_6,
      struct bq_desc *VAR_7)
{
 if (!VAR_6->pg_chunk.page) {
  u64 VAR_8;
  VAR_6->pg_chunk.page = FUNC_1(VAR_3 | VAR_1,
      VAR_5->lbq_buf_order);
  if (FUNC_8(!VAR_6->pg_chunk.page)) {
   FUNC_3(VAR_5, VAR_4, VAR_5->ndev,
      "page allocation failed.\n");
   return -VAR_0;
  }
  VAR_6->pg_chunk.offset = 0;
  VAR_8 = FUNC_6(VAR_5->pdev, VAR_6->pg_chunk.page,
     0, FUNC_7(VAR_5),
     VAR_2);
  if (FUNC_5(VAR_5->pdev, VAR_8)) {
   FUNC_0(VAR_6->pg_chunk.page,
     VAR_5->lbq_buf_order);
   VAR_6->pg_chunk.page = ((void*)0);
   FUNC_3(VAR_5, VAR_4, VAR_5->ndev,
      "PCI mapping failed.\n");
   return -VAR_0;
  }
  VAR_6->pg_chunk.map = VAR_8;
  VAR_6->pg_chunk.va = FUNC_4(VAR_6->pg_chunk.page);
 }




 VAR_7->p.pg_chunk = VAR_6->pg_chunk;




 VAR_6->pg_chunk.offset += VAR_6->lbq_buf_size;
 if (VAR_6->pg_chunk.offset == FUNC_7(VAR_5)) {
  VAR_6->pg_chunk.page = ((void*)0);
  VAR_7->p.pg_chunk.last_flag = 1;
 } else {
  VAR_6->pg_chunk.va += VAR_6->lbq_buf_size;
  FUNC_2(VAR_6->pg_chunk.page);
  VAR_7->p.pg_chunk.last_flag = 0;
 }
 return 0;
}
