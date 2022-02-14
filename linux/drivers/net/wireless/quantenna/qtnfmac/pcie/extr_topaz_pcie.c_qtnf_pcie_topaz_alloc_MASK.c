
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int suspend_cb; int resume_cb; int dma_mask_get_cb; int remove_cb; int probe_cb; } ;
struct qtnf_pcie_topaz_state {TYPE_1__ base; } ;
struct qtnf_bus {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 struct qtnf_bus* FUNC_0 (int *,int,int ) ;
 struct qtnf_pcie_topaz_state* FUNC_1 (struct qtnf_bus*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

struct qtnf_bus *FUNC_2(struct pci_dev *VAR_6)
{
 struct qtnf_bus *VAR_7;
 struct qtnf_pcie_topaz_state *VAR_8;

 VAR_7 = FUNC_0(&VAR_6->dev, sizeof(*VAR_7) + sizeof(*VAR_8), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_8 = FUNC_1(VAR_7);
 VAR_8->base.probe_cb = VAR_1;
 VAR_8->base.remove_cb = VAR_2;
 VAR_8->base.dma_mask_get_cb = VAR_5;





 return VAR_7;
}
