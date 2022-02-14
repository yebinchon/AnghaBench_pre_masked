
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtc_time {int dummy; } ;
struct jz4740_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct jz4740_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct jz4740_rtc*,int ) ;
 int FUNC_2 (int,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, struct rtc_time *VAR_5)
{
 struct jz4740_rtc *VAR_6 = FUNC_0(VAR_4);
 uint32_t VAR_7, VAR_8;
 int VAR_9 = 5;

 if (FUNC_1(VAR_6, VAR_2) != 0x12345678)
  return -VAR_0;





 VAR_7 = FUNC_1(VAR_6, VAR_3);
 VAR_8 = FUNC_1(VAR_6, VAR_3);

 while (VAR_7 != VAR_8 && --VAR_9) {
  VAR_7 = VAR_8;
  VAR_8 = FUNC_1(VAR_6, VAR_3);
 }

 if (VAR_9 == 0)
  return -VAR_1;

 FUNC_2(VAR_7, VAR_5);

 return 0;
}
