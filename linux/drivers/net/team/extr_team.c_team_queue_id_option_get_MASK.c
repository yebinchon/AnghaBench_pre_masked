
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct team_port {int queue_id; } ;
struct TYPE_4__ {int u32_val; } ;
struct team_gsetter_ctx {TYPE_2__ data; TYPE_1__* info; } ;
struct team {int dummy; } ;
struct TYPE_3__ {struct team_port* port; } ;



__attribute__((used)) static int FUNC_0(struct team *VAR_0,
        struct team_gsetter_ctx *VAR_1)
{
 struct team_port *VAR_2 = VAR_1->info->port;

 VAR_1->data.u32_val = VAR_2->queue_id;
 return 0;
}
