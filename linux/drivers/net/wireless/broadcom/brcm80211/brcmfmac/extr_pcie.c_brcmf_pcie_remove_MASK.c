
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {struct brcmf_pciedev_info* pcie; } ;
struct brcmf_pciedev_info {scalar_t__ settings; scalar_t__ ci; struct brcmf_pciedev_info* msgbuf; struct brcmf_pciedev_info* flowrings; TYPE_1__ bus_priv; int state; struct brcmf_pciedev_info* devinfo; } ;
struct brcmf_bus {scalar_t__ settings; scalar_t__ ci; struct brcmf_bus* msgbuf; struct brcmf_bus* flowrings; TYPE_1__ bus_priv; int state; struct brcmf_bus* devinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct brcmf_pciedev_info*) ;
 int FUNC_5 (struct brcmf_pciedev_info*) ;
 int FUNC_6 (struct brcmf_pciedev_info*) ;
 int FUNC_7 (struct brcmf_pciedev_info*) ;
 int FUNC_8 (struct brcmf_pciedev_info*) ;
 int FUNC_9 (struct brcmf_pciedev_info*) ;
 int FUNC_10 (scalar_t__) ;
 struct brcmf_pciedev_info* FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (struct brcmf_pciedev_info*) ;

__attribute__((used)) static void
FUNC_14(struct pci_dev *VAR_2)
{
 struct brcmf_pciedev_info *VAR_3;
 struct brcmf_bus *VAR_4;

 FUNC_1(VAR_1, "Enter\n");

 VAR_4 = FUNC_11(&VAR_2->dev);
 if (VAR_4 == ((void*)0))
  return;

 VAR_3 = VAR_4->bus_priv.pcie->devinfo;

 VAR_3->state = VAR_0;
 if (VAR_3->ci)
  FUNC_4(VAR_3);

 FUNC_2(&VAR_2->dev);
 FUNC_3(&VAR_2->dev);

 FUNC_13(VAR_4->bus_priv.pcie);
 FUNC_13(VAR_4->msgbuf->flowrings);
 FUNC_13(VAR_4->msgbuf);
 FUNC_13(VAR_4);

 FUNC_5(VAR_3);
 FUNC_8(VAR_3);
 FUNC_7(VAR_3);
 FUNC_9(VAR_3);
 FUNC_6(VAR_3);

 if (VAR_3->ci)
  FUNC_0(VAR_3->ci);
 if (VAR_3->settings)
  FUNC_10(VAR_3->settings);

 FUNC_13(VAR_3);
 FUNC_12(&VAR_2->dev, ((void*)0));
}
