
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port_id; } ;
struct TYPE_4__ {TYPE_1__ ioc; } ;
struct bfad_s {int bfad_lock; TYPE_2__ bfa; } ;
struct bfad_hal_comp {scalar_t__ status; int comp; } ;
struct bfa_ethboot_cfg_s {int dummy; } ;
struct bfa_bsg_ethboot_s {scalar_t__ status; int cfg; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int,int ,int ,struct bfad_hal_comp*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct bfad_s *VAR_3, void *VAR_4)
{
 struct bfa_bsg_ethboot_s *VAR_5 = (struct bfa_bsg_ethboot_s *)VAR_4;
 struct bfad_hal_comp VAR_6;
 unsigned long VAR_7;

 FUNC_2(&VAR_6.comp);
 FUNC_3(&VAR_3->bfad_lock, VAR_7);
 VAR_5->status = FUNC_1(FUNC_0(&VAR_3->bfa),
    VAR_0,
    VAR_3->bfa.ioc.port_id, &VAR_5->cfg,
    sizeof(struct bfa_ethboot_cfg_s), 0,
    VAR_2, &VAR_6);
 FUNC_4(&VAR_3->bfad_lock, VAR_7);
 if (VAR_5->status != VAR_1)
  goto out;
 FUNC_5(&VAR_6.comp);
 VAR_5->status = VAR_6.status;
out:
 return 0;
}
