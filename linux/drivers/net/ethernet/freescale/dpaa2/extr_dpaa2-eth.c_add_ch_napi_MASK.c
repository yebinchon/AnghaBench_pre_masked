
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_eth_priv {int num_channels; int net_dev; struct dpaa2_eth_channel** channel; } ;
struct dpaa2_eth_channel {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dpaa2_eth_priv *VAR_2)
{
 int VAR_3;
 struct dpaa2_eth_channel *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_channels; VAR_3++) {
  VAR_4 = VAR_2->channel[VAR_3];

  FUNC_0(VAR_2->net_dev, &VAR_4->napi, VAR_1,
          VAR_0);
 }
}
