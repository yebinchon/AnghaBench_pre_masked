
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sam9_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,unsigned int,int) ;
 struct sam9_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (struct sam9_rtc*,int ) ;
 int FUNC_3 (struct sam9_rtc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, unsigned int VAR_3)
{
 struct sam9_rtc *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5 = FUNC_2(VAR_4, VAR_1);

 FUNC_0(VAR_2, "alarm_irq_enable: enabled=%08x, mr %08x\n", VAR_3, VAR_5);
 if (VAR_3)
  FUNC_3(VAR_4, VAR_1, VAR_5 | VAR_0);
 else
  FUNC_3(VAR_4, VAR_1, VAR_5 & ~VAR_0);
 return 0;
}
