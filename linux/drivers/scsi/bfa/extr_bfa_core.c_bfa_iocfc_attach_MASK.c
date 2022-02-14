
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* submod_enabled; int op_status; void* cb_reqd; } ;
struct TYPE_6__ {int timer_q; } ;
struct bfa_ioc_s {int trcmod; } ;
struct bfa_s {TYPE_4__ iocfc; int * reqq_waitq; int comp_q; TYPE_3__ timer_mod; struct bfa_ioc_s ioc; int trcmod; } ;
struct bfa_pcidev_s {int dummy; } ;
struct bfa_iocfc_cfg_s {int dummy; } ;
struct TYPE_5__ {int reset_cbfn; int hbfail_cbfn; int disable_cbfn; int enable_cbfn; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (struct bfa_ioc_s*,struct bfa_s*,TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (struct bfa_ioc_s*,int ) ;
 int FUNC_4 (struct bfa_ioc_s*,struct bfa_pcidev_s*,int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct bfa_s*,void*,struct bfa_iocfc_cfg_s*,struct bfa_pcidev_s*) ;
 int FUNC_6 (struct bfa_s*,struct bfa_iocfc_cfg_s*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_7(struct bfa_s *VAR_11, void *VAR_12, struct bfa_iocfc_cfg_s *VAR_13,
   struct bfa_pcidev_s *VAR_14)
{
 int VAR_15;
 struct bfa_ioc_s *VAR_16 = &VAR_11->ioc;

 VAR_4.enable_cbfn = VAR_6;
 VAR_4.disable_cbfn = VAR_5;
 VAR_4.hbfail_cbfn = VAR_7;
 VAR_4.reset_cbfn = VAR_8;

 VAR_16->trcmod = VAR_11->trcmod;
 FUNC_2(&VAR_11->ioc, VAR_11, &VAR_4, &VAR_11->timer_mod);

 FUNC_4(&VAR_11->ioc, VAR_14, VAR_3);
 FUNC_3(&VAR_11->ioc, VAR_10);

 FUNC_5(VAR_11, VAR_12, VAR_13, VAR_14);
 FUNC_6(VAR_11, VAR_13);
 FUNC_0(&VAR_11->timer_mod.timer_q);

 FUNC_0(&VAR_11->comp_q);
 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++)
  FUNC_0(&VAR_11->reqq_waitq[VAR_15]);

 VAR_11->iocfc.cb_reqd = VAR_0;
 VAR_11->iocfc.op_status = VAR_1;
 VAR_11->iocfc.submod_enabled = VAR_0;

 FUNC_1(&VAR_11->iocfc, VAR_9);
}
