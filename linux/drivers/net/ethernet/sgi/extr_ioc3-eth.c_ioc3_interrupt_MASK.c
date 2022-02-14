
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ioc3_private {struct ioc3_ethregs* regs; } ;
struct ioc3_ethregs {int eisr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 struct ioc3_private* FUNC_3 (void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 struct ioc3_private *VAR_11 = FUNC_3(VAR_10);
 struct ioc3_ethregs *VAR_12 = VAR_11->regs;
 u32 VAR_13;

 VAR_13 = FUNC_4(&VAR_12->eisr);
 FUNC_5(VAR_13, &VAR_12->eisr);
 FUNC_4(&VAR_12->eisr);

 if (VAR_13 & (VAR_2 | VAR_0 | VAR_1 |
      VAR_3 | VAR_5 | VAR_7))
  FUNC_0(VAR_10, VAR_13);
 if (VAR_13 & VAR_4)
  FUNC_1(VAR_10);
 if (VAR_13 & VAR_6)
  FUNC_2(VAR_10);

 return VAR_8;
}
