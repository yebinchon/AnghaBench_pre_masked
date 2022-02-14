
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tmp ;
struct sk_buff {scalar_t__ len; int data; } ;
struct pn544_i2c_phy {struct i2c_client* i2c_dev; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct i2c_client*,int*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct pn544_i2c_phy *VAR_6, struct sk_buff **VAR_7)
{
 int VAR_8;
 u8 VAR_9;
 u8 VAR_10[VAR_4 - 1];
 struct i2c_client *VAR_11 = VAR_6->i2c_dev;

 VAR_8 = FUNC_3(VAR_11, &VAR_9, 1);
 if (VAR_8 != 1) {
  FUNC_5(&VAR_11->dev, "cannot read len byte\n");
  return -VAR_2;
 }

 if ((VAR_9 < (VAR_5 - 1)) ||
     (VAR_9 > (VAR_4 - 1))) {
  FUNC_5(&VAR_11->dev, "invalid len byte\n");
  VAR_8 = -VAR_0;
  goto flush;
 }

 *VAR_7 = FUNC_1(1 + VAR_9, VAR_3);
 if (*VAR_7 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto flush;
 }

 FUNC_8(*VAR_7, VAR_9);

 VAR_8 = FUNC_3(VAR_11, FUNC_7(*VAR_7, VAR_9), VAR_9);
 if (VAR_8 != VAR_9) {
  FUNC_4(*VAR_7);
  return -VAR_2;
 }

 FUNC_0("i2c frame read", *VAR_7);

 VAR_8 = FUNC_2((*VAR_7)->data, (*VAR_7)->len);
 if (VAR_8 != 0) {
  FUNC_4(*VAR_7);
  VAR_8 = -VAR_0;
  goto flush;
 }

 FUNC_6(*VAR_7, 1);
 FUNC_9(*VAR_7, (*VAR_7)->len - 2);

 FUNC_10(3000, 6000);

 return 0;

flush:
 if (FUNC_3(VAR_11, VAR_10, sizeof(VAR_10)) < 0)
  VAR_8 = -VAR_2;

 FUNC_10(3000, 6000);

 return VAR_8;
}
