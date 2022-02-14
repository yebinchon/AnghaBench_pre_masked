
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team_port {int dummy; } ;
struct team {int dummy; } ;
struct TYPE_2__ {int ap_opt_inst_info; struct team_port* active_port; } ;


 int FUNC_0 (struct team_port*,int *) ;
 TYPE_1__* FUNC_1 (struct team*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct team *VAR_0, struct team_port *VAR_1)
{
 if (FUNC_1(VAR_0)->active_port == VAR_1) {
  FUNC_0(FUNC_1(VAR_0)->active_port, ((void*)0));
  FUNC_2(FUNC_1(VAR_0)->ap_opt_inst_info);
 }
}
