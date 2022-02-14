
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ablk; } ;
struct TYPE_5__ {TYPE_1__ modules; } ;
struct bfad_s {int bfad_lock; TYPE_2__ bfa; } ;
struct bfad_hal_comp {scalar_t__ status; int comp; } ;
struct TYPE_6__ {int max_vf; int max_pf; int mode; } ;
struct bfa_bsg_adapter_cfg_mode_s {scalar_t__ status; TYPE_3__ cfg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ,struct bfad_hal_comp*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct bfad_s *VAR_2, void *VAR_3)
{
 struct bfa_bsg_adapter_cfg_mode_s *VAR_4 =
   (struct bfa_bsg_adapter_cfg_mode_s *)VAR_3;
 struct bfad_hal_comp VAR_5;
 unsigned long VAR_6 = 0;

 FUNC_1(&VAR_5.comp);
 FUNC_2(&VAR_2->bfad_lock, VAR_6);
 VAR_4->status = FUNC_0(&VAR_2->bfa.modules.ablk,
    VAR_4->cfg.mode, VAR_4->cfg.max_pf,
    VAR_4->cfg.max_vf, VAR_1, &VAR_5);
 FUNC_3(&VAR_2->bfad_lock, VAR_6);
 if (VAR_4->status != VAR_0)
  goto out;

 FUNC_4(&VAR_5.comp);
 VAR_4->status = VAR_5.status;
out:
 return 0;
}
