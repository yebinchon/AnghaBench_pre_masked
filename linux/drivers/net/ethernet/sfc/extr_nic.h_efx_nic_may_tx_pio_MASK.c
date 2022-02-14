
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {scalar_t__ piobuf; } ;


 scalar_t__ FUNC_0 (struct efx_tx_queue*) ;
 struct efx_tx_queue* FUNC_1 (struct efx_tx_queue*) ;

__attribute__((used)) static inline bool FUNC_2(struct efx_tx_queue *VAR_0)
{
 struct efx_tx_queue *VAR_1 = FUNC_1(VAR_0);

 return VAR_0->piobuf && FUNC_0(VAR_0) &&
        FUNC_0(VAR_1);
}
