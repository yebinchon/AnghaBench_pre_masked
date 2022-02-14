
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl_rtc {unsigned char rtc_irq_bits; } ;


 int VAR_0 ;
 int FUNC_0 (struct twl_rtc*,unsigned char,int ) ;

__attribute__((used)) static int FUNC_1(struct twl_rtc *VAR_1, unsigned char VAR_2)
{
 unsigned char VAR_3;
 int VAR_4;


 if (!(VAR_1->rtc_irq_bits & VAR_2))
  return 0;

 VAR_3 = VAR_1->rtc_irq_bits & ~VAR_2;
 VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_0);
 if (VAR_4 == 0)
  VAR_1->rtc_irq_bits = VAR_3;

 return VAR_4;
}
