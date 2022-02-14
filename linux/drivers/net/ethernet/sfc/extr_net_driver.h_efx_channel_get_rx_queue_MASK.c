
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {int dummy; } ;
struct efx_channel {struct efx_rx_queue rx_queue; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_channel*) ;

__attribute__((used)) static inline struct efx_rx_queue *
FUNC_2(struct efx_channel *VAR_0)
{
 FUNC_0(!FUNC_1(VAR_0));
 return &VAR_0->rx_queue;
}
