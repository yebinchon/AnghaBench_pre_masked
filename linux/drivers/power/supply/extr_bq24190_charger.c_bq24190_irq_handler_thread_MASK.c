
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq24190_dev_info {int irq_event; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bq24190_dev_info*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct bq24190_dev_info *VAR_4 = VAR_3;
 int VAR_5;

 VAR_4->irq_event = 1;
 VAR_5 = FUNC_2(VAR_4->dev);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4->dev, "pm_runtime_get failed: %i\n", VAR_5);
  FUNC_5(VAR_4->dev);
  return VAR_1;
 }
 FUNC_0(VAR_4);
 FUNC_3(VAR_4->dev);
 FUNC_4(VAR_4->dev);
 VAR_4->irq_event = 0;

 return VAR_0;
}
