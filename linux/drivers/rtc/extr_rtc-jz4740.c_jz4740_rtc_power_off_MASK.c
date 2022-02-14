
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4740_rtc {unsigned long min_wakeup_pin_assert_time; unsigned long reset_pin_assert_time; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 struct jz4740_rtc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct jz4740_rtc*,int ,unsigned long) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void)
{
 struct jz4740_rtc *VAR_5 = FUNC_2(VAR_4);
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;

 FUNC_1(VAR_5->clk);

 VAR_6 = FUNC_0(VAR_5->clk);





 VAR_7 =
  (VAR_5->min_wakeup_pin_assert_time * VAR_6) / 1000;
 if (VAR_7 < VAR_3)
  VAR_7 &= VAR_3;
 else
  VAR_7 = VAR_3;
 FUNC_4(VAR_5,
        VAR_1, VAR_7);





 VAR_8 = (VAR_5->reset_pin_assert_time * VAR_6) / 1000;
 if (VAR_8 < VAR_2)
  VAR_8 &= VAR_2;
 else
  VAR_8 = VAR_2;
 FUNC_4(VAR_5,
        VAR_0, VAR_8);

 FUNC_3(VAR_4);
 FUNC_5();
}
