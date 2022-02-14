
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct device {int dummy; } ;
struct cdns_rtc {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cdns_rtc*) ;
 int FUNC_3 (int ,struct rtc_time*) ;
 int FUNC_4 (struct cdns_rtc*,int) ;
 struct cdns_rtc* FUNC_5 (struct device*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_8, struct rtc_time *VAR_9)
{
 struct cdns_rtc *VAR_10 = FUNC_5(VAR_8);
 u32 VAR_11;


 if (!FUNC_2(VAR_10))
  return -VAR_7;

 FUNC_4(VAR_10, 0);

 VAR_11 = FUNC_6(VAR_10->regs + VAR_6);
 FUNC_3(VAR_11, VAR_9);

 VAR_11 = FUNC_6(VAR_10->regs + VAR_0);
 VAR_9->tm_mday = FUNC_1(FUNC_0(VAR_2, VAR_11));
 VAR_9->tm_mon = FUNC_1(FUNC_0(VAR_4, VAR_11)) - 1;
 VAR_9->tm_year = FUNC_1(FUNC_0(VAR_5, VAR_11))
      + FUNC_1(FUNC_0(VAR_1, VAR_11)) * 100 - 1900;
 VAR_9->tm_wday = FUNC_1(FUNC_0(VAR_3, VAR_11)) - 1;

 FUNC_4(VAR_10, 1);
 return 0;
}
