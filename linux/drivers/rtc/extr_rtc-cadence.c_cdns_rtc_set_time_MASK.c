
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int tm_year; int tm_mday; int tm_mon; scalar_t__ tm_wday; } ;
struct device {int dummy; } ;
struct cdns_rtc {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct cdns_rtc*,int) ;
 int FUNC_3 (struct rtc_time*) ;
 struct cdns_rtc* FUNC_4 (struct device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_11, struct rtc_time *VAR_12)
{
 struct cdns_rtc *VAR_13 = FUNC_4(VAR_11);
 u32 VAR_14, VAR_15, VAR_16;
 int VAR_17 = -VAR_10;
 int VAR_18 = VAR_12->tm_year + 1900;
 int VAR_19;

 FUNC_2(VAR_13, 0);

 VAR_14 = FUNC_3(VAR_12);

 VAR_15 = FUNC_0(VAR_2, FUNC_1(VAR_12->tm_mday))
      | FUNC_0(VAR_4, FUNC_1(VAR_12->tm_mon + 1))
      | FUNC_0(VAR_5, FUNC_1(VAR_18 % 100))
      | FUNC_0(VAR_1, FUNC_1(VAR_18 / 100))
      | FUNC_0(VAR_3, VAR_12->tm_wday + 1);


 for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19++) {
  FUNC_6(VAR_14, VAR_13->regs + VAR_9);
  FUNC_6(VAR_15, VAR_13->regs + VAR_0);
  VAR_16 = FUNC_5(VAR_13->regs + VAR_7);

  if ((VAR_16 & VAR_8) == VAR_8) {
   VAR_17 = 0;
   break;
  }
 }

 FUNC_2(VAR_13, 1);
 return VAR_17;
}
