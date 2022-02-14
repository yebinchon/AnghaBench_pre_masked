
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct hinic_port_mtu_cmd {int mtu; scalar_t__ status; int func_idx; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; struct net_device* netdev; } ;
typedef int port_mtu_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_port_mtu_cmd*,int,struct hinic_port_mtu_cmd*,int*) ;
 int FUNC_3 (struct hinic_dev*,int ,struct net_device*,char*) ;

int FUNC_4(struct hinic_dev *VAR_8, int VAR_9)
{
 struct net_device *VAR_10 = VAR_8->netdev;
 struct hinic_hwdev *VAR_11 = VAR_8->hwdev;
 struct hinic_port_mtu_cmd VAR_12;
 struct hinic_hwif *VAR_13 = VAR_11->hwif;
 struct pci_dev *VAR_14 = VAR_13->pdev;
 int VAR_15, VAR_16;
 u16 VAR_17;

 if (VAR_9 < VAR_5) {
  FUNC_3(VAR_8, VAR_7, VAR_10, "mtu < MIN MTU size");
  return -VAR_1;
 }

 VAR_16 = VAR_9 + VAR_3 + VAR_2;
 if (VAR_16 > VAR_4) {
  FUNC_3(VAR_8, VAR_7, VAR_10, "mtu > MAX MTU size");
  return -VAR_1;
 }

 VAR_12.func_idx = FUNC_0(VAR_13);
 VAR_12.mtu = VAR_9;

 VAR_15 = FUNC_2(VAR_11, VAR_6,
     &VAR_12, sizeof(VAR_12),
     &VAR_12, &VAR_17);
 if (VAR_15 || (VAR_17 != sizeof(VAR_12)) || VAR_12.status) {
  FUNC_1(&VAR_14->dev, "Failed to set mtu, ret = %d\n",
   VAR_12.status);
  return -VAR_0;
 }

 return 0;
}
