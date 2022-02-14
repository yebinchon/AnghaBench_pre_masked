
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct jz4740_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct jz4740_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct jz4740_rtc*,int ,int) ;
 int FUNC_2 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct jz4740_rtc *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_1, FUNC_2(VAR_3));
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_4, VAR_0, 0x12345678);
}
