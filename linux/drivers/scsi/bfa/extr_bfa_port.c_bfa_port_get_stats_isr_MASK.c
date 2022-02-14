
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union bfa_port_stats_u {int dummy; } bfa_port_stats_u ;
struct TYPE_6__ {int kva; } ;
struct bfa_port_s {int (* stats_cbfn ) (int ,scalar_t__) ;int stats_cbarg; scalar_t__ stats_reset_time; TYPE_3__* stats; TYPE_2__ stats_dma; int stats_busy; scalar_t__ stats_status; } ;
typedef scalar_t__ bfa_status_t ;
struct TYPE_5__ {scalar_t__ secs_reset; } ;
struct TYPE_7__ {TYPE_1__ fc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bfa_port_s*,TYPE_3__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct bfa_port_s *VAR_2, bfa_status_t VAR_3)
{
 VAR_2->stats_status = VAR_3;
 VAR_2->stats_busy = VAR_0;

 if (VAR_3 == VAR_1) {
  FUNC_2(VAR_2->stats, VAR_2->stats_dma.kva,
         sizeof(union bfa_port_stats_u));
  FUNC_0(VAR_2, VAR_2->stats);

  VAR_2->stats->fc.secs_reset = FUNC_1() - VAR_2->stats_reset_time;
 }

 if (VAR_2->stats_cbfn) {
  VAR_2->stats_cbfn(VAR_2->stats_cbarg, VAR_3);
  VAR_2->stats_cbfn = ((void*)0);
 }
}
