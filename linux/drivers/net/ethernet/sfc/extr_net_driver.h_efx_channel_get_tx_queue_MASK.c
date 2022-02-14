
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {int dummy; } ;
struct efx_channel {struct efx_tx_queue* tx_queue; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_channel*) ;

__attribute__((used)) static inline struct efx_tx_queue *
FUNC_2(struct efx_channel *VAR_1, unsigned VAR_2)
{
 FUNC_0(!FUNC_1(VAR_1) ||
      VAR_2 >= VAR_0);
 return &VAR_1->tx_queue[VAR_2];
}
