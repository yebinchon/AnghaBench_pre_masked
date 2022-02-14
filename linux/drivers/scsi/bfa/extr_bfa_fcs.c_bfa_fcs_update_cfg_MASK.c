
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_lport_cfg_s {int pwwn; int nwwn; } ;
struct bfa_ioc_s {TYPE_1__* attr; } ;
struct TYPE_6__ {struct bfa_lport_cfg_s port_cfg; } ;
struct bfa_fcs_fabric_s {TYPE_4__* fcs; TYPE_2__ bport; } ;
struct bfa_fcs_s {struct bfa_fcs_fabric_s fabric; } ;
struct TYPE_8__ {TYPE_3__* bfa; } ;
struct TYPE_7__ {struct bfa_ioc_s ioc; } ;
struct TYPE_5__ {int pwwn; int nwwn; } ;



void
FUNC_0(struct bfa_fcs_s *VAR_0)
{
 struct bfa_fcs_fabric_s *VAR_1 = &VAR_0->fabric;
 struct bfa_lport_cfg_s *VAR_2 = &VAR_1->bport.port_cfg;
 struct bfa_ioc_s *VAR_3 = &VAR_1->fcs->bfa->ioc;

 VAR_2->nwwn = VAR_3->attr->nwwn;
 VAR_2->pwwn = VAR_3->attr->pwwn;
}
