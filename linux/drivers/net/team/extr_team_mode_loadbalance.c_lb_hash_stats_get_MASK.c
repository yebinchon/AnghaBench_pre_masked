
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int len; int * ptr; } ;
struct TYPE_9__ {TYPE_2__ bin_val; } ;
struct team_gsetter_ctx {TYPE_3__ data; TYPE_1__* info; } ;
struct team {int dummy; } ;
struct lb_stats {int dummy; } ;
struct lb_priv {TYPE_6__* ex; } ;
struct TYPE_11__ {TYPE_4__* info; } ;
struct TYPE_12__ {TYPE_5__ stats; } ;
struct TYPE_10__ {int stats; } ;
struct TYPE_7__ {unsigned char array_index; } ;


 struct lb_priv* FUNC_0 (struct team*) ;

__attribute__((used)) static int FUNC_1(struct team *VAR_0, struct team_gsetter_ctx *VAR_1)
{
 struct lb_priv *VAR_2 = FUNC_0(VAR_0);
 unsigned char VAR_3 = VAR_1->info->array_index;

 VAR_1->data.bin_val.ptr = &VAR_2->ex->stats.info[VAR_3].stats;
 VAR_1->data.bin_val.len = sizeof(struct lb_stats);
 return 0;
}
