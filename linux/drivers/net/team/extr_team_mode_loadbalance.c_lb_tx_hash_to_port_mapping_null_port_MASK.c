
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team_port {int dummy; } ;
struct team {int dummy; } ;
struct lb_priv {TYPE_1__* ex; } ;
struct lb_port_mapping {int opt_inst_info; int port; } ;
struct TYPE_2__ {struct lb_port_mapping* tx_hash_to_port_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct lb_priv* FUNC_1 (struct team*) ;
 struct team_port* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct team*) ;

__attribute__((used)) static void FUNC_5(struct team *VAR_1,
       struct team_port *VAR_2)
{
 struct lb_priv *VAR_3 = FUNC_1(VAR_1);
 bool VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct lb_port_mapping *VAR_6;

  VAR_6 = &VAR_3->ex->tx_hash_to_port_mapping[VAR_5];
  if (FUNC_2(VAR_6->port) == VAR_2) {
   FUNC_0(VAR_6->port, ((void*)0));
   FUNC_3(VAR_6->opt_inst_info);
   VAR_4 = 1;
  }
 }
 if (VAR_4)
  FUNC_4(VAR_1);
}
