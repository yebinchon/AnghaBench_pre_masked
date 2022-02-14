
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_port_func_state_cmd {int state; scalar_t__ status; int func_idx; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int func_state ;
typedef enum hinic_func_port_state { ____Placeholder_hinic_func_port_state } hinic_func_port_state ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_port_func_state_cmd*,int,struct hinic_port_func_state_cmd*,int*) ;

int FUNC_3(struct hinic_dev *VAR_2,
         enum hinic_func_port_state VAR_3)
{
 struct hinic_port_func_state_cmd VAR_4;
 struct hinic_hwdev *VAR_5 = VAR_2->hwdev;
 struct hinic_hwif *VAR_6 = VAR_5->hwif;
 struct pci_dev *VAR_7 = VAR_6->pdev;
 u16 VAR_8;
 int VAR_9;

 VAR_4.func_idx = FUNC_0(VAR_6);
 VAR_4.state = VAR_3;

 VAR_9 = FUNC_2(VAR_5, VAR_1,
     &VAR_4, sizeof(VAR_4),
     &VAR_4, &VAR_8);
 if (VAR_9 || (VAR_8 != sizeof(VAR_4)) || VAR_4.status) {
  FUNC_1(&VAR_7->dev, "Failed to set port func state, ret = %d\n",
   VAR_4.status);
  return -VAR_0;
 }

 return 0;
}
