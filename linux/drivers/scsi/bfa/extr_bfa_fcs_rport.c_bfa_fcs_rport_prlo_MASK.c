
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int reply_oxid; int prlo; int pid; int fcs; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct bfa_fcs_rport_s *VAR_2, __be16 VAR_3)
{
 FUNC_1(VAR_2->fcs, VAR_2->pid);

 VAR_2->prlo = VAR_0;
 VAR_2->reply_oxid = VAR_3;
 FUNC_0(VAR_2, VAR_1);
}
