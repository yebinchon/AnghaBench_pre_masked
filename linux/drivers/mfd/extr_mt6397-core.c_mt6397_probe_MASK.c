
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mt6397_chip {unsigned int chip_id; scalar_t__ irq; int irq_domain; int regmap; TYPE_1__* dev; } ;
struct chip_data {unsigned int cid_shift; int cid_addr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (int ,int *) ;
 struct mt6397_chip* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int,int ,int ,int *,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct mt6397_chip*) ;
 struct chip_data* FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,struct mt6397_chip*) ;
 int FUNC_10 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 struct mt6397_chip *VAR_8;
 const struct chip_data *VAR_9;

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->dev = &VAR_5->dev;





 VAR_8->regmap = FUNC_2(VAR_5->dev.parent, ((void*)0));
 if (!VAR_8->regmap)
  return -VAR_0;

 VAR_9 = FUNC_7(&VAR_5->dev);
 if (!VAR_9)
  return -VAR_0;

 VAR_6 = FUNC_10(VAR_8->regmap, VAR_9->cid_addr, &VAR_7);
 if (VAR_6) {
  FUNC_1(&VAR_5->dev, "Failed to read chip id: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_8->chip_id = (VAR_7 >> VAR_9->cid_shift) & 0xff;

 FUNC_9(VAR_5, VAR_8);

 VAR_8->irq = FUNC_8(VAR_5, 0);
 if (VAR_8->irq <= 0)
  return VAR_8->irq;

 VAR_6 = FUNC_6(VAR_8);
 if (VAR_6)
  return VAR_6;

 switch (VAR_8->chip_id) {
 case 130:
  VAR_6 = FUNC_4(&VAR_5->dev, -1, VAR_3,
        FUNC_0(VAR_3), ((void*)0),
        0, VAR_8->irq_domain);
  break;

 case 129:
 case 128:
  VAR_6 = FUNC_4(&VAR_5->dev, -1, VAR_4,
        FUNC_0(VAR_4), ((void*)0),
        0, VAR_8->irq_domain);
  break;

 default:
  FUNC_1(&VAR_5->dev, "unsupported chip: %d\n", VAR_8->chip_id);
  return -VAR_0;
 }

 if (VAR_6) {
  FUNC_5(VAR_8->irq_domain);
  FUNC_1(&VAR_5->dev, "failed to add child devices: %d\n", VAR_6);
 }

 return VAR_6;
}
