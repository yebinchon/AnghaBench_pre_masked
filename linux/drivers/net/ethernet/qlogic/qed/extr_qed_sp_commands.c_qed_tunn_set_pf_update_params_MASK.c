
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_tunnel_info {int b_update_rx_cls; int ip_gre; int l2_gre; int ip_geneve; int geneve_port; int l2_geneve; int vxlan_port; int vxlan; } ;
struct qed_hwfn {TYPE_1__* cdev; } ;
struct pf_update_tunnel_config {int update_rx_pf_clss; int tunnel_clss_ipgre; int tunnel_clss_l2gre; int tunnel_clss_ipgeneve; int geneve_udp_port; int set_geneve_udp_port_flg; int tunnel_clss_l2geneve; int vxlan_udp_port; int set_vxlan_udp_port_flg; int tunnel_clss_vxlan; } ;
struct TYPE_2__ {struct qed_tunnel_info tunnel; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct qed_tunnel_info*,struct qed_tunnel_info*,int) ;
 int FUNC_2 (int *,int *,int *,int *,int *) ;
 int FUNC_3 (struct qed_tunnel_info*,struct qed_tunnel_info*) ;
 int FUNC_4 (struct qed_tunnel_info*,struct qed_tunnel_info*) ;

__attribute__((used)) static void
FUNC_5(struct qed_hwfn *VAR_0,
         struct qed_tunnel_info *VAR_1,
         struct pf_update_tunnel_config *VAR_2)
{
 struct qed_tunnel_info *VAR_3 = &VAR_0->cdev->tunnel;

 FUNC_1(VAR_3, VAR_1, 0);
 FUNC_3(VAR_3, VAR_1);
 FUNC_4(VAR_3, VAR_1);

 FUNC_2(&VAR_2->tunnel_clss_vxlan,
        &VAR_3->vxlan,
        &VAR_2->set_vxlan_udp_port_flg,
        &VAR_2->vxlan_udp_port,
        &VAR_3->vxlan_port);

 FUNC_2(&VAR_2->tunnel_clss_l2geneve,
        &VAR_3->l2_geneve,
        &VAR_2->set_geneve_udp_port_flg,
        &VAR_2->geneve_udp_port,
        &VAR_3->geneve_port);

 FUNC_0(&VAR_2->tunnel_clss_ipgeneve,
          &VAR_3->ip_geneve);

 FUNC_0(&VAR_2->tunnel_clss_l2gre,
          &VAR_3->l2_gre);

 FUNC_0(&VAR_2->tunnel_clss_ipgre,
          &VAR_3->ip_gre);

 VAR_2->update_rx_pf_clss = VAR_3->b_update_rx_cls;
}
