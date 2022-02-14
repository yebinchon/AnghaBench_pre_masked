
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ioc3_private {struct ioc3_ethregs* regs; } ;
struct ioc3_ethregs {int micr; int midr_w; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ioc3_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct ioc3_private *VAR_6 = FUNC_0(VAR_2);
 struct ioc3_ethregs *VAR_7 = VAR_6->regs;

 while (FUNC_1(&VAR_7->micr) & VAR_0)
  ;
 FUNC_2(VAR_5, &VAR_7->midr_w);
 FUNC_2((VAR_3 << VAR_1) | VAR_4, &VAR_7->micr);
 while (FUNC_1(&VAR_7->micr) & VAR_0)
  ;
}
