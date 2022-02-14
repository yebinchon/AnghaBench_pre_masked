
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ioc3_private {struct ioc3_ethregs* regs; } ;
struct ioc3_ethregs {int midr_r; int micr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ioc3_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, int VAR_5, int VAR_6)
{
 struct ioc3_private *VAR_7 = FUNC_0(VAR_4);
 struct ioc3_ethregs *VAR_8 = VAR_7->regs;

 while (FUNC_1(&VAR_8->micr) & VAR_0)
  ;
 FUNC_2((VAR_5 << VAR_1) | VAR_6 | VAR_2,
        &VAR_8->micr);
 while (FUNC_1(&VAR_8->micr) & VAR_0)
  ;

 return FUNC_1(&VAR_8->midr_r) & VAR_3;
}
