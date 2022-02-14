
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct nxp_nci_i2c_phy {scalar_t__ hard_fault; struct i2c_client* i2c_dev; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int,...) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;
 struct nxp_nci_i2c_phy *VAR_4 = VAR_1;
 struct i2c_client *VAR_5 = VAR_4->i2c_dev;

 if (VAR_4->hard_fault != 0)
  return VAR_4->hard_fault;

 VAR_3 = FUNC_0(VAR_5, VAR_2->data, VAR_2->len);
 if (VAR_3 < 0) {

  FUNC_1(110);
  VAR_3 = FUNC_0(VAR_5, VAR_2->data, VAR_2->len);
 }

 if (VAR_3 < 0) {
  FUNC_2(&VAR_5->dev, "Error %d on I2C send\n", VAR_3);
 } else if (VAR_3 != VAR_2->len) {
  FUNC_2(&VAR_5->dev,
   "Invalid length sent: %u (expected %u)\n",
   VAR_3, VAR_2->len);
  VAR_3 = -VAR_0;
 } else {

  VAR_3 = 0;
 }

 return VAR_3;
}
