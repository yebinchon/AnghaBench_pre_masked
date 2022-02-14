
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct retu_dev {int irq_data; int * dev; int regmap; int mutex; } ;
struct retu_data {char* companion_name; int nchildren; int children; TYPE_1__* irq_chip; int chip_name; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int irq; int dev; } ;
struct TYPE_2__ {int mask_base; } ;


 int FUNC_0 (struct retu_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (int *,char*,int ,char*,char*,int,int) ;
 struct retu_dev* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int *,int *,int *) ;
 int FUNC_7 (struct i2c_client*,struct retu_dev*) ;
 int FUNC_8 (int *,int,int ,int ,int *,int ,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int ,int ,int ,int,TYPE_1__*,int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct retu_data* VAR_9 ;
 struct retu_dev* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (struct retu_dev*,int ) ;
 int FUNC_14 (struct retu_dev*,int ,int) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_12, const struct i2c_device_id *VAR_13)
{
 struct retu_data const *VAR_14;
 struct retu_dev *VAR_15;
 int VAR_16;

 if (VAR_12->addr > FUNC_0(VAR_9))
  return -VAR_0;
 VAR_14 = &VAR_9[VAR_12->addr - 1];

 VAR_15 = FUNC_5(&VAR_12->dev, sizeof(*VAR_15), VAR_2);
 if (VAR_15 == ((void*)0))
  return -VAR_1;

 FUNC_7(VAR_12, VAR_15);
 VAR_15->dev = &VAR_12->dev;
 FUNC_9(&VAR_15->mutex);
 VAR_15->regmap = FUNC_6(&VAR_12->dev, &VAR_7, &VAR_12->dev,
     &VAR_8);
 if (FUNC_1(VAR_15->regmap))
  return FUNC_2(VAR_15->regmap);

 VAR_16 = FUNC_13(VAR_15, VAR_4);
 if (VAR_16 < 0) {
  FUNC_3(VAR_15->dev, "could not read %s revision: %d\n",
   VAR_14->chip_name, VAR_16);
  return VAR_16;
 }

 FUNC_4(VAR_15->dev, "%s%s%s v%d.%d found\n", VAR_14->chip_name,
   (VAR_16 & VAR_5) ? " & " : "",
   (VAR_16 & VAR_5) ? VAR_14->companion_name : "",
   (VAR_16 >> 4) & 0x7, VAR_16 & 0xf);


 VAR_16 = FUNC_14(VAR_15, VAR_14->irq_chip->mask_base, 0xffff);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_10(VAR_15->regmap, VAR_12->irq, VAR_3, -1,
      VAR_14->irq_chip, &VAR_15->irq_data);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_8(VAR_15->dev, -1, VAR_14->children, VAR_14->nchildren,
         ((void*)0), FUNC_12(VAR_15->irq_data),
         ((void*)0));
 if (VAR_16 < 0) {
  FUNC_11(VAR_12->irq, VAR_15->irq_data);
  return VAR_16;
 }

 if (VAR_12->addr == 1 && !VAR_6) {
  VAR_10 = VAR_15;
  VAR_6 = VAR_11;
 }

 return 0;
}
