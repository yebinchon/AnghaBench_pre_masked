
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tmp ;
struct sk_buff {scalar_t__ len; } ;
struct microread_i2c_phy {struct i2c_client* i2c_dev; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct i2c_client*,int*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct microread_i2c_phy *VAR_7,
         struct sk_buff **VAR_8)
{
 int VAR_9;
 u8 VAR_10;
 u8 VAR_11[VAR_5 - 1];
 struct i2c_client *VAR_12 = VAR_7->i2c_dev;

 VAR_9 = FUNC_3(VAR_12, &VAR_10, 1);
 if (VAR_9 != 1) {
  FUNC_5(&VAR_12->dev, "cannot read len byte\n");
  return -VAR_2;
 }

 if ((VAR_10 < VAR_6) ||
     (VAR_10 > VAR_5)) {
  FUNC_5(&VAR_12->dev, "invalid len byte\n");
  VAR_9 = -VAR_0;
  goto flush;
 }

 *VAR_8 = FUNC_1(1 + VAR_10, VAR_3);
 if (*VAR_8 == ((void*)0)) {
  VAR_9 = -VAR_1;
  goto flush;
 }

 FUNC_8(*VAR_8, VAR_10);

 VAR_9 = FUNC_3(VAR_12, FUNC_7(*VAR_8, VAR_10), VAR_10);
 if (VAR_9 != VAR_10) {
  FUNC_4(*VAR_8);
  return -VAR_2;
 }

 FUNC_0("cc frame read", *VAR_8);

 VAR_9 = FUNC_2(*VAR_8);
 if (VAR_9 != 0) {
  FUNC_4(*VAR_8);
  VAR_9 = -VAR_0;
  goto flush;
 }

 FUNC_6(*VAR_8, 1);
 FUNC_9(*VAR_8, (*VAR_8)->len - VAR_4);

 FUNC_10(3000, 6000);

 return 0;

flush:
 if (FUNC_3(VAR_12, VAR_11, sizeof(VAR_11)) < 0)
  VAR_9 = -VAR_2;

 FUNC_10(3000, 6000);

 return VAR_9;
}
