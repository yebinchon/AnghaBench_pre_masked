
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {int * sgl; } ;
struct eth_end_agg_rx_cqe {TYPE_1__ sgl_or_raw_data; } ;
struct bnx2x_fastpath {size_t last_max_sge; size_t rx_sge_prod; int * sge_mask; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int *,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,char*,size_t,size_t) ;
 int VAR_3 ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (struct bnx2x_fastpath*) ;
 int FUNC_5 (struct bnx2x_fastpath*,size_t) ;
 size_t FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static inline void FUNC_9(struct bnx2x_fastpath *VAR_4,
      u16 VAR_5,
      struct eth_end_agg_rx_cqe *VAR_6)
{
 struct bnx2x *VAR_7 = VAR_4->bp;
 u16 VAR_8, VAR_9, VAR_10;
 u16 VAR_11 = 0;
 u16 VAR_12;

 if (!VAR_5)
  return;


 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
  FUNC_0(VAR_4->sge_mask,
   FUNC_3(FUNC_6(VAR_6->sgl_or_raw_data.sgl[VAR_12])));

 FUNC_1(VAR_3, "fp_cqe->sgl[%d] = %d\n",
    VAR_5 - 1, FUNC_6(VAR_6->sgl_or_raw_data.sgl[VAR_5 - 1]));


 FUNC_8((void *)(VAR_4->sge_mask));
 FUNC_5(VAR_4,
  FUNC_6(VAR_6->sgl_or_raw_data.sgl[VAR_5 - 1]));

 VAR_8 = FUNC_3(VAR_4->last_max_sge);
 VAR_9 = VAR_8 >> VAR_1;
 VAR_10 = FUNC_3(VAR_4->rx_sge_prod) >> VAR_1;


 if (VAR_9 + 1 != VAR_10)
  VAR_9++;


 for (VAR_12 = VAR_10; VAR_12 != VAR_9; VAR_12 = FUNC_2(VAR_12)) {
  if (FUNC_7(VAR_4->sge_mask[VAR_12]))
   break;

  VAR_4->sge_mask[VAR_12] = VAR_0;
  VAR_11 += VAR_2;
 }

 if (VAR_11 > 0) {
  VAR_4->rx_sge_prod += VAR_11;

  FUNC_4(VAR_4);
 }

 FUNC_1(VAR_3,
    "fp->last_max_sge = %d  fp->rx_sge_prod = %d\n",
    VAR_4->last_max_sge, VAR_4->rx_sge_prod);
}
