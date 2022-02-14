
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_devdata {int reg_lock; int dev; scalar_t__ regs; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long) ;
 struct sm501_devdata* FUNC_1 (struct device*) ;
 int FUNC_2 (struct sm501_devdata*) ;
 unsigned long FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned long,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct device *VAR_1,
         unsigned long VAR_2, unsigned long VAR_3)
{
 struct sm501_devdata *VAR_4 = FUNC_1(VAR_1);
 unsigned long VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;

 FUNC_5(&VAR_4->reg_lock, VAR_6);

 VAR_5 = FUNC_3(VAR_4->regs + VAR_0);
 VAR_7 = (VAR_5 & ~VAR_3) | VAR_2;

 if (VAR_7 != VAR_5) {
  FUNC_4(VAR_7, VAR_4->regs + VAR_0);
  FUNC_2(VAR_4);

  FUNC_0(VAR_4->dev, "MISC_CONTROL %08lx\n", VAR_5);
 }

 FUNC_6(&VAR_4->reg_lock, VAR_6);
 return VAR_7;
}
