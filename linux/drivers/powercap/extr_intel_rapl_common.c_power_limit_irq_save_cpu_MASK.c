
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rapl_package {int power_limit_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_3)
{
 u32 VAR_4, VAR_5 = 0;
 struct rapl_package *VAR_6 = (struct rapl_package *)VAR_3;


 FUNC_0(VAR_0, &VAR_4, &VAR_5);
 if (!(VAR_6->power_limit_irq & VAR_1)) {
  VAR_6->power_limit_irq = VAR_4 & VAR_2;
  VAR_6->power_limit_irq |= VAR_1;
 }
 VAR_4 &= ~VAR_2;
 FUNC_1(VAR_0, VAR_4, VAR_5);
}
