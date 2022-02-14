
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team_port {int dummy; } ;
struct team {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int active_port; } ;


 TYPE_1__* FUNC_0 (struct team*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct team_port* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct team*,struct team_port*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct team *VAR_0, struct sk_buff *VAR_1)
{
 struct team_port *VAR_2;

 VAR_2 = FUNC_2(FUNC_0(VAR_0)->active_port);
 if (FUNC_4(!VAR_2))
  goto drop;
 if (FUNC_3(VAR_0, VAR_2, VAR_1))
  return 0;
 return 1;

drop:
 FUNC_1(VAR_1);
 return 0;
}
