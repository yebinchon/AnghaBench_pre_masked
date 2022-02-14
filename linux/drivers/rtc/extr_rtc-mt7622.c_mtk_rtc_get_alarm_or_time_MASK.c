
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtc_time {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_wday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct mtk_rtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct mtk_rtc*,int ) ;

__attribute__((used)) static void FUNC_2(struct mtk_rtc *VAR_8, struct rtc_time *VAR_9,
          int VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;







 do {
  VAR_17 = FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_6));
  VAR_16 = FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_3));
  VAR_15 = FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_2));
  VAR_14 = FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_1));
  VAR_13 = FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_0));
  VAR_12 = FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_4));
  VAR_11 = FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_7));
 } while (VAR_17 != FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_6)));

 VAR_9->tm_sec = VAR_17;
 VAR_9->tm_min = VAR_16;
 VAR_9->tm_hour = VAR_15;
 VAR_9->tm_wday = VAR_14;
 VAR_9->tm_mday = VAR_13;
 VAR_9->tm_mon = VAR_12 - 1;


 VAR_9->tm_year = VAR_11 + VAR_5;
}
