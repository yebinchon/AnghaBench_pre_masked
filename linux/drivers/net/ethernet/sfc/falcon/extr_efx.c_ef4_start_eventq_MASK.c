
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_channel {int enabled; int napi_str; int channel; TYPE_1__* efx; } ;
struct TYPE_2__ {int net_dev; } ;


 int FUNC_0 (struct ef4_channel*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*,int ) ;
 int FUNC_3 () ;

void FUNC_4(struct ef4_channel *VAR_1)
{
 FUNC_2(VAR_1->efx, VAR_0, VAR_1->efx->net_dev,
    "chan %d start event queue\n", VAR_1->channel);


 VAR_1->enabled = 1;
 FUNC_3();

 FUNC_1(&VAR_1->napi_str);
 FUNC_0(VAR_1);
}
