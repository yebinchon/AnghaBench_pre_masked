
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset_stats_cbarg; int (* reset_stats_cbfn ) (int ,int) ;} ;
struct bfa_cee {int reset_stats_status; int reset_stats_pending; TYPE_1__ cbfn; } ;
typedef enum bfa_status { ____Placeholder_bfa_status } bfa_status ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct bfa_cee *VAR_0, enum bfa_status VAR_1)
{
 VAR_0->reset_stats_status = VAR_1;
 VAR_0->reset_stats_pending = 0;
 if (VAR_0->cbfn.reset_stats_cbfn)
  VAR_0->cbfn.reset_stats_cbfn(VAR_0->cbfn.reset_stats_cbarg, VAR_1);
}
