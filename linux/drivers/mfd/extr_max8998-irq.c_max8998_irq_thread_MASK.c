
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct max8998_dev {int* irq_masks_cur; int irq; int irq_domain; int dev; int i2c; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int reg; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int,int*) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct max8998_dev *VAR_8 = VAR_7;
 u8 VAR_9[VAR_3];
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(VAR_8->i2c, VAR_4,
   VAR_3, VAR_9);
 if (VAR_10 < 0) {
  FUNC_1(VAR_8->dev, "Failed to read interrupt register: %d\n",
    VAR_10);
  return VAR_1;
 }


 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  VAR_9[VAR_11] &= ~VAR_8->irq_masks_cur[VAR_11];


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (VAR_9[VAR_5[VAR_11].reg - 1] & VAR_5[VAR_11].mask) {
   VAR_6 = FUNC_4(VAR_8->irq_domain, VAR_11);
   if (FUNC_0(!VAR_6)) {
    FUNC_2(VAR_8->irq);
    return VAR_1;
   }
   FUNC_3(VAR_6);
  }
 }

 return VAR_0;
}
