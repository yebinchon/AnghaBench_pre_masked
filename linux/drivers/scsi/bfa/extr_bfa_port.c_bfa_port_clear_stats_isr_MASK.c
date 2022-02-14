
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_port_s {int (* stats_cbfn ) (int ,int ) ;int stats_cbarg; int stats_reset_time; int stats_busy; int stats_status; } ;
typedef int bfa_status_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_port_s *VAR_1, bfa_status_t VAR_2)
{
 VAR_1->stats_status = VAR_2;
 VAR_1->stats_busy = VAR_0;




 VAR_1->stats_reset_time = FUNC_0();

 if (VAR_1->stats_cbfn) {
  VAR_1->stats_cbfn(VAR_1->stats_cbarg, VAR_2);
  VAR_1->stats_cbfn = ((void*)0);
 }
}
