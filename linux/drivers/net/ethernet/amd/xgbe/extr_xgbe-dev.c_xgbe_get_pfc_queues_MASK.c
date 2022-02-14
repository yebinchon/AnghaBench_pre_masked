
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {int* pfcq; int rx_q_count; TYPE_1__* pfc; } ;
struct TYPE_2__ {int pfc_en; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct xgbe_prv_data*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct xgbe_prv_data *VAR_0)
{
 unsigned int VAR_1, VAR_2;
 unsigned int VAR_3;

 if (!VAR_0->pfc->pfc_en)
  return 0;

 VAR_1 = 0;
 VAR_2 = FUNC_0(VAR_0->rx_q_count);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (!FUNC_1(VAR_0, VAR_3))
   continue;

  VAR_0->pfcq[VAR_3] = 1;
  VAR_1++;
 }

 return VAR_1;
}
