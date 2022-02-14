
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dev; int name; } ;
struct TYPE_2__ {int irq; } ;
struct adt7316_chip_info {int config1; TYPE_1__ bus; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ,int *,int ,int,int ,struct iio_dev*) ;
 struct adt7316_chip_info* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_3)
{
 struct adt7316_chip_info *VAR_4 = FUNC_3(VAR_3);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_5(FUNC_4(VAR_4->bus.irq));

 switch (VAR_5) {
 case 130:
 case 128:
  break;
 case 129:
 case 131:
  break;
 default:
  FUNC_1(&VAR_3->dev, "mode %d unsupported, using IRQF_TRIGGER_LOW\n",
    VAR_5);
  VAR_5 = 129;
  break;
 }

 VAR_6 = FUNC_2(&VAR_3->dev, VAR_4->bus.irq,
     ((void*)0), VAR_2,
     VAR_5 | VAR_1,
     VAR_3->name, VAR_3);
 if (VAR_6) {
  FUNC_0(&VAR_3->dev, "failed to request irq %d\n",
   VAR_4->bus.irq);
  return VAR_6;
 }

 if (VAR_5 & 130)
  VAR_4->config1 |= VAR_0;

 return 0;
}
