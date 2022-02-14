
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct brcmf_pciedev_info {int ci; struct pci_dev* pdev; } ;
struct brcmf_core {scalar_t__ base; } ;
struct brcmf_bus {int dummy; } ;


 int VAR_0 ;
 struct brcmf_core* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct brcmf_bus*,char*,int ) ;
 struct brcmf_bus* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct pci_dev const*,int ,scalar_t__*) ;
 int FUNC_4 (struct pci_dev const*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct brcmf_pciedev_info *VAR_1, u16 VAR_2)
{
 const struct pci_dev *VAR_3 = VAR_1->pdev;
 struct brcmf_bus *VAR_4 = FUNC_2(&VAR_3->dev);
 struct brcmf_core *VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_1->ci, VAR_2);
 if (VAR_5) {
  VAR_6 = VAR_5->base;
  FUNC_4(VAR_3, VAR_0, VAR_6);
  if (FUNC_3(VAR_3, VAR_0,
       &VAR_6) == 0) {
   if (VAR_6 != VAR_5->base) {
    VAR_6 = VAR_5->base;
    FUNC_4(VAR_3,
             VAR_0,
             VAR_6);
   }
  }
 } else {
  FUNC_1(VAR_4, "Unsupported core selected %x\n", VAR_2);
 }
}
