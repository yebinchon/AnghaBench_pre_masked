
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct omap_rtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (struct omap_rtc*,int ) ;

__attribute__((used)) static void FUNC_1(struct omap_rtc *VAR_6, struct rtc_time *VAR_7)
{
 VAR_7->tm_sec = FUNC_0(VAR_6, VAR_4);
 VAR_7->tm_min = FUNC_0(VAR_6, VAR_2);
 VAR_7->tm_hour = FUNC_0(VAR_6, VAR_1);
 VAR_7->tm_mday = FUNC_0(VAR_6, VAR_0);
 VAR_7->tm_mon = FUNC_0(VAR_6, VAR_3);
 VAR_7->tm_year = FUNC_0(VAR_6, VAR_5);
}
