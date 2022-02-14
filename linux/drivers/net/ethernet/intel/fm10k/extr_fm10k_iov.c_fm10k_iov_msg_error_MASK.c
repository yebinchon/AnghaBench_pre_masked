
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct fm10k_vf_info {int vf_idx; } ;
struct fm10k_mbx_info {int dummy; } ;
struct fm10k_intfc {struct pci_dev* pdev; } ;
struct fm10k_hw {struct fm10k_intfc* back; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (struct fm10k_hw*,int**,struct fm10k_mbx_info*) ;

__attribute__((used)) static s32 FUNC_2(struct fm10k_hw *VAR_1, u32 **VAR_2,
          struct fm10k_mbx_info *VAR_3)
{
 struct fm10k_vf_info *VAR_4 = (struct fm10k_vf_info *)VAR_3;
 struct fm10k_intfc *VAR_5 = VAR_1->back;
 struct pci_dev *VAR_6 = VAR_5->pdev;

 FUNC_0(&VAR_6->dev, "Unknown message ID %u on VF %d\n",
  **VAR_2 & VAR_0, VAR_4->vf_idx);

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
