
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpaa2_eth_priv {int num_channels; TYPE_1__** channel; } ;
struct TYPE_2__ {int store; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct dpaa2_eth_priv *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_channels; VAR_1++)
  FUNC_0(VAR_0->channel[VAR_1]->store);
}
