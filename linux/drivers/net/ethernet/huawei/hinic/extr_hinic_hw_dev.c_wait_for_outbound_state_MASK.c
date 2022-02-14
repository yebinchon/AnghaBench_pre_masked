
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
typedef enum hinic_outbound_state { ____Placeholder_hinic_outbound_state } hinic_outbound_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hinic_hwif*) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct hinic_hwdev *VAR_4)
{
 enum hinic_outbound_state VAR_5;
 struct hinic_hwif *VAR_6 = VAR_4->hwif;
 struct pci_dev *VAR_7 = VAR_6->pdev;
 unsigned long VAR_8;

 VAR_8 = VAR_3 + FUNC_2(VAR_2);
 do {
  VAR_5 = FUNC_1(VAR_6);

  if (VAR_5 == VAR_1)
   return 0;

  FUNC_3(20);
 } while (FUNC_4(VAR_3, VAR_8));

 FUNC_0(&VAR_7->dev, "Wait for OUTBOUND - Timeout\n");
 return -VAR_0;
}
