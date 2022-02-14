
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_rxq_dma_data {int dummy; } ;
struct iwl_trans {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* rxq_dma_data ) (struct iwl_trans*,int,struct iwl_trans_rxq_dma_data*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct iwl_trans*,int,struct iwl_trans_rxq_dma_data*) ;

__attribute__((used)) static inline int
FUNC_2(struct iwl_trans *VAR_1, int VAR_2,
      struct iwl_trans_rxq_dma_data *VAR_3)
{
 if (FUNC_0(!VAR_1->ops->rxq_dma_data))
  return -VAR_0;

 return VAR_1->ops->rxq_dma_data(VAR_1, VAR_2, VAR_3);
}
