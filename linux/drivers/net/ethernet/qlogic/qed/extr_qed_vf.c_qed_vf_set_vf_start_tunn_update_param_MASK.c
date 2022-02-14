
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int b_update_mode; scalar_t__ b_mode_enabled; } ;
struct TYPE_8__ {int b_update_mode; scalar_t__ b_mode_enabled; } ;
struct TYPE_7__ {int b_update_mode; scalar_t__ b_mode_enabled; } ;
struct TYPE_6__ {int b_update_mode; scalar_t__ b_mode_enabled; } ;
struct TYPE_10__ {int b_update_mode; scalar_t__ b_mode_enabled; } ;
struct qed_tunnel_info {int b_update_rx_cls; int b_update_tx_cls; TYPE_4__ ip_gre; TYPE_3__ l2_gre; TYPE_2__ ip_geneve; TYPE_1__ l2_geneve; TYPE_5__ vxlan; } ;



void FUNC_0(struct qed_tunnel_info *VAR_0)
{
 if (VAR_0->vxlan.b_mode_enabled)
  VAR_0->vxlan.b_update_mode = 1;
 if (VAR_0->l2_geneve.b_mode_enabled)
  VAR_0->l2_geneve.b_update_mode = 1;
 if (VAR_0->ip_geneve.b_mode_enabled)
  VAR_0->ip_geneve.b_update_mode = 1;
 if (VAR_0->l2_gre.b_mode_enabled)
  VAR_0->l2_gre.b_update_mode = 1;
 if (VAR_0->ip_gre.b_mode_enabled)
  VAR_0->ip_gre.b_update_mode = 1;

 VAR_0->b_update_rx_cls = 1;
 VAR_0->b_update_tx_cls = 1;
}
