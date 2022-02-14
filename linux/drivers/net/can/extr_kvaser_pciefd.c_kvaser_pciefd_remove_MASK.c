
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct kvaser_pciefd {scalar_t__ reg_base; TYPE_1__* pci; } ;
struct TYPE_2__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct kvaser_pciefd*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct kvaser_pciefd*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct kvaser_pciefd* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,scalar_t__) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_4)
{
 struct kvaser_pciefd *VAR_5 = FUNC_5(VAR_4);

 FUNC_2(VAR_5);


 FUNC_1(0, VAR_5->reg_base + VAR_3);
 FUNC_1(VAR_1,
    VAR_5->reg_base + VAR_2);
 FUNC_1(0, VAR_5->reg_base + VAR_0);

 FUNC_0(VAR_5->pci->irq, VAR_5);

 FUNC_3(VAR_4);
 FUNC_6(VAR_4, VAR_5->reg_base);
 FUNC_7(VAR_4);
 FUNC_4(VAR_4);
}
