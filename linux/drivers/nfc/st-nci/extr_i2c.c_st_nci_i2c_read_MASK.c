
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st_nci_i2c_phy {struct i2c_client* i2c_dev; } ;
struct sk_buff {scalar_t__ data; } ;
struct i2c_client {int dev; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_client*,int*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (scalar_t__,int*,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct st_nci_i2c_phy *VAR_6,
     struct sk_buff **VAR_7)
{
 int VAR_8;
 u8 VAR_9;
 u8 VAR_10[VAR_4];
 struct i2c_client *VAR_11 = VAR_6->i2c_dev;

 VAR_8 = FUNC_2(VAR_11, VAR_10, VAR_5);
 if (VAR_8 < 0) {
  FUNC_8(1000, 4000);
  VAR_8 = FUNC_2(VAR_11, VAR_10, VAR_5);
 }

 if (VAR_8 != VAR_5)
  return -VAR_2;

 VAR_9 = FUNC_1(*(__be16 *) (VAR_10 + 2));
 if (VAR_9 > VAR_4) {
  FUNC_5(&VAR_11->dev, "invalid frame len\n");
  return -VAR_0;
 }

 *VAR_7 = FUNC_0(VAR_5 + VAR_9, VAR_3);
 if (*VAR_7 == ((void*)0))
  return -VAR_1;

 FUNC_7(*VAR_7, VAR_5);
 FUNC_6(*VAR_7, VAR_5);
 FUNC_4((*VAR_7)->data, VAR_10, VAR_5);

 if (!VAR_9)
  return 0;

 VAR_8 = FUNC_2(VAR_11, VAR_10, VAR_9);
 if (VAR_8 != VAR_9) {
  FUNC_3(*VAR_7);
  return -VAR_2;
 }

 FUNC_6(*VAR_7, VAR_9);
 FUNC_4((*VAR_7)->data + VAR_5, VAR_10, VAR_9);

 return 0;
}
