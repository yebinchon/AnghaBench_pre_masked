
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct TYPE_2__ {scalar_t__ rpsc_speed; int assigned_speed; } ;
struct bfa_fcs_rport_s {scalar_t__ bfa_rport; TYPE_1__ rpf; } ;
struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_bsg_rport_set_speed_s {int status; int speed; int rpwwn; int pwwn; int vf_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bfa_fcs_lport_s* FUNC_0 (int *,int ,int ) ;
 struct bfa_fcs_rport_s* FUNC_1 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int
FUNC_5(struct bfad_s *VAR_4, void *VAR_5)
{
 struct bfa_bsg_rport_set_speed_s *VAR_6 =
    (struct bfa_bsg_rport_set_speed_s *)VAR_5;
 struct bfa_fcs_lport_s *VAR_7;
 struct bfa_fcs_rport_s *VAR_8;
 unsigned long VAR_9;

 FUNC_3(&VAR_4->bfad_lock, VAR_9);
 VAR_7 = FUNC_0(&VAR_4->bfa_fcs,
    VAR_6->vf_id, VAR_6->pwwn);
 if (VAR_7 == ((void*)0)) {
  FUNC_4(&VAR_4->bfad_lock, VAR_9);
  VAR_6->status = VAR_2;
  goto out;
 }

 VAR_8 = FUNC_1(VAR_7, VAR_6->rpwwn);
 if (VAR_8 == ((void*)0)) {
  FUNC_4(&VAR_4->bfad_lock, VAR_9);
  VAR_6->status = VAR_3;
  goto out;
 }

 VAR_8->rpf.assigned_speed = VAR_6->speed;

 if (VAR_8->rpf.rpsc_speed == VAR_0)
  if (VAR_8->bfa_rport)
   FUNC_2(VAR_8->bfa_rport, VAR_6->speed);
 FUNC_4(&VAR_4->bfad_lock, VAR_9);
 VAR_6->status = VAR_1;
out:
 return 0;
}
