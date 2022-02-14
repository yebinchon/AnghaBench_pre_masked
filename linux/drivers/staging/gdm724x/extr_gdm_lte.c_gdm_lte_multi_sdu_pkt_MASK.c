
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sdu {scalar_t__ data; int nic_type; int len; int cmd_evt; } ;
struct phy_dev {struct net_device** dev; int priv_dev; int (* get_endian ) (int ) ;} ;
struct net_device {int dummy; } ;
struct multi_sdu {int num_packet; int len; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct net_device*,char*,int,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct phy_dev *VAR_2, char *VAR_3, int VAR_4)
{
 struct net_device *VAR_5;
 struct multi_sdu *VAR_6 = (struct multi_sdu *)VAR_3;
 struct sdu *VAR_7 = ((void*)0);
 u8 VAR_8 = VAR_2->get_endian(VAR_2->priv_dev);
 u8 *VAR_9 = (u8 *)VAR_6->data;
 u16 VAR_10 = 0;
 u16 VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_12 = FUNC_1(VAR_8, VAR_6->len);
 VAR_11 = FUNC_1(VAR_8, VAR_6->num_packet);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_7 = (struct sdu *)VAR_9;

  VAR_13 = FUNC_1(VAR_8, VAR_7->cmd_evt);
  VAR_12 = FUNC_1(VAR_8, VAR_7->len);
  VAR_14 = FUNC_2(VAR_8, VAR_7->nic_type);

  if (VAR_13 != VAR_1) {
   FUNC_4("rx sdu wrong hci %04x\n", VAR_13);
   return;
  }
  if (VAR_12 < 12) {
   FUNC_4("rx sdu invalid len %d\n", VAR_12);
   return;
  }

  VAR_15 = FUNC_0(VAR_14);
  if (VAR_15 < 0) {
   FUNC_4("rx sdu invalid nic_type :%x\n", VAR_14);
   return;
  }
  VAR_5 = VAR_2->dev[VAR_15];
  FUNC_3(VAR_5, (char *)VAR_7->data,
     (int)(VAR_12 - 12), VAR_14);

  VAR_9 += ((VAR_12 + 3) & 0xfffc) + VAR_0;
 }
}
