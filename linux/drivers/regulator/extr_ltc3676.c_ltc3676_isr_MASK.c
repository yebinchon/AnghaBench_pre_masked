
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc3676 {int regmap; int * regulators; struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct device*,char*,int,unsigned int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned int,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 struct ltc3676 *VAR_10 = VAR_9;
 struct device *VAR_11 = VAR_10->dev;
 unsigned int VAR_12, VAR_13, VAR_14;

 FUNC_3(VAR_10->regmap, VAR_2, &VAR_13);

 FUNC_0(VAR_11, "irq%d irqstat=0x%02x\n", VAR_8, VAR_13);
 if (VAR_13 & VAR_3) {
  FUNC_2(VAR_11, "Over-temperature Warning\n");
  VAR_14 = VAR_6;
  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
   FUNC_5(VAR_10->regulators[VAR_12]);
   FUNC_6(VAR_10->regulators[VAR_12],
            VAR_14, ((void*)0));
   FUNC_7(VAR_10->regulators[VAR_12]);
  }
 }

 if (VAR_13 & VAR_4) {
  FUNC_1(VAR_11, "Undervoltage Warning\n");
  VAR_14 = VAR_7;
  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
   FUNC_5(VAR_10->regulators[VAR_12]);
   FUNC_6(VAR_10->regulators[VAR_12],
            VAR_14, ((void*)0));
   FUNC_7(VAR_10->regulators[VAR_12]);
  }
 }


 FUNC_4(VAR_10->regmap, VAR_1, 0);

 return VAR_0;
}
