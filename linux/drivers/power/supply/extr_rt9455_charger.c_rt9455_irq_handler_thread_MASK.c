
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt9455_info {scalar_t__ charger; int * regmap_fields; TYPE_1__* client; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int irq; struct device dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,unsigned int*) ;
 int FUNC_4 (struct rt9455_info*,int*,int*) ;
 int FUNC_5 (struct rt9455_info*,int,int*) ;
 int FUNC_6 (struct rt9455_info*,int*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct rt9455_info *VAR_5 = VAR_4;
 struct device *VAR_6;
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 unsigned int VAR_9;
 int VAR_10;

 if (!VAR_5)
  return VAR_2;

 VAR_6 = &VAR_5->client->dev;

 if (VAR_3 != VAR_5->client->irq) {
  FUNC_1(VAR_6, "Interrupt is not for RT9455 charger\n");
  return VAR_2;
 }

 VAR_10 = FUNC_3(VAR_5->regmap_fields[VAR_0], &VAR_9);
 if (VAR_10) {
  FUNC_1(VAR_6, "Failed to read STAT bits\n");
  return VAR_1;
 }
 FUNC_0(VAR_6, "Charger status is %d\n", VAR_9);
 VAR_10 = FUNC_4(VAR_5, &VAR_8,
           &VAR_7);
 if (VAR_10) {
  FUNC_1(VAR_6, "Failed to handle IRQ1 register\n");
  return VAR_1;
 }

 VAR_10 = FUNC_5(VAR_5, VAR_8,
           &VAR_7);
 if (VAR_10) {
  FUNC_1(VAR_6, "Failed to handle IRQ2 register\n");
  return VAR_1;
 }

 VAR_10 = FUNC_6(VAR_5, &VAR_7);
 if (VAR_10) {
  FUNC_1(VAR_6, "Failed to handle IRQ3 register\n");
  return VAR_1;
 }

 if (VAR_7) {





  if (VAR_5->charger)
   FUNC_2(VAR_5->charger);
 }

 return VAR_1;
}
