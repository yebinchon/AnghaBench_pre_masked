
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int symname; } ;
struct TYPE_4__ {TYPE_1__ sym_name; } ;
struct bfa_fcs_lport_s {TYPE_2__ port_cfg; } ;


 int FUNC_0 (struct bfa_fcs_lport_s*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(struct bfa_fcs_lport_s *VAR_1,
    char *VAR_2)
{
 FUNC_3(VAR_1->port_cfg.sym_name.symname, VAR_2);

 if (FUNC_2(VAR_1, VAR_0))
  FUNC_1(
   FUNC_0(VAR_1), ((void*)0));
}
