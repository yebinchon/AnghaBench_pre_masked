
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct net_device {int addr_len; int dev_addr; int perm_addr; } ;
struct i2400m_tlv_detailed_device_info {int mac_address; } ;
struct TYPE_2__ {struct net_device* net_dev; } ;
struct i2400m {TYPE_1__ wimax_dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int,struct device*,char*,struct i2400m*,int) ;
 int FUNC_4 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_5 (int,struct device*,char*,int ) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*,...) ;
 struct device* FUNC_8 (struct i2400m*) ;
 struct sk_buff* FUNC_9 (struct i2400m*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,int) ;

__attribute__((used)) static
int FUNC_14(struct i2400m *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = FUNC_8(VAR_1);
 struct sk_buff *VAR_4;
 const struct i2400m_tlv_detailed_device_info *VAR_5;
 struct net_device *VAR_6 = VAR_1->wimax_dev.net_dev;

 FUNC_4(3, VAR_3, "(i2400m %p)\n", VAR_1);
 VAR_4 = FUNC_9(VAR_1);
 if (FUNC_1(VAR_4)) {
  VAR_2 = FUNC_2(VAR_4);
  FUNC_6(VAR_3, "Cannot verify MAC address, error reading: %d\n",
   VAR_2);
  goto error;
 }

 VAR_5 = (void *) VAR_4->data;
 FUNC_0(VAR_0 != sizeof(VAR_5->mac_address));
 FUNC_5(2, VAR_3, "GET DEVICE INFO: mac addr %pM\n",
   VAR_5->mac_address);
 if (!FUNC_12(VAR_6->perm_addr, VAR_5->mac_address,
     sizeof(VAR_5->mac_address)))
  goto ok;
 FUNC_7(VAR_3, "warning: device reports a different MAC address "
   "to that of boot mode's\n");
 FUNC_7(VAR_3, "device reports     %pM\n", VAR_5->mac_address);
 FUNC_7(VAR_3, "boot mode reported %pM\n", VAR_6->perm_addr);
 if (FUNC_10(VAR_5->mac_address))
  FUNC_6(VAR_3, "device reports an invalid MAC address, "
   "not updating\n");
 else {
  FUNC_7(VAR_3, "updating MAC address\n");
  VAR_6->addr_len = VAR_0;
  FUNC_13(VAR_6->perm_addr, VAR_5->mac_address, VAR_0);
  FUNC_13(VAR_6->dev_addr, VAR_5->mac_address, VAR_0);
 }
ok:
 VAR_2 = 0;
 FUNC_11(VAR_4);
error:
 FUNC_3(3, VAR_3, "(i2400m %p) = %d\n", VAR_1, VAR_2);
 return VAR_2;
}
