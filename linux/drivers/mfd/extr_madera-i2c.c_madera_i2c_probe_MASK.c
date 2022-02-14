
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int dummy; } ;
struct madera {unsigned long type; char const* type_name; int irq; int * dev; void* regmap_32bit; void* regmap; } ;
struct i2c_device_id {unsigned long driver_data; } ;
struct i2c_client {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

 struct regmap_config VAR_8 ;
 struct regmap_config VAR_9 ;
 struct regmap_config VAR_10 ;
 struct regmap_config VAR_11 ;
 struct regmap_config VAR_12 ;
 struct regmap_config VAR_13 ;
 struct regmap_config VAR_14 ;
 struct regmap_config VAR_15 ;
 struct regmap_config VAR_16 ;
 struct regmap_config VAR_17 ;
 int FUNC_3 (int *,char*,...) ;
 struct madera* FUNC_4 (int *,int,int ) ;
 void* FUNC_5 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_6 (struct madera*) ;
 char* FUNC_7 (unsigned long) ;
 void* FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_18,
       const struct i2c_device_id *VAR_19)
{
 struct madera *VAR_20;
 const struct regmap_config *VAR_21 = ((void*)0);
 const struct regmap_config *VAR_22 = ((void*)0);
 const void *VAR_23;
 unsigned long VAR_24;
 const char *VAR_25;
 int VAR_26;

 VAR_23 = FUNC_8(&VAR_18->dev);
 if (VAR_23)
  VAR_24 = (unsigned long)VAR_23;
 else
  VAR_24 = VAR_19->driver_data;

 switch (VAR_24) {
 case 135:
  if (FUNC_0(VAR_0)) {
   VAR_21 = &VAR_8;
   VAR_22 = &VAR_9;
  }
  break;
 case 134:
  if (FUNC_0(VAR_1)) {
   VAR_21 = &VAR_10;
   VAR_22 = &VAR_11;
  }
  break;
 case 133:
 case 128:
  if (FUNC_0(VAR_2)) {
   VAR_21 = &VAR_12;
   VAR_22 = &VAR_13;
  }
  break;
 case 132:
 case 131:
  if (FUNC_0(VAR_3)) {
   VAR_21 = &VAR_14;
   VAR_22 = &VAR_15;
  }
  break;
 case 136:
 case 130:
 case 129:
  if (FUNC_0(VAR_4)) {
   VAR_21 = &VAR_16;
   VAR_22 = &VAR_17;
  }
  break;
 default:
  FUNC_3(&VAR_18->dev,
   "Unknown Madera I2C device type %ld\n", VAR_24);
  return -VAR_5;
 }

 VAR_25 = FUNC_7(VAR_24);

 if (!VAR_21) {

  FUNC_3(&VAR_18->dev,
   "Kernel does not include support for %s\n", VAR_25);
  return -VAR_5;
 }

 VAR_20 = FUNC_4(&VAR_18->dev, sizeof(*VAR_20), VAR_7);
 if (!VAR_20)
  return -VAR_6;


 VAR_20->regmap = FUNC_5(VAR_18, VAR_21);
 if (FUNC_1(VAR_20->regmap)) {
  VAR_26 = FUNC_2(VAR_20->regmap);
  FUNC_3(&VAR_18->dev,
   "Failed to allocate 16-bit register map: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_20->regmap_32bit = FUNC_5(VAR_18, VAR_22);
 if (FUNC_1(VAR_20->regmap_32bit)) {
  VAR_26 = FUNC_2(VAR_20->regmap_32bit);
  FUNC_3(&VAR_18->dev,
   "Failed to allocate 32-bit register map: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_20->type = VAR_24;
 VAR_20->type_name = VAR_25;
 VAR_20->dev = &VAR_18->dev;
 VAR_20->irq = VAR_18->irq;

 return FUNC_6(VAR_20);
}
