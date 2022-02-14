
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_nci_i2c_phy {TYPE_1__* ndlc; struct i2c_client* i2c_dev; } ;
struct sk_buff {int len; int data; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {scalar_t__ hard_fault; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;
 struct st_nci_i2c_phy *VAR_4 = VAR_1;
 struct i2c_client *VAR_5 = VAR_4->i2c_dev;

 if (VAR_4->ndlc->hard_fault != 0)
  return VAR_4->ndlc->hard_fault;

 VAR_3 = FUNC_0(VAR_5, VAR_2->data, VAR_2->len);
 if (VAR_3 < 0) {
  FUNC_1(1000, 4000);
  VAR_3 = FUNC_0(VAR_5, VAR_2->data, VAR_2->len);
 }

 if (VAR_3 >= 0) {
  if (VAR_3 != VAR_2->len)
   VAR_3 = -VAR_0;
  else
   VAR_3 = 0;
 }

 return VAR_3;
}
