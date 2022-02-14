
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct fm10k_vf_info {int glort; } ;
struct fm10k_iov_data {int num_vfs; struct fm10k_vf_info* vf_info; } ;
struct TYPE_3__ {int (* reset_lport ) (struct fm10k_hw*,struct fm10k_vf_info*) ;int (* reset_resources ) (struct fm10k_hw*,struct fm10k_vf_info*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ iov; } ;
struct fm10k_intfc {struct fm10k_hw hw; struct fm10k_iov_data* iov_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct fm10k_intfc*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct fm10k_hw*,int ,int ) ;
 struct fm10k_intfc* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct fm10k_hw*,struct fm10k_vf_info*) ;
 int FUNC_5 (struct fm10k_hw*,struct fm10k_vf_info*) ;

void FUNC_6(struct pci_dev *VAR_2)
{
 struct fm10k_intfc *VAR_3 = FUNC_3(VAR_2);
 struct fm10k_iov_data *VAR_4 = VAR_3->iov_data;
 struct fm10k_hw *VAR_5 = &VAR_3->hw;
 int VAR_6, VAR_7;


 VAR_6 = VAR_4 ? VAR_4->num_vfs : 0;


 FUNC_2(VAR_5, FUNC_0(VAR_1),
   VAR_0);


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  struct fm10k_vf_info *VAR_8 = &VAR_4->vf_info[VAR_7];

  VAR_5->iov.ops.reset_resources(VAR_5, VAR_8);
  VAR_5->iov.ops.reset_lport(VAR_5, VAR_8);
  FUNC_1(VAR_3, VAR_8->glort, 0);
 }
}
