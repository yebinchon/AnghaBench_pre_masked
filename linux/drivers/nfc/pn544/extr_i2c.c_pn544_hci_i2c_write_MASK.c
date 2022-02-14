
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct pn544_i2c_phy {scalar_t__ hard_fault; struct i2c_client* i2c_dev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sk_buff*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;
 struct pn544_i2c_phy *VAR_4 = VAR_1;
 struct i2c_client *VAR_5 = VAR_4->i2c_dev;

 if (VAR_4->hard_fault != 0)
  return VAR_4->hard_fault;

 FUNC_4(3000, 6000);

 FUNC_2(VAR_2);

 FUNC_0("i2c frame written", VAR_2);

 VAR_3 = FUNC_1(VAR_5, VAR_2->data, VAR_2->len);

 if (VAR_3 == -VAR_0) {
  FUNC_4(6000, 10000);
  VAR_3 = FUNC_1(VAR_5, VAR_2->data, VAR_2->len);
 }

 if (VAR_3 >= 0) {
  if (VAR_3 != VAR_2->len)
   VAR_3 = -VAR_0;
  else
   VAR_3 = 0;
 }

 FUNC_3(VAR_2);

 return VAR_3;
}
