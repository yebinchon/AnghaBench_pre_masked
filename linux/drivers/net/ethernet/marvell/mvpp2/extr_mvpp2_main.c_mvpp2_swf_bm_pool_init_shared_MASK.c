
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mvpp2_port {scalar_t__ pkt_size; int nrxqs; TYPE_2__* pool_short; int id; TYPE_1__* pool_long; } ;
typedef enum mvpp2_bm_pool_log_num { ____Placeholder_mvpp2_bm_pool_log_num } mvpp2_bm_pool_log_num ;
struct TYPE_6__ {int pkt_size; } ;
struct TYPE_5__ {int id; int port_map; } ;
struct TYPE_4__ {int id; int port_map; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (struct mvpp2_port*,int,int ) ;
 TYPE_3__* VAR_5 ;
 int FUNC_2 (struct mvpp2_port*,int,int ) ;
 int FUNC_3 (struct mvpp2_port*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct mvpp2_port *VAR_6)
{
 enum mvpp2_bm_pool_log_num VAR_7, VAR_8;
 int VAR_9;





 if (VAR_6->pkt_size > VAR_3) {
  VAR_7 = VAR_1;
  VAR_8 = VAR_2;
 } else {
  VAR_7 = VAR_2;
  VAR_8 = VAR_4;
 }

 if (!VAR_6->pool_long) {
  VAR_6->pool_long =
   FUNC_1(VAR_6, VAR_7,
       VAR_5[VAR_7].pkt_size);
  if (!VAR_6->pool_long)
   return -VAR_0;

  VAR_6->pool_long->port_map |= FUNC_0(VAR_6->id);

  for (VAR_9 = 0; VAR_9 < VAR_6->nrxqs; VAR_9++)
   FUNC_2(VAR_6, VAR_9, VAR_6->pool_long->id);
 }

 if (!VAR_6->pool_short) {
  VAR_6->pool_short =
   FUNC_1(VAR_6, VAR_8,
       VAR_5[VAR_8].pkt_size);
  if (!VAR_6->pool_short)
   return -VAR_0;

  VAR_6->pool_short->port_map |= FUNC_0(VAR_6->id);

  for (VAR_9 = 0; VAR_9 < VAR_6->nrxqs; VAR_9++)
   FUNC_3(VAR_6, VAR_9,
       VAR_6->pool_short->id);
 }

 return 0;
}
