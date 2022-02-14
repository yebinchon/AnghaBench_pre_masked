
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct hinic_port_mac_cmd {scalar_t__ status; int mac; scalar_t__ vlan_id; int func_idx; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; struct net_device* netdev; } ;
typedef int port_mac_cmd ;
typedef enum mac_op { ____Placeholder_mac_op } mac_op ;
typedef enum hinic_port_cmd { ____Placeholder_hinic_port_cmd } hinic_port_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_2 (struct hinic_hwdev*,int,struct hinic_port_mac_cmd*,int,struct hinic_port_mac_cmd*,scalar_t__*) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (struct hinic_dev*,int ,struct net_device*,char*) ;

__attribute__((used)) static int FUNC_5(struct hinic_dev *VAR_8, const u8 *VAR_9,
        u16 VAR_10, enum mac_op VAR_11)
{
 struct net_device *VAR_12 = VAR_8->netdev;
 struct hinic_hwdev *VAR_13 = VAR_8->hwdev;
 struct hinic_port_mac_cmd VAR_14;
 struct hinic_hwif *VAR_15 = VAR_13->hwif;
 struct pci_dev *VAR_16 = VAR_15->pdev;
 enum hinic_port_cmd VAR_17;
 u16 VAR_18;
 int VAR_19;

 if (VAR_10 >= VAR_6) {
  FUNC_4(VAR_8, VAR_7, VAR_12, "Invalid VLAN number\n");
  return -VAR_1;
 }

 if (VAR_11 == VAR_5)
  VAR_17 = VAR_4;
 else
  VAR_17 = VAR_3;

 VAR_14.func_idx = FUNC_0(VAR_15);
 VAR_14.vlan_id = VAR_10;
 FUNC_3(VAR_14.mac, VAR_9, VAR_2);

 VAR_19 = FUNC_2(VAR_13, VAR_17, &VAR_14,
     sizeof(VAR_14),
     &VAR_14, &VAR_18);
 if (VAR_19 || (VAR_18 != sizeof(VAR_14)) || VAR_14.status) {
  FUNC_1(&VAR_16->dev, "Failed to change MAC, ret = %d\n",
   VAR_14.status);
  return -VAR_0;
 }

 return 0;
}
