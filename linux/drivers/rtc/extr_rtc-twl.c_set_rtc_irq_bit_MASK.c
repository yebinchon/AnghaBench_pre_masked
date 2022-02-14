
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl_rtc {unsigned char rtc_irq_bits; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct twl_rtc*,unsigned char,int ) ;

__attribute__((used)) static int FUNC_1(struct twl_rtc *VAR_2, unsigned char VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;


 if (VAR_2->rtc_irq_bits & VAR_3)
  return 0;

 VAR_4 = VAR_2->rtc_irq_bits | VAR_3;
 VAR_4 &= ~VAR_0;
 VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_1);
 if (VAR_5 == 0)
  VAR_2->rtc_irq_bits = VAR_4;

 return VAR_5;
}
