
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct team_port {int dummy; } ;
struct TYPE_7__ {int len; int * ptr; } ;
struct TYPE_8__ {TYPE_3__ bin_val; } ;
struct team_gsetter_ctx {TYPE_4__ data; TYPE_1__* info; } ;
struct team {int dummy; } ;
struct lb_stats {int dummy; } ;
struct TYPE_6__ {int stats; } ;
struct lb_port_priv {TYPE_2__ stats_info; } ;
struct TYPE_5__ {struct team_port* port; } ;


 struct lb_port_priv* FUNC_0 (struct team_port*) ;

__attribute__((used)) static int FUNC_1(struct team *VAR_0, struct team_gsetter_ctx *VAR_1)
{
 struct team_port *VAR_2 = VAR_1->info->port;
 struct lb_port_priv *VAR_3 = FUNC_0(VAR_2);

 VAR_1->data.bin_val.ptr = &VAR_3->stats_info.stats;
 VAR_1->data.bin_val.len = sizeof(struct lb_stats);
 return 0;
}
