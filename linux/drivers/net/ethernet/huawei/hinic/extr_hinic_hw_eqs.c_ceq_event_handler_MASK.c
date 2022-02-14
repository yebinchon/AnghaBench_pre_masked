
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_ceqs {struct hinic_ceq_cb* ceq_cb; struct hinic_hwif* hwif; } ;
struct hinic_ceq_cb {unsigned long ceqe_state; int handle; int (* handler ) (int ,int ) ;} ;
typedef enum hinic_ceq_type { ____Placeholder_hinic_ceq_type } hinic_ceq_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_2 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hinic_ceqs *VAR_3, u32 VAR_4)
{
 struct hinic_hwif *VAR_5 = VAR_3->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;
 struct hinic_ceq_cb *VAR_7;
 enum hinic_ceq_type VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8 >= VAR_2) {
  FUNC_3(&VAR_6->dev, "Unknown CEQ event, event = %d\n", VAR_8);
  return;
 }

 VAR_7 = &VAR_3->ceq_cb[VAR_8];

 VAR_9 = FUNC_2(&VAR_7->ceqe_state,
       VAR_0,
       VAR_0 | VAR_1);

 if ((VAR_9 == VAR_0) && (VAR_7->handler))
  VAR_7->handler(VAR_7->handle, FUNC_0(VAR_4));
 else
  FUNC_3(&VAR_6->dev, "Unhandled CEQ Event %d\n", VAR_8);

 VAR_7->ceqe_state &= ~VAR_1;
}
