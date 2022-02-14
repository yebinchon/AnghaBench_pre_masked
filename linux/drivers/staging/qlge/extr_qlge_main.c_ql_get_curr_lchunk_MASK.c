
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_ring {scalar_t__ lbq_buf_size; } ;
struct ql_adapter {int pdev; } ;
struct TYPE_3__ {scalar_t__ offset; int map; } ;
struct TYPE_4__ {TYPE_1__ pg_chunk; } ;
struct bq_desc {TYPE_2__ p; } ;


 int VAR_0 ;
 int FUNC_0 (struct bq_desc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 struct bq_desc* FUNC_3 (struct rx_ring*) ;
 scalar_t__ FUNC_4 (struct ql_adapter*) ;

__attribute__((used)) static struct bq_desc *FUNC_5(struct ql_adapter *VAR_2,
  struct rx_ring *VAR_3)
{
 struct bq_desc *VAR_4 = FUNC_3(VAR_3);

 FUNC_1(VAR_2->pdev,
     FUNC_0(VAR_4, VAR_1),
        VAR_3->lbq_buf_size,
     VAR_0);




 if ((VAR_4->p.pg_chunk.offset + VAR_3->lbq_buf_size)
     == FUNC_4(VAR_2))
  FUNC_2(VAR_2->pdev,
    VAR_4->p.pg_chunk.map,
    FUNC_4(VAR_2),
    VAR_0);
 return VAR_4;
}
