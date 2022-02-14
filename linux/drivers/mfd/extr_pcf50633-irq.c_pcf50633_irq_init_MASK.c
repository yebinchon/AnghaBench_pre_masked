
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633 {int irq; int* mask_regs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (struct pcf50633*,int ,int) ;
 int FUNC_3 (int,int *,int ,int,char*,struct pcf50633*) ;

int FUNC_4(struct pcf50633 *VAR_8, int VAR_9)
{
 int VAR_10;

 VAR_8->irq = VAR_9;


 VAR_8->mask_regs[0] = 0x80;
 FUNC_2(VAR_8, VAR_2, VAR_8->mask_regs[0]);
 FUNC_2(VAR_8, VAR_3, 0x00);
 FUNC_2(VAR_8, VAR_4, 0x00);
 FUNC_2(VAR_8, VAR_5, 0x00);
 FUNC_2(VAR_8, VAR_6, 0x00);

 VAR_10 = FUNC_3(VAR_9, ((void*)0), VAR_7,
     VAR_1 | VAR_0,
     "pcf50633", VAR_8);

 if (VAR_10)
  FUNC_0(VAR_8->dev, "Failed to request IRQ %d\n", VAR_10);

 if (FUNC_1(VAR_9) < 0)
  FUNC_0(VAR_8->dev, "IRQ %u cannot be enabled as wake-up source"
   "in this hardware revision", VAR_9);

 return VAR_10;
}
