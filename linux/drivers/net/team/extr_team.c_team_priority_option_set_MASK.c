
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct team_port {scalar_t__ priority; } ;
struct TYPE_4__ {scalar_t__ s32_val; } ;
struct team_gsetter_ctx {TYPE_2__ data; TYPE_1__* info; } ;
struct team {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_3__ {struct team_port* port; } ;


 int FUNC_0 (struct team*,struct team_port*) ;

__attribute__((used)) static int FUNC_1(struct team *VAR_0,
        struct team_gsetter_ctx *VAR_1)
{
 struct team_port *VAR_2 = VAR_1->info->port;
 s32 VAR_3 = VAR_1->data.s32_val;

 if (VAR_2->priority == VAR_3)
  return 0;
 VAR_2->priority = VAR_3;
 FUNC_0(VAR_0, VAR_2);
 return 0;
}
