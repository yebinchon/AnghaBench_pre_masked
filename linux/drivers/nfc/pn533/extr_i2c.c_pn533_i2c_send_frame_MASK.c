
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct pn533_i2c_phy {scalar_t__ hard_fault; int aborted; struct pn533* priv; struct i2c_client* i2c_dev; } ;
struct pn533 {struct pn533_i2c_phy* phy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (char*,int ,int,int,int ,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct pn533 *VAR_2,
    struct sk_buff *VAR_3)
{
 struct pn533_i2c_phy *VAR_4 = VAR_2->phy;
 struct i2c_client *VAR_5 = VAR_4->i2c_dev;
 int VAR_6;

 if (VAR_4->hard_fault != 0)
  return VAR_4->hard_fault;

 if (VAR_4->priv == ((void*)0))
  VAR_4->priv = VAR_2;

 VAR_4->aborted = 0;

 FUNC_1("PN533_i2c TX: ", VAR_0, 16, 1,
        VAR_3->data, VAR_3->len, 0);

 VAR_6 = FUNC_0(VAR_5, VAR_3->data, VAR_3->len);

 if (VAR_6 == -VAR_1) {
  FUNC_2(6000, 10000);
  VAR_6 = FUNC_0(VAR_5, VAR_3->data, VAR_3->len);
 }

 if (VAR_6 >= 0) {
  if (VAR_6 != VAR_3->len)
   VAR_6 = -VAR_1;
  else
   VAR_6 = 0;
 }

 return VAR_6;
}
