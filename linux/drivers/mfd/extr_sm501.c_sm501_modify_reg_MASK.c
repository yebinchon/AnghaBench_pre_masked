
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_devdata {int reg_lock; scalar_t__ regs; } ;
struct device {int dummy; } ;


 struct sm501_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct sm501_devdata*) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

unsigned long FUNC_6(struct device *VAR_0,
          unsigned long VAR_1,
          unsigned long VAR_2,
          unsigned long VAR_3)
{
 struct sm501_devdata *VAR_4 = FUNC_0(VAR_0);
 unsigned long VAR_5;
 unsigned long VAR_6;

 FUNC_4(&VAR_4->reg_lock, VAR_6);

 VAR_5 = FUNC_2(VAR_4->regs + VAR_1);
 VAR_5 |= VAR_2;
 VAR_5 &= ~VAR_3;

 FUNC_3(VAR_5, VAR_4->regs + VAR_1);
 FUNC_1(VAR_4);

 FUNC_5(&VAR_4->reg_lock, VAR_6);

 return VAR_5;
}
