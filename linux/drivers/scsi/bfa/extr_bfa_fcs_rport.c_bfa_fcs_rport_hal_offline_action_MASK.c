
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct TYPE_4__ {int offlines; } ;
struct bfa_fcs_rport_s {int pid; int itnim; struct bfa_fcs_lport_s* port; int pwwn; TYPE_2__ stats; int bfa_rport; } ;
struct bfa_fcs_lport_s {TYPE_1__* fcs; } ;
struct TYPE_3__ {scalar_t__ bfad; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct bfad_s*,int ,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bfa_fcs_lport_s*) ;
 scalar_t__ FUNC_4 (struct bfa_fcs_lport_s*) ;
 scalar_t__ FUNC_5 (struct bfa_fcs_lport_s*) ;
 int FUNC_6 (struct bfa_fcs_rport_s*) ;
 int FUNC_7 (struct bfa_fcs_rport_s*,int ,int *) ;
 int FUNC_8 (struct bfa_fcs_rport_s*) ;
 int VAR_6 ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static void
FUNC_10(struct bfa_fcs_rport_s *VAR_7)
{
 struct bfa_fcs_lport_s *VAR_8 = VAR_7->port;
 struct bfad_s *VAR_9 = (struct bfad_s *)VAR_8->fcs->bfad;
 char VAR_10[VAR_2];
 char VAR_11[VAR_2];

 if (!VAR_7->bfa_rport) {
  FUNC_8(VAR_7);
  return;
 }

 VAR_7->stats.offlines++;

 FUNC_9(VAR_10, FUNC_3(VAR_8));
 FUNC_9(VAR_11, VAR_7->pwwn);
 if (!FUNC_0(VAR_7->pid)) {
  if (FUNC_5(VAR_7->port) == VAR_3) {
   FUNC_1(VAR_4, VAR_9, VAR_6,
    "Remote port (WWN = %s) connectivity lost for "
    "logical port (WWN = %s)\n",
    VAR_11, VAR_10);
   FUNC_7(VAR_7,
    VAR_0, ((void*)0));
  } else {
   FUNC_1(VAR_5, VAR_9, VAR_6,
    "Remote port (WWN = %s) offlined by "
    "logical port (WWN = %s)\n",
    VAR_11, VAR_10);
   FUNC_7(VAR_7,
    VAR_1, ((void*)0));
  }
 }

 if (FUNC_4(VAR_8)) {
  FUNC_2(VAR_7->itnim);
  if (!FUNC_0(VAR_7->pid))
   FUNC_6(VAR_7);
 }
}
