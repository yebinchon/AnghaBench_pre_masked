
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {TYPE_1__* bus; } ;
struct hl_device {struct pci_dev* pdev; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hl_device *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 struct pci_dev *VAR_4;
 u16 VAR_5;

 VAR_4 = VAR_3->bus->self;
 FUNC_0(VAR_4, VAR_0, &VAR_5);
 VAR_5 |= VAR_1;
 FUNC_1(VAR_4, VAR_0, VAR_5);
 FUNC_2(1);

 VAR_5 &= ~(VAR_1);
 FUNC_1(VAR_4, VAR_0, VAR_5);
 FUNC_2(3);
}
