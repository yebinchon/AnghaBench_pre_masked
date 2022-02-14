
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_vf {int rxq_retry_count; int rxq_retry_mask; scalar_t__ rxq_count; int rxq_mask; scalar_t__ txq_count; int txq_mask; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct siena_vf *VAR_0)
{
 FUNC_1(VAR_0->txq_mask, 0, sizeof(VAR_0->txq_mask));
 VAR_0->txq_count = 0;
 FUNC_1(VAR_0->rxq_mask, 0, sizeof(VAR_0->rxq_mask));
 VAR_0->rxq_count = 0;
 FUNC_1(VAR_0->rxq_retry_mask, 0, sizeof(VAR_0->rxq_retry_mask));
 FUNC_0(&VAR_0->rxq_retry_count, 0);
}
