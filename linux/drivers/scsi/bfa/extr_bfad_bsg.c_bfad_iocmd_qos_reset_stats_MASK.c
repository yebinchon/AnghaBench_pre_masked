
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ioc; } ;
struct bfad_s {int bfad_lock; TYPE_2__ bfa; } ;
struct bfad_hal_comp {scalar_t__ status; int comp; } ;
struct TYPE_4__ {scalar_t__ topology; } ;
struct bfa_fcport_s {scalar_t__ topology; TYPE_1__ cfg; } ;
struct bfa_cb_pending_q_s {int dummy; } ;
struct bfa_bsg_gen_s {scalar_t__ status; } ;
typedef int bfa_cb_cbfn_t ;


 struct bfa_fcport_s* FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,struct bfa_cb_pending_q_s*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bfa_cb_pending_q_s*,int ,struct bfad_hal_comp*,int *) ;
 int FUNC_5 (struct bfad_s*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

int
FUNC_10(struct bfad_s *VAR_4, void *VAR_5)
{
 struct bfa_bsg_gen_s *VAR_6 = (struct bfa_bsg_gen_s *)VAR_5;
 struct bfad_hal_comp VAR_7;
 unsigned long VAR_8;
 struct bfa_cb_pending_q_s VAR_9;
 struct bfa_fcport_s *VAR_10 = FUNC_0(&VAR_4->bfa);

 FUNC_6(&VAR_7.comp);
 FUNC_4(&VAR_9, (bfa_cb_cbfn_t)VAR_3,
      &VAR_7, ((void*)0));

 FUNC_7(&VAR_4->bfad_lock, VAR_8);
 FUNC_1(!FUNC_3(&VAR_4->bfa.ioc));
 if ((VAR_10->cfg.topology == VAR_0) &&
  (VAR_10->topology == VAR_0))
  VAR_6->status = VAR_2;
 else
  VAR_6->status = FUNC_2(&VAR_4->bfa, &VAR_9);
 FUNC_8(&VAR_4->bfad_lock, VAR_8);
 if (VAR_6->status != VAR_1) {
  FUNC_5(VAR_4, VAR_6->status);
  goto out;
 }
 FUNC_9(&VAR_7.comp);
 VAR_6->status = VAR_7.status;
out:
 return 0;
}
