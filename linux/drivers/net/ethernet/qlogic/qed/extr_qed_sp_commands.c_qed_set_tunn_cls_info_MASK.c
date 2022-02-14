
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int tun_cls; } ;
struct TYPE_9__ {int tun_cls; } ;
struct TYPE_8__ {int tun_cls; } ;
struct TYPE_7__ {int tun_cls; } ;
struct TYPE_6__ {int tun_cls; } ;
struct qed_tunnel_info {TYPE_5__ ip_geneve; TYPE_4__ l2_geneve; TYPE_3__ ip_gre; TYPE_2__ l2_gre; TYPE_1__ vxlan; int b_update_tx_cls; int b_update_rx_cls; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct qed_tunnel_info *VAR_0,
      struct qed_tunnel_info *VAR_1)
{
 int VAR_2;

 VAR_0->b_update_rx_cls = VAR_1->b_update_rx_cls;
 VAR_0->b_update_tx_cls = VAR_1->b_update_tx_cls;

 VAR_2 = FUNC_0(VAR_1->vxlan.tun_cls);
 VAR_0->vxlan.tun_cls = VAR_2;
 VAR_2 = FUNC_0(VAR_1->l2_gre.tun_cls);
 VAR_0->l2_gre.tun_cls = VAR_2;
 VAR_2 = FUNC_0(VAR_1->ip_gre.tun_cls);
 VAR_0->ip_gre.tun_cls = VAR_2;
 VAR_2 = FUNC_0(VAR_1->l2_geneve.tun_cls);
 VAR_0->l2_geneve.tun_cls = VAR_2;
 VAR_2 = FUNC_0(VAR_1->ip_geneve.tun_cls);
 VAR_0->ip_geneve.tun_cls = VAR_2;
}
