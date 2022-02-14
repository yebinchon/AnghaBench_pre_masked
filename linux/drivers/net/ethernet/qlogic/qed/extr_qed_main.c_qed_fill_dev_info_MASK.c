
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ tun_cls; scalar_t__ b_mode_enabled; } ;
struct TYPE_10__ {scalar_t__ tun_cls; scalar_t__ b_mode_enabled; } ;
struct TYPE_9__ {scalar_t__ tun_cls; scalar_t__ b_mode_enabled; } ;
struct TYPE_8__ {scalar_t__ tun_cls; scalar_t__ b_mode_enabled; } ;
struct TYPE_7__ {scalar_t__ tun_cls; scalar_t__ b_mode_enabled; } ;
struct qed_tunnel_info {TYPE_5__ ip_geneve; TYPE_4__ l2_geneve; TYPE_3__ ip_gre; TYPE_2__ l2_gre; TYPE_1__ vxlan; } ;
struct qed_ptt {int dummy; } ;
struct qed_hw_info {scalar_t__ b_wol_support; int mtu; int hw_mac_addr; } ;
struct qed_hwfn {int abs_pf_id; struct qed_hw_info hw_info; } ;
struct qed_dev_info {int vxlan_enable; int gre_enable; int geneve_enable; int tx_switching; int wol_support; int mtu; int mfw_rev; int flash_size; int mbi_version; int fw_eng; int fw_rev; int fw_minor; int fw_major; int abs_pf_id; int smart_an; int b_inter_pf_switch; int hw_mac; int dev_type; int rdma_supported; int pci_irq; int pci_mem_end; int pci_mem_start; int num_hwfns; } ;
struct TYPE_12__ {int irq; int mem_end; int mem_start; } ;
struct qed_dev {int * hwfns; int mf_bits; int type; TYPE_6__ pci_params; int num_hwfns; struct qed_tunnel_info tunnel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct qed_dev*) ;
 int FUNC_1 (struct qed_hwfn*) ;
 struct qed_hwfn* FUNC_2 (struct qed_dev*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct qed_dev_info*,int ,int) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int *) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,int *) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,int *,int *) ;
 int FUNC_8 (struct qed_hwfn*) ;
 struct qed_ptt* FUNC_9 (struct qed_hwfn*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_11 (int *,int *,int *,int *,int *) ;
 int FUNC_12 (int ,int *) ;

int FUNC_13(struct qed_dev *VAR_7,
        struct qed_dev_info *VAR_8)
{
 struct qed_hwfn *VAR_9 = FUNC_2(VAR_7);
 struct qed_hw_info *VAR_10 = &VAR_9->hw_info;
 struct qed_tunnel_info *VAR_11 = &VAR_7->tunnel;
 struct qed_ptt *VAR_12;

 FUNC_4(VAR_8, 0, sizeof(struct qed_dev_info));

 if (VAR_11->vxlan.tun_cls == VAR_5 &&
     VAR_11->vxlan.b_mode_enabled)
  VAR_8->vxlan_enable = 1;

 if (VAR_11->l2_gre.b_mode_enabled && VAR_11->ip_gre.b_mode_enabled &&
     VAR_11->l2_gre.tun_cls == VAR_5 &&
     VAR_11->ip_gre.tun_cls == VAR_5)
  VAR_8->gre_enable = 1;

 if (VAR_11->l2_geneve.b_mode_enabled && VAR_11->ip_geneve.b_mode_enabled &&
     VAR_11->l2_geneve.tun_cls == VAR_5 &&
     VAR_11->ip_geneve.tun_cls == VAR_5)
  VAR_8->geneve_enable = 1;

 VAR_8->num_hwfns = VAR_7->num_hwfns;
 VAR_8->pci_mem_start = VAR_7->pci_params.mem_start;
 VAR_8->pci_mem_end = VAR_7->pci_params.mem_end;
 VAR_8->pci_irq = VAR_7->pci_params.irq;
 VAR_8->rdma_supported = FUNC_1(VAR_9);
 VAR_8->dev_type = VAR_7->type;
 FUNC_3(VAR_8->hw_mac, VAR_10->hw_mac_addr);

 if (FUNC_0(VAR_7)) {
  VAR_8->fw_major = VAR_1;
  VAR_8->fw_minor = VAR_2;
  VAR_8->fw_rev = VAR_3;
  VAR_8->fw_eng = VAR_0;
  VAR_8->b_inter_pf_switch = FUNC_12(VAR_4,
             &VAR_7->mf_bits);
  VAR_8->tx_switching = 1;

  if (VAR_10->b_wol_support == VAR_6)
   VAR_8->wol_support = 1;

  VAR_8->smart_an = FUNC_8(VAR_9);

  VAR_8->abs_pf_id = FUNC_2(VAR_7)->abs_pf_id;
 } else {
  FUNC_11(&VAR_7->hwfns[0], &VAR_8->fw_major,
          &VAR_8->fw_minor, &VAR_8->fw_rev,
          &VAR_8->fw_eng);
 }

 if (FUNC_0(VAR_7)) {
  VAR_12 = FUNC_9(FUNC_2(VAR_7));
  if (VAR_12) {
   FUNC_7(FUNC_2(VAR_7), VAR_12,
         &VAR_8->mfw_rev, ((void*)0));

   FUNC_6(FUNC_2(VAR_7), VAR_12,
         &VAR_8->mbi_version);

   FUNC_5(FUNC_2(VAR_7), VAR_12,
            &VAR_8->flash_size);

   FUNC_10(FUNC_2(VAR_7), VAR_12);
  }
 } else {
  FUNC_7(FUNC_2(VAR_7), ((void*)0),
        &VAR_8->mfw_rev, ((void*)0));
 }

 VAR_8->mtu = VAR_10->mtu;

 return 0;
}
