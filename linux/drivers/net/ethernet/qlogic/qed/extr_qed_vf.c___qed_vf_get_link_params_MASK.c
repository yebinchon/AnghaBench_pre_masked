
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int forced_tx; int forced_rx; int autoneg; } ;
struct TYPE_3__ {int forced_speed; int advertised_speeds; int autoneg; } ;
struct qed_mcp_link_params {int loopback_mode; TYPE_2__ pause; TYPE_1__ speed; } ;
struct qed_hwfn {int dummy; } ;
struct qed_bulletin_content {int req_loopback; int req_forced_tx; int req_forced_rx; int req_autoneg_pause; int req_forced_speed; int req_adv_speed; int req_autoneg; } ;


 int FUNC_0 (struct qed_mcp_link_params*,int ,int) ;

void FUNC_1(struct qed_hwfn *VAR_0,
         struct qed_mcp_link_params *VAR_1,
         struct qed_bulletin_content *VAR_2)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->speed.autoneg = VAR_2->req_autoneg;
 VAR_1->speed.advertised_speeds = VAR_2->req_adv_speed;
 VAR_1->speed.forced_speed = VAR_2->req_forced_speed;
 VAR_1->pause.autoneg = VAR_2->req_autoneg_pause;
 VAR_1->pause.forced_rx = VAR_2->req_forced_rx;
 VAR_1->pause.forced_tx = VAR_2->req_forced_tx;
 VAR_1->loopback_mode = VAR_2->req_loopback;
}
