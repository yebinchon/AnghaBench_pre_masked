
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct armada38x_rtc {int dummy; } ;


 long FUNC_0 (long,int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 long FUNC_1 (long) ;
 long FUNC_2 (long,long,long) ;
 struct armada38x_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (unsigned long,struct armada38x_rtc*,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, long VAR_3)
{
 struct armada38x_rtc *VAR_4 = FUNC_3(VAR_2);
 unsigned long VAR_5 = 0;
 long VAR_6, VAR_7;







 VAR_3 = FUNC_2(VAR_3, -484270L, 488558L);

 VAR_6 = FUNC_1(VAR_3);





 VAR_7 = FUNC_0(VAR_6, 954);
 if (VAR_7 > 127 || VAR_7 < -128) {
  VAR_5 = VAR_1;
  VAR_7 = FUNC_0(VAR_6, 3815);
 }





 VAR_5 |= (VAR_7 & 0x3fff) ^ 0x2000;
 FUNC_4(VAR_5, VAR_4, VAR_0);

 return 0;
}
