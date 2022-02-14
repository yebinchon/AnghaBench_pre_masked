
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team_port {int dummy; } ;
struct team {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sent_packets; } ;


 int FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct team*) ;
 scalar_t__ FUNC_2 (struct team*,struct team_port*,struct sk_buff*) ;
 struct team_port* FUNC_3 (struct team*,struct team_port*) ;
 struct team_port* FUNC_4 (struct team*,int) ;
 int FUNC_5 (struct team*,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bool FUNC_7(struct team *VAR_0, struct sk_buff *VAR_1)
{
 struct team_port *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_5(VAR_0,
         FUNC_1(VAR_0)->sent_packets++);
 VAR_2 = FUNC_4(VAR_0, VAR_3);
 if (FUNC_6(!VAR_2))
  goto drop;
 VAR_2 = FUNC_3(VAR_0, VAR_2);
 if (FUNC_6(!VAR_2))
  goto drop;
 if (FUNC_2(VAR_0, VAR_2, VAR_1))
  return 0;
 return 1;

drop:
 FUNC_0(VAR_1);
 return 0;
}
