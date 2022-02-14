
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev_count; struct platform_info* ksz_switch; scalar_t__ io; } ;
struct dev_info {int pdev; TYPE_1__ hw; } ;
struct platform_info {scalar_t__* netdev; struct dev_info dev_info; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct platform_info*) ;
 int FUNC_2 (struct dev_info*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 struct platform_info* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 int VAR_1;
 struct platform_info *VAR_2 = FUNC_5(VAR_0);
 struct dev_info *VAR_3 = &VAR_2->dev_info;

 FUNC_8(FUNC_7(VAR_0, 0),
  FUNC_6(VAR_0, 0));
 for (VAR_1 = 0; VAR_1 < VAR_3->hw.dev_count; VAR_1++) {
  if (VAR_2->netdev[VAR_1])
   FUNC_3(VAR_2->netdev[VAR_1]);
 }
 if (VAR_3->hw.io)
  FUNC_0(VAR_3->hw.io);
 FUNC_2(VAR_3);
 FUNC_1(VAR_3->hw.ksz_switch);
 FUNC_4(VAR_3->pdev);
 FUNC_1(VAR_2);
}
