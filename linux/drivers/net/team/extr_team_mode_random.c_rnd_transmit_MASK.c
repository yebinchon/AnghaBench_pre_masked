
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_port {int dummy; } ;
struct team {int en_port_count; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct team*,struct team_port*,struct sk_buff*) ;
 struct team_port* FUNC_3 (struct team*,struct team_port*) ;
 struct team_port* FUNC_4 (struct team*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct team *VAR_0, struct sk_buff *VAR_1)
{
 struct team_port *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->en_port_count);
 VAR_2 = FUNC_4(VAR_0, VAR_3);
 if (FUNC_5(!VAR_2))
  goto drop;
 VAR_2 = FUNC_3(VAR_0, VAR_2);
 if (FUNC_5(!VAR_2))
  goto drop;
 if (FUNC_2(VAR_0, VAR_2, VAR_1))
  return 0;
 return 1;

drop:
 FUNC_0(VAR_1);
 return 0;
}
