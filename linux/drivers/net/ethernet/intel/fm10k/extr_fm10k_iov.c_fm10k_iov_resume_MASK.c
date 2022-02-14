
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


struct pci_dev {int dummy; } ;
struct TYPE_11__ {int (* connect ) (struct fm10k_hw*,TYPE_6__*) ;} ;
struct TYPE_12__ {TYPE_5__ ops; } ;
struct fm10k_vf_info {TYPE_6__ mbx; } ;
struct fm10k_iov_data {int num_vfs; struct fm10k_vf_info* vf_info; } ;
struct TYPE_9__ {int (* assign_default_mac_vlan ) (struct fm10k_hw*,struct fm10k_vf_info*) ;int (* set_lport ) (struct fm10k_hw*,struct fm10k_vf_info*,int,int ) ;int (* assign_resources ) (struct fm10k_hw*,int,int) ;} ;
struct TYPE_10__ {TYPE_3__ ops; scalar_t__ total_vfs; } ;
struct TYPE_7__ {int (* configure_dglort_map ) (struct fm10k_hw*,struct fm10k_dglort_cfg*) ;} ;
struct TYPE_8__ {int dglort_map; TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_4__ iov; TYPE_2__ mac; } ;
struct fm10k_intfc {struct fm10k_hw hw; struct fm10k_iov_data* iov_data; } ;
struct fm10k_dglort_cfg {int glort; int inner_rss; int vsi_b; void* vsi_l; int queue_b; void* rss_l; int idx; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct fm10k_hw*) ;
 int FUNC_3 (struct fm10k_hw*,int ) ;
 struct fm10k_intfc* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct fm10k_hw*,int,int) ;
 int FUNC_6 (struct fm10k_hw*,struct fm10k_dglort_cfg*) ;
 int FUNC_7 (struct fm10k_hw*,struct fm10k_vf_info*,int,int ) ;
 int FUNC_8 (struct fm10k_hw*,struct fm10k_vf_info*) ;
 int FUNC_9 (struct fm10k_hw*,TYPE_6__*) ;

int FUNC_10(struct pci_dev *VAR_5)
{
 struct fm10k_intfc *VAR_6 = FUNC_4(VAR_5);
 struct fm10k_iov_data *VAR_7 = VAR_6->iov_data;
 struct fm10k_dglort_cfg VAR_8 = { 0 };
 struct fm10k_hw *VAR_9 = &VAR_6->hw;
 int VAR_10, VAR_11;


 VAR_10 = VAR_7 ? VAR_7->num_vfs : 0;


 if (!VAR_7)
  return -VAR_0;





 FUNC_1(VAR_5);


 VAR_9->iov.ops.assign_resources(VAR_9, VAR_10, VAR_10);


 VAR_8.glort = VAR_9->mac.dglort_map & VAR_2;
 VAR_8.idx = VAR_4;
 VAR_8.inner_rss = 1;
 VAR_8.rss_l = FUNC_0(FUNC_2(VAR_9) - 1);
 VAR_8.queue_b = FUNC_3(VAR_9, 0);
 VAR_8.vsi_l = FUNC_0(VAR_9->iov.total_vfs - 1);
 VAR_8.vsi_b = 1;

 VAR_9->mac.ops.configure_dglort_map(VAR_9, &VAR_8);


 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  struct fm10k_vf_info *VAR_12 = &VAR_7->vf_info[VAR_11];


  if (VAR_11 == (~VAR_9->mac.dglort_map >> VAR_1))
   break;


  VAR_9->iov.ops.set_lport(VAR_9, VAR_12, VAR_11,
          VAR_3);


  VAR_9->iov.ops.assign_default_mac_vlan(VAR_9, VAR_12);


  VAR_12->mbx.ops.connect(VAR_9, &VAR_12->mbx);
 }

 return 0;
}
