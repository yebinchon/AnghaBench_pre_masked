
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int linkup; } ;
struct team_port {int team; TYPE_2__ user; } ;
struct TYPE_6__ {int bool_val; } ;
struct team_gsetter_ctx {TYPE_3__ data; TYPE_1__* info; } ;
struct team {int dummy; } ;
struct TYPE_4__ {struct team_port* port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct team_port*) ;

__attribute__((used)) static int FUNC_2(struct team *VAR_0,
           struct team_gsetter_ctx *VAR_1)
{
 struct team_port *VAR_2 = VAR_1->info->port;

 VAR_2->user.linkup = VAR_1->data.bool_val;
 FUNC_1(VAR_2);
 FUNC_0(VAR_2->team);
 return 0;
}
