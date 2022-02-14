
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team_port {int dummy; } ;
struct team_option_inst_info {struct team_port* port; } ;
struct team {int dummy; } ;
struct TYPE_2__ {struct team_option_inst_info* opt_inst_info; } ;
struct lb_port_priv {TYPE_1__ stats_info; } ;


 struct lb_port_priv* FUNC_0 (struct team_port*) ;

__attribute__((used)) static int FUNC_1(struct team *VAR_0,
         struct team_option_inst_info *VAR_1)
{
 struct team_port *VAR_2 = VAR_1->port;
 struct lb_port_priv *VAR_3 = FUNC_0(VAR_2);

 VAR_3->stats_info.opt_inst_info = VAR_1;
 return 0;
}
