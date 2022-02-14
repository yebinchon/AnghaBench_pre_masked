
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_rtc {scalar_t__ mmio_base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 struct ep93xx_rtc* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_5, unsigned short *VAR_6,
     unsigned short *VAR_7)
{
 struct ep93xx_rtc *VAR_8 = FUNC_0(VAR_5);
 unsigned long VAR_9;

 VAR_9 = FUNC_1(VAR_8->mmio_base + VAR_0);

 if (VAR_6)
  *VAR_6 = (VAR_9 & VAR_3)
    >> VAR_4;

 if (VAR_7)
  *VAR_7 = (VAR_9 & VAR_1)
    >> VAR_2;

 return 0;
}
