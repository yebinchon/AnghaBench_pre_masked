
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct apds990x_chip {int revision; int chipname; struct i2c_client* client; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct apds990x_chip*,int ,int*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int,char*) ;

__attribute__((used)) static int FUNC_3(struct apds990x_chip *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->client;
 int VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_0, &VAR_6);
 if (VAR_5 < 0) {
  FUNC_1(&VAR_4->dev, "ID read failed\n");
  return VAR_5;
 }

 VAR_5 = FUNC_0(VAR_3, VAR_1, &VAR_3->revision);
 if (VAR_5 < 0) {
  FUNC_1(&VAR_4->dev, "REV read failed\n");
  return VAR_5;
 }

 switch (VAR_6) {
 case 130:
 case 128:
 case 129:
  FUNC_2(VAR_3->chipname, sizeof(VAR_3->chipname), "APDS-990x");
  break;
 default:
  VAR_5 = -VAR_2;
  break;
 }
 return VAR_5;
}
