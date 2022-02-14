
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_tx_queue {int packet_write_count; TYPE_2__* efx; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int option_descriptors; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_tx_queue*,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct efx_tx_queue *VAR_0)
{
 FUNC_0(!VAR_0->efx->type->option_descriptors);
 return FUNC_1(VAR_0, VAR_0->packet_write_count);
}
