
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfa_rport_stats_s {int dummy; } ;
struct bfa_rport_s {char stats; } ;
struct bfa_fcs_rport_s {int stats; } ;
struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_bsg_rport_reset_stats_s {int status; int rpwwn; int pwwn; int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfa_fcs_lport_s* FUNC_0 (int *,int ,int ) ;
 struct bfa_rport_s* FUNC_1 (struct bfa_fcs_rport_s*) ;
 struct bfa_fcs_rport_s* FUNC_2 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int
FUNC_6(struct bfad_s *VAR_3, void *VAR_4)
{
 struct bfa_bsg_rport_reset_stats_s *VAR_5 =
    (struct bfa_bsg_rport_reset_stats_s *)VAR_4;
 struct bfa_fcs_lport_s *VAR_6;
 struct bfa_fcs_rport_s *VAR_7;
 struct bfa_rport_s *VAR_8;
 unsigned long VAR_9;

 FUNC_4(&VAR_3->bfad_lock, VAR_9);
 VAR_6 = FUNC_0(&VAR_3->bfa_fcs,
    VAR_5->vf_id, VAR_5->pwwn);
 if (VAR_6 == ((void*)0)) {
  FUNC_5(&VAR_3->bfad_lock, VAR_9);
  VAR_5->status = VAR_1;
  goto out;
 }

 VAR_7 = FUNC_2(VAR_6, VAR_5->rpwwn);
 if (VAR_7 == ((void*)0)) {
  FUNC_5(&VAR_3->bfad_lock, VAR_9);
  VAR_5->status = VAR_2;
  goto out;
 }

 FUNC_3((char *)&VAR_7->stats, 0, sizeof(struct bfa_rport_stats_s));
 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  FUNC_3(&VAR_8->stats, 0, sizeof(VAR_8->stats));
 FUNC_5(&VAR_3->bfad_lock, VAR_9);
 VAR_5->status = VAR_0;
out:
 return 0;
}
