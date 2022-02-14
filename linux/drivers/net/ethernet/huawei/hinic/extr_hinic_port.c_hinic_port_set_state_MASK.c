
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_port_state_cmd {int state; scalar_t__ status; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int port_state ;
typedef enum hinic_port_state { ____Placeholder_hinic_port_state } hinic_port_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int FUNC_1 (struct hinic_hwif*) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct hinic_hwdev*,int ,struct hinic_port_state_cmd*,int,struct hinic_port_state_cmd*,int*) ;

int FUNC_4(struct hinic_dev *VAR_3, enum hinic_port_state VAR_4)
{
 struct hinic_hwdev *VAR_5 = VAR_3->hwdev;
 struct hinic_port_state_cmd VAR_6;
 struct hinic_hwif *VAR_7 = VAR_5->hwif;
 struct pci_dev *VAR_8 = VAR_7->pdev;
 u16 VAR_9;
 int VAR_10;

 if (!FUNC_0(VAR_7) && !FUNC_1(VAR_7)) {
  FUNC_2(&VAR_8->dev, "unsupported PCI Function type\n");
  return -VAR_1;
 }

 VAR_6.state = VAR_4;

 VAR_10 = FUNC_3(VAR_5, VAR_2,
     &VAR_6, sizeof(VAR_6),
     &VAR_6, &VAR_9);
 if (VAR_10 || (VAR_9 != sizeof(VAR_6)) || VAR_6.status) {
  FUNC_2(&VAR_8->dev, "Failed to set port state, ret = %d\n",
   VAR_6.status);
  return -VAR_0;
 }

 return 0;
}
