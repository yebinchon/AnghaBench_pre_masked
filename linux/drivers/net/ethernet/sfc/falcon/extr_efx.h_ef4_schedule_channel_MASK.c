
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_channel {int napi_str; int channel; TYPE_1__* efx; } ;
struct TYPE_2__ {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct ef4_channel *VAR_1)
{
 FUNC_1(VAR_1->efx, VAR_0, VAR_1->efx->net_dev,
     "channel %d scheduling NAPI poll on CPU%d\n",
     VAR_1->channel, FUNC_2());

 FUNC_0(&VAR_1->napi_str);
}
