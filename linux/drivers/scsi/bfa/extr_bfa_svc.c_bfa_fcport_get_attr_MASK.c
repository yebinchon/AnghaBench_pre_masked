
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* attr; } ;
struct bfa_s {TYPE_2__ ioc; } ;
struct bfa_port_cfg_s {int dummy; } ;
struct TYPE_9__ {int q_depth; int path_tov; int trunked; int topology; int speed; } ;
struct bfa_port_attr_s {int fcoe_vlan; int port_state; int fec_state; TYPE_4__ pport_cfg; int link_e2e_beacon; int beacon; int topology; int cos_supported; int speed; int speed_supported; int factorynwwn; int factorypwwn; int pwwn; int nwwn; } ;
struct TYPE_10__ {int trunked; int topology; int speed; } ;
struct bfa_fcport_s {int fcoe_vlan; TYPE_3__* bfa; int fec_state; int sm; int link_e2e_beacon; int beacon; TYPE_5__ cfg; int topology; int speed; int speed_sup; int pwwn; int nwwn; } ;
struct TYPE_8__ {int ioc; } ;
struct TYPE_6__ {int mfg_nwwn; int mfg_pwwn; } ;


 struct bfa_fcport_s* FUNC_0 (struct bfa_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bfa_s*) ;
 int FUNC_2 (struct bfa_s*) ;
 scalar_t__ FUNC_3 (struct bfa_s*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*,int) ;
 int FUNC_8 (struct bfa_port_attr_s*,int ,int) ;

void
FUNC_9(struct bfa_s *VAR_5, struct bfa_port_attr_s *VAR_6)
{
 struct bfa_fcport_s *VAR_7 = FUNC_0(VAR_5);

 FUNC_8(VAR_6, 0, sizeof(struct bfa_port_attr_s));

 VAR_6->nwwn = VAR_7->nwwn;
 VAR_6->pwwn = VAR_7->pwwn;

 VAR_6->factorypwwn = VAR_5->ioc.attr->mfg_pwwn;
 VAR_6->factorynwwn = VAR_5->ioc.attr->mfg_nwwn;

 FUNC_7(&VAR_6->pport_cfg, &VAR_7->cfg,
  sizeof(struct bfa_port_cfg_s));

 VAR_6->pport_cfg.speed = VAR_7->cfg.speed;
 VAR_6->speed_supported = VAR_7->speed_sup;
 VAR_6->speed = VAR_7->speed;
 VAR_6->cos_supported = VAR_3;


 VAR_6->pport_cfg.topology = VAR_7->cfg.topology;
 VAR_6->topology = VAR_7->topology;
 VAR_6->pport_cfg.trunked = VAR_7->cfg.trunked;


 VAR_6->beacon = VAR_7->beacon;
 VAR_6->link_e2e_beacon = VAR_7->link_e2e_beacon;

 VAR_6->pport_cfg.path_tov = FUNC_1(VAR_5);
 VAR_6->pport_cfg.q_depth = FUNC_2(VAR_5);
 VAR_6->port_state = FUNC_6(VAR_4, VAR_7->sm);

 VAR_6->fec_state = VAR_7->fec_state;


 if (FUNC_3(VAR_5))
  VAR_6->port_state = VAR_2;
 else {
  if (FUNC_5(&VAR_7->bfa->ioc))
   VAR_6->port_state = VAR_1;
  else if (FUNC_4(&VAR_7->bfa->ioc))
   VAR_6->port_state = VAR_0;
 }


 VAR_6->fcoe_vlan = VAR_7->fcoe_vlan;
}
