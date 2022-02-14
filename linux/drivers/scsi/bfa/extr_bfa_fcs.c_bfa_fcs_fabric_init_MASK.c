
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bfa_lport_cfg_s {int pwwn; int nwwn; int roles; } ;
struct TYPE_6__ {struct bfa_lport_cfg_s port_cfg; } ;
struct bfa_fcs_fabric_s {TYPE_5__* fcs; TYPE_1__ bport; } ;
struct TYPE_10__ {TYPE_4__* bfa; } ;
struct TYPE_8__ {TYPE_2__* attr; } ;
struct TYPE_9__ {TYPE_3__ ioc; } ;
struct TYPE_7__ {int pwwn; int nwwn; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct bfa_fcs_fabric_s *VAR_1)
{
 struct bfa_lport_cfg_s *VAR_2 = &VAR_1->bport.port_cfg;

 VAR_2->roles = VAR_0;
 VAR_2->nwwn = VAR_1->fcs->bfa->ioc.attr->nwwn;
 VAR_2->pwwn = VAR_1->fcs->bfa->ioc.attr->pwwn;
}
