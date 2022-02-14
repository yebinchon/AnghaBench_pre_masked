
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct sun4i_gpadc_dev {TYPE_1__* dev; int regmap_irqc; int regmap; int base; } ;
struct resource {int dummy; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct mfd_cell {int dummy; } ;





 unsigned int FUNC_0 (struct mfd_cell*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,struct sun4i_gpadc_dev*) ;
 int FUNC_5 (TYPE_1__*,struct resource*) ;
 struct sun4i_gpadc_dev* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int ,struct mfd_cell const*,unsigned int,int *,int ,int *) ;
 int FUNC_8 (TYPE_1__*,int ,unsigned int,int ,int ,int *,int *) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;
 struct of_device_id* FUNC_10 (int ,int ) ;
 unsigned int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 struct mfd_cell* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mfd_cell* VAR_10 ;
 struct mfd_cell* VAR_11 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_12)
{
 struct sun4i_gpadc_dev *VAR_13;
 struct resource *VAR_14;
 const struct of_device_id *VAR_15;
 const struct mfd_cell *VAR_16;
 unsigned int VAR_17, VAR_18;
 int VAR_19;

 VAR_15 = FUNC_10(VAR_7, VAR_12->dev.of_node);
 if (!VAR_15)
  return -VAR_0;

 switch ((long)VAR_15->data) {
 case 130:
  VAR_16 = VAR_6;
  VAR_18 = FUNC_0(VAR_6);
  break;
 case 129:
  VAR_16 = VAR_10;
  VAR_18 = FUNC_0(VAR_10);
  break;
 case 128:
  VAR_16 = VAR_11;
  VAR_18 = FUNC_0(VAR_11);
  break;
 default:
  return -VAR_0;
 }

 VAR_13 = FUNC_6(&VAR_12->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_14 = FUNC_12(VAR_12, VAR_3, 0);
 VAR_13->base = FUNC_5(&VAR_12->dev, VAR_14);
 if (FUNC_1(VAR_13->base))
  return FUNC_2(VAR_13->base);

 VAR_13->dev = &VAR_12->dev;
 FUNC_4(VAR_13->dev, VAR_13);

 VAR_13->regmap = FUNC_9(VAR_13->dev, VAR_13->base,
         &VAR_8);
 if (FUNC_1(VAR_13->regmap)) {
  VAR_19 = FUNC_2(VAR_13->regmap);
  FUNC_3(&VAR_12->dev, "failed to init regmap: %d\n", VAR_19);
  return VAR_19;
 }


 FUNC_13(VAR_13->regmap, VAR_5, 0);

 VAR_17 = FUNC_11(VAR_12, 0);
 VAR_19 = FUNC_8(&VAR_12->dev, VAR_13->regmap, VAR_17,
           VAR_4, 0,
           &VAR_9,
           &VAR_13->regmap_irqc);
 if (VAR_19) {
  FUNC_3(&VAR_12->dev, "failed to add irq chip: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_7(VAR_13->dev, 0, VAR_16, VAR_18, ((void*)0), 0, ((void*)0));
 if (VAR_19) {
  FUNC_3(&VAR_12->dev, "failed to add MFD devices: %d\n", VAR_19);
  return VAR_19;
 }

 return 0;
}
