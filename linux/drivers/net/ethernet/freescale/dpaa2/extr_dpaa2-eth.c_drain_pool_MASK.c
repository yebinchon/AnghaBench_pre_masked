
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpaa2_eth_priv {int num_channels; TYPE_1__** channel; } ;
struct TYPE_2__ {scalar_t__ buf_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct dpaa2_eth_priv*,int) ;

__attribute__((used)) static void FUNC_1(struct dpaa2_eth_priv *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1, VAR_0);
 FUNC_0(VAR_1, 1);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_channels; VAR_2++)
  VAR_1->channel[VAR_2]->buf_count = 0;
}
