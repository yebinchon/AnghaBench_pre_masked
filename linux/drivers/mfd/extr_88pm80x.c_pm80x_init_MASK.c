
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct pm80x_chip {struct i2c_client* client; struct i2c_client* companion; int * dev; int type; struct regmap* regmap; int irq; } ;
struct i2c_client {int dev; int irq; } ;
struct TYPE_3__ {scalar_t__ id; int type; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (struct regmap*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (int *,char*,unsigned int) ;
 int FUNC_5 (int *,struct pm80x_chip*) ;
 int FUNC_6 (int *,int) ;
 struct pm80x_chip* FUNC_7 (int *,int,int ) ;
 struct regmap* FUNC_8 (struct i2c_client*,int *) ;
 struct pm80x_chip* VAR_5 ;
 int FUNC_9 (struct i2c_client*,struct pm80x_chip*) ;
 int VAR_6 ;
 int FUNC_10 (struct regmap*,int ,unsigned int*) ;

int FUNC_11(struct i2c_client *VAR_7)
{
 struct pm80x_chip *VAR_8;
 struct regmap *VAR_9;
 unsigned int VAR_10;
 int VAR_11, VAR_12 = 0;

 VAR_8 =
     FUNC_7(&VAR_7->dev, sizeof(struct pm80x_chip), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_8(VAR_7, &VAR_6);
 if (FUNC_1(VAR_9)) {
  VAR_12 = FUNC_3(VAR_9);
  FUNC_4(&VAR_7->dev, "Failed to allocate register map: %d\n",
   VAR_12);
  return VAR_12;
 }

 VAR_8->client = VAR_7;
 VAR_8->regmap = VAR_9;

 VAR_8->irq = VAR_7->irq;

 VAR_8->dev = &VAR_7->dev;
 FUNC_5(VAR_8->dev, VAR_8);
 FUNC_9(VAR_8->client, VAR_8);

 VAR_12 = FUNC_10(VAR_8->regmap, VAR_3, &VAR_10);
 if (VAR_12 < 0) {
  FUNC_4(VAR_8->dev, "Failed to read CHIP ID: %d\n", VAR_12);
  return VAR_12;
 }

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
  if (VAR_4[VAR_11].id == FUNC_2(VAR_10)) {
   VAR_8->type = VAR_4[VAR_11].type;
   break;
  }
 }

 if (VAR_11 == FUNC_0(VAR_4)) {
  FUNC_4(VAR_8->dev,
   "Failed to detect Marvell 88PM800:ChipID[0x%x]\n", VAR_10);
  return -VAR_0;
 }

 FUNC_6(&VAR_7->dev, 1);







 if (!VAR_5)
  VAR_5 = VAR_8;
 else {
  VAR_8->companion = VAR_5->client;
  VAR_5->companion = VAR_8->client;
 }

 return 0;
}
