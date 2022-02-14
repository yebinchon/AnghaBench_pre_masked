
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_lport_s {int dummy; } ;
struct TYPE_2__ {struct bfa_fcs_lport_s bport; } ;
struct bfa_fcs_s {TYPE_1__ fabric; } ;



struct bfa_fcs_lport_s *
FUNC_0(struct bfa_fcs_s *VAR_0)
{
 return &VAR_0->fabric.bport;
}
