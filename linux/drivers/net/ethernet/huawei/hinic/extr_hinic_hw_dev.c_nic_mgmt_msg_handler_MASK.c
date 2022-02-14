
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_pfhwdev {struct hinic_nic_cb* nic_cb; struct hinic_hwdev hwdev; } ;
struct hinic_nic_cb {int cb_state; int handle; int (* handler ) (int ,void*,int ,void*,int *) ;} ;
struct hinic_hwif {struct pci_dev* pdev; } ;
typedef enum hinic_cb_state { ____Placeholder_hinic_cb_state } hinic_cb_state ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int ,void*,int ,void*,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_4, u8 VAR_5, void *VAR_6,
     u16 VAR_7, void *VAR_8, u16 *VAR_9)
{
 struct hinic_pfhwdev *VAR_10 = VAR_4;
 enum hinic_cb_state VAR_11;
 struct hinic_nic_cb *VAR_12;
 struct hinic_hwdev *VAR_13;
 struct hinic_hwif *VAR_14;
 struct pci_dev *VAR_15;
 u8 VAR_16;

 VAR_13 = &VAR_10->hwdev;
 VAR_14 = VAR_13->hwif;
 VAR_15 = VAR_14->pdev;

 if ((VAR_5 < VAR_2) ||
     (VAR_5 >= VAR_3)) {
  FUNC_1(&VAR_15->dev, "unknown L2NIC event, cmd = %d\n", VAR_5);
  return;
 }

 VAR_16 = VAR_5 - VAR_2;

 VAR_12 = &VAR_10->nic_cb[VAR_16];

 VAR_11 = FUNC_0(&VAR_12->cb_state,
      VAR_0,
      VAR_0 | VAR_1);

 if ((VAR_11 == VAR_0) && (VAR_12->handler))
  VAR_12->handler(VAR_12->handle, VAR_6,
    VAR_7, VAR_8, VAR_9);
 else
  FUNC_1(&VAR_15->dev, "Unhandled NIC Event %d\n", VAR_5);

 VAR_12->cb_state &= ~VAR_1;
}
