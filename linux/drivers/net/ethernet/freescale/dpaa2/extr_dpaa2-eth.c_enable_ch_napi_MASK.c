
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_eth_priv {int num_channels; struct dpaa2_eth_channel** channel; } ;
struct dpaa2_eth_channel {int napi; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dpaa2_eth_priv *VAR_0)
{
 struct dpaa2_eth_channel *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_channels; VAR_2++) {
  VAR_1 = VAR_0->channel[VAR_2];
  FUNC_0(&VAR_1->napi);
 }
}
