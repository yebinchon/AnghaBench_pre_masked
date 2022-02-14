
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_rx_queue {TYPE_2__* efx; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* rx_probe ) (struct efx_rx_queue*) ;} ;


 int FUNC_0 (struct efx_rx_queue*) ;

__attribute__((used)) static inline int FUNC_1(struct efx_rx_queue *VAR_0)
{
 return VAR_0->efx->type->rx_probe(VAR_0);
}
