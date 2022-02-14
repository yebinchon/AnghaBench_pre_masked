
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct TYPE_4__ {int onlines; } ;
struct bfa_fcs_rport_s {int pid; int pwwn; int itnim; int fcs; TYPE_2__ stats; struct bfa_fcs_lport_s* port; } ;
struct bfa_fcs_lport_s {TYPE_1__* fcs; } ;
struct TYPE_3__ {scalar_t__ bfad; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct bfad_s*,int ,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bfa_fcs_lport_s*) ;
 scalar_t__ FUNC_4 (struct bfa_fcs_lport_s*) ;
 int FUNC_5 (struct bfa_fcs_rport_s*) ;
 int FUNC_6 (struct bfa_fcs_rport_s*,int ,int *) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static void
FUNC_10(struct bfa_fcs_rport_s *VAR_4)
{
 struct bfa_fcs_lport_s *VAR_5 = VAR_4->port;
 struct bfad_s *VAR_6 = (struct bfad_s *)VAR_5->fcs->bfad;
 char VAR_7[VAR_1];
 char VAR_8[VAR_1];

 VAR_4->stats.onlines++;

 if ((!VAR_4->pid) || (!VAR_4->pwwn)) {
  FUNC_8(VAR_4->fcs, VAR_4->pid);
  FUNC_7(VAR_4->fcs, VAR_4->pid);
 }

 if (FUNC_4(VAR_5)) {
  FUNC_2(VAR_4->itnim);
  if (!FUNC_0(VAR_4->pid))
   FUNC_5(VAR_4);
 };

 FUNC_9(VAR_7, FUNC_3(VAR_5));
 FUNC_9(VAR_8, VAR_4->pwwn);
 if (!FUNC_0(VAR_4->pid)) {
  FUNC_1(VAR_2, VAR_6, VAR_3,
  "Remote port (WWN = %s) online for logical port (WWN = %s)\n",
  VAR_8, VAR_7);
  FUNC_6(VAR_4, VAR_0, ((void*)0));
 }
}
