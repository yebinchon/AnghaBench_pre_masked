
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_port {int dummy; } ;
struct team {int dummy; } ;
struct lb_port_priv {int pcpu_stats; } ;


 int FUNC_0 (int ) ;
 struct lb_port_priv* FUNC_1 (struct team_port*) ;

__attribute__((used)) static void FUNC_2(struct team *VAR_0, struct team_port *VAR_1)
{
 struct lb_port_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->pcpu_stats);
}
