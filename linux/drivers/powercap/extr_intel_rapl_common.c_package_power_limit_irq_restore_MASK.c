
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rapl_package {int power_limit_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct rapl_package *VAR_5)
{
 u32 VAR_6, VAR_7;

 if (!FUNC_0(VAR_4) || !FUNC_0(VAR_3))
  return;


 if (!(VAR_5->power_limit_irq & VAR_1))
  return;

 FUNC_1(VAR_0, &VAR_6, &VAR_7);

 if (VAR_5->power_limit_irq & VAR_2)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;

 FUNC_2(VAR_0, VAR_6, VAR_7);
}
