
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfa_fcs_rport_s {int dummy; } ;
struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_bsg_rport_attr_s {int status; int attr; int rpwwn; scalar_t__ pid; int pwwn; int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfa_fcs_lport_s* FUNC_0 (int *,int ,int ) ;
 struct bfa_fcs_rport_s* FUNC_1 (struct bfa_fcs_lport_s*,int ,scalar_t__) ;
 int FUNC_2 (struct bfa_fcs_rport_s*,int *) ;
 struct bfa_fcs_rport_s* FUNC_3 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_4 (struct bfad_s*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int
FUNC_7(struct bfad_s *VAR_3, void *VAR_4)
{
 struct bfa_bsg_rport_attr_s *VAR_5 = (struct bfa_bsg_rport_attr_s *)VAR_4;
 struct bfa_fcs_lport_s *VAR_6;
 struct bfa_fcs_rport_s *VAR_7;
 unsigned long VAR_8;

 FUNC_5(&VAR_3->bfad_lock, VAR_8);
 VAR_6 = FUNC_0(&VAR_3->bfa_fcs,
    VAR_5->vf_id, VAR_5->pwwn);
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_3, 0);
  FUNC_6(&VAR_3->bfad_lock, VAR_8);
  VAR_5->status = VAR_1;
  goto out;
 }

 if (VAR_5->pid)
  VAR_7 = FUNC_1(VAR_6,
      VAR_5->rpwwn, VAR_5->pid);
 else
  VAR_7 = FUNC_3(VAR_6, VAR_5->rpwwn);
 if (VAR_7 == ((void*)0)) {
  FUNC_4(VAR_3, 0);
  FUNC_6(&VAR_3->bfad_lock, VAR_8);
  VAR_5->status = VAR_2;
  goto out;
 }

 FUNC_2(VAR_7, &VAR_5->attr);
 FUNC_6(&VAR_3->bfad_lock, VAR_8);
 VAR_5->status = VAR_0;
out:
 return 0;
}
