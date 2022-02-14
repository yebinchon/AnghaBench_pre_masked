
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tps65217 {TYPE_2__* dev; int irq_domain; int regmap; } ;
struct TYPE_10__ {int of_node; } ;
struct i2c_client {int irq; TYPE_2__ dev; } ;
struct TYPE_9__ {scalar_t__ num_resources; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,char*,unsigned int,unsigned int) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 struct tps65217* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_2__*,int,TYPE_1__*,int,int *,int ,int ) ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (struct i2c_client*,struct tps65217*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct tps65217*,int ) ;
 int FUNC_12 (struct tps65217*,int ,unsigned int*) ;
 int VAR_8 ;
 int FUNC_13 (struct tps65217*,int ,int ,int ,int ) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_10)
{
 struct tps65217 *VAR_11;
 unsigned int VAR_12;
 bool VAR_13 = 0;
 int VAR_14;

 VAR_13 = FUNC_10(VAR_10->dev.of_node,
        "ti,pmic-shutdown-controller");

 VAR_11 = FUNC_6(&VAR_10->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_9(VAR_10, VAR_11);
 VAR_11->dev = &VAR_10->dev;

 VAR_11->regmap = FUNC_8(VAR_10, &VAR_8);
 if (FUNC_1(VAR_11->regmap)) {
  VAR_14 = FUNC_2(VAR_11->regmap);
  FUNC_3(VAR_11->dev, "Failed to allocate register map: %d\n",
   VAR_14);
  return VAR_14;
 }

 if (VAR_10->irq) {
  FUNC_11(VAR_11, VAR_10->irq);
 } else {
  int VAR_15;


  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_9); VAR_15++)
   VAR_9[VAR_15].num_resources = 0;
 }

 VAR_14 = FUNC_7(VAR_11->dev, -1, VAR_9,
       FUNC_0(VAR_9), ((void*)0), 0,
       VAR_11->irq_domain);
 if (VAR_14 < 0) {
  FUNC_3(VAR_11->dev, "mfd_add_devices failed: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_12(VAR_11, VAR_5, &VAR_12);
 if (VAR_14 < 0) {
  FUNC_3(VAR_11->dev, "Failed to read revision register: %d\n",
   VAR_14);
  return VAR_14;
 }


 if (VAR_13) {
  VAR_14 = FUNC_13(VAR_11, VAR_6,
    VAR_7, VAR_7,
    VAR_4);
  if (VAR_14)
   FUNC_5(VAR_11->dev, "unable to set the status OFF\n");
 }

 FUNC_4(VAR_11->dev, "TPS65217 ID %#x version 1.%d\n",
   (VAR_12 & VAR_2) >> 4,
   VAR_12 & VAR_3);

 return 0;
}
