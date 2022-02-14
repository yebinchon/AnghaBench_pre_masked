
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mvpp2_port {int nrxqs; int * pool_short; int * pool_long; TYPE_2__* priv; int id; } ;
struct mvpp2_bm_pool {int dummy; } ;
struct TYPE_6__ {int pkt_size; } ;
struct TYPE_5__ {TYPE_1__* bm_pools; } ;
struct TYPE_4__ {int id; int port_map; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct mvpp2_bm_pool* FUNC_1 (struct mvpp2_port*,size_t,int,int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (struct mvpp2_port*,int,int ) ;
 int FUNC_3 (struct mvpp2_port*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct mvpp2_port *VAR_4)
{
 struct mvpp2_bm_pool *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->nrxqs; VAR_6++) {
  VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_6,
          VAR_3[VAR_2].pkt_size);
  if (!VAR_5)
   return -VAR_0;

  VAR_4->priv->bm_pools[VAR_6].port_map |= FUNC_0(VAR_4->id);
  FUNC_3(VAR_4, VAR_6, VAR_4->priv->bm_pools[VAR_6].id);
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->nrxqs; VAR_6++) {
  VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_6 + VAR_4->nrxqs,
          VAR_3[VAR_1].pkt_size);
  if (!VAR_5)
   return -VAR_0;

  VAR_4->priv->bm_pools[VAR_6 + VAR_4->nrxqs].port_map |= FUNC_0(VAR_4->id);
  FUNC_2(VAR_4, VAR_6,
     VAR_4->priv->bm_pools[VAR_6 + VAR_4->nrxqs].id);
 }

 VAR_4->pool_long = ((void*)0);
 VAR_4->pool_short = ((void*)0);

 return 0;
}
