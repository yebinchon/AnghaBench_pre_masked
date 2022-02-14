
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
typedef enum hinic_db_state { ____Placeholder_hinic_db_state } hinic_db_state ;


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
 struct hinic_hwif *VAR_5 = VAR_4->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;
 enum hinic_db_state VAR_7;
 unsigned long VAR_8;

 VAR_8 = VAR_3 + FUNC_2(VAR_0);
 do {
  VAR_7 = FUNC_1(VAR_5);

  if (VAR_7 == VAR_2)
   return 0;

  FUNC_3(20);
 } while (FUNC_4(VAR_3, VAR_8));

 FUNC_0(&VAR_6->dev, "Wait for DB - Timeout\n");
 return -VAR_1;
}
