
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtc_time {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_wday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
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
 int FUNC_1 (struct mtk_rtc*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtk_rtc *VAR_8, struct rtc_time *VAR_9,
          int VAR_10)
{
 u32 VAR_11;


 VAR_11 = VAR_9->tm_year - VAR_5;

 FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_7), VAR_11);
 FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_4), VAR_9->tm_mon + 1);
 FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_1), VAR_9->tm_wday);
 FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_0), VAR_9->tm_mday);
 FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_2), VAR_9->tm_hour);
 FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_3), VAR_9->tm_min);
 FUNC_1(VAR_8, FUNC_0(VAR_10, VAR_6), VAR_9->tm_sec);
}
