
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sdu {int nic_type; } ;
struct phy_dev {struct net_device** dev; int priv_dev; int (* get_endian ) (int ) ;} ;
struct net_device {int dummy; } ;
struct hci_pdn_table_ind {int nic_type; } ;
struct hci_packet {scalar_t__ data; int cmd_evt; } ;
struct hci_connect_ind {int connect; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 int FUNC_4 (struct phy_dev*,char*,int) ;
 int FUNC_5 (struct net_device*,scalar_t__,int,int ) ;
 int FUNC_6 (struct net_device*,char*,int) ;
 int FUNC_7 (struct net_device*,char*,char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct phy_dev *VAR_0, char *VAR_1, int VAR_2)
{
 struct hci_packet *VAR_3 = (struct hci_packet *)VAR_1;
 struct hci_pdn_table_ind *VAR_4 = (struct hci_pdn_table_ind *)VAR_1;
 struct sdu *VAR_5;
 struct net_device *VAR_6;
 u8 VAR_7 = VAR_0->get_endian(VAR_0->priv_dev);
 int VAR_8 = 0;
 u16 VAR_9;
 u32 VAR_10;
 int VAR_11;

 if (!VAR_2)
  return VAR_8;

 VAR_9 = FUNC_1(VAR_7, VAR_3->cmd_evt);

 VAR_6 = VAR_0->dev[0];
 if (!VAR_6)
  return 0;

 switch (VAR_9) {
 case 128:
  VAR_5 = (struct sdu *)VAR_3->data;
  VAR_10 = FUNC_2(VAR_7, VAR_5->nic_type);
  VAR_11 = FUNC_0(VAR_10);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_6 = VAR_0->dev[VAR_11];
  FUNC_5(VAR_6, VAR_3->data, VAR_2, VAR_10);
  break;
 case 129:
  FUNC_4(VAR_0, VAR_1, VAR_2);
  break;
 case 131:
  FUNC_7(VAR_6, "link %s\n",
       ((struct hci_connect_ind *)VAR_1)->connect
       ? "on" : "off");
  break;
 case 130:
  VAR_4 = (struct hci_pdn_table_ind *)VAR_1;
  VAR_10 = FUNC_2(VAR_7, VAR_4->nic_type);
  VAR_11 = FUNC_0(VAR_10);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_6 = VAR_0->dev[VAR_11];
  FUNC_6(VAR_6, VAR_1, VAR_2);

 default:
  VAR_8 = FUNC_3(VAR_6, VAR_1, VAR_2);
  break;
 }

 return VAR_8;
}
