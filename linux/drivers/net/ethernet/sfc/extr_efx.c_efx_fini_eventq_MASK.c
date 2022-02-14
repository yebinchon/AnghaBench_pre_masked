
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_channel {int eventq_init; int channel; TYPE_1__* efx; } ;
struct TYPE_2__ {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_channel*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct efx_channel *VAR_1)
{
 if (!VAR_1->eventq_init)
  return;

 FUNC_1(VAR_1->efx, VAR_0, VAR_1->efx->net_dev,
    "chan %d fini event queue\n", VAR_1->channel);

 FUNC_0(VAR_1);
 VAR_1->eventq_init = 0;
}
