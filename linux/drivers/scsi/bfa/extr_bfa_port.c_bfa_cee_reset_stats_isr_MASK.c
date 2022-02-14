
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset_stats_cbarg; int (* reset_stats_cbfn ) (int ,int ) ;} ;
struct bfa_cee_s {TYPE_1__ cbfn; int reset_stats_pending; int reset_stats_status; } ;
typedef int bfa_status_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_cee_s *VAR_1, bfa_status_t VAR_2)
{
 VAR_1->reset_stats_status = VAR_2;
 VAR_1->reset_stats_pending = VAR_0;
 if (VAR_1->cbfn.reset_stats_cbfn)
  VAR_1->cbfn.reset_stats_cbfn(VAR_1->cbfn.reset_stats_cbarg, VAR_2);
}
