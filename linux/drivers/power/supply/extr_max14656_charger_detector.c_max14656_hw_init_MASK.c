
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct max14656_chip {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (struct i2c_client*,int ,int*) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct max14656_chip *VAR_14)
{
 uint8_t VAR_15 = 0;
 uint8_t VAR_16;
 struct i2c_client *VAR_17 = VAR_14->client;

 if (FUNC_2(VAR_17, VAR_11, &VAR_15))
  return -VAR_8;

 if ((VAR_15 & VAR_6) != 0x20) {
  FUNC_0(&VAR_17->dev, "wrong vendor ID %d\n",
   ((VAR_15 & VAR_6) >> 4));
  return -VAR_8;
 }
 VAR_16 = VAR_15 & VAR_5;


 if (FUNC_3(VAR_17, VAR_10, VAR_4))
  return -VAR_7;


 if (FUNC_3(VAR_17, VAR_9,
  VAR_0 |
  VAR_3 |
  VAR_2 |
  VAR_1))
  return -VAR_7;

 if (FUNC_3(VAR_17, VAR_12, 0x3))
  return -VAR_7;

 if (FUNC_3(VAR_17, VAR_13, 0x1))
  return -VAR_7;

 FUNC_1(&VAR_17->dev, "detected revision %d\n", VAR_16);
 return 0;
}
