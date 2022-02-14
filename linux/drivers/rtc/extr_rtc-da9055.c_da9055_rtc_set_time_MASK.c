
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct rtc_time {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct device {int dummy; } ;
struct da9055_rtc {int da9055; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,scalar_t__*) ;
 struct da9055_rtc* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct da9055_rtc *VAR_3;
 uint8_t VAR_4[6];

 VAR_3 = FUNC_1(VAR_1);

 VAR_4[0] = VAR_2->tm_sec;
 VAR_4[1] = VAR_2->tm_min;
 VAR_4[2] = VAR_2->tm_hour;
 VAR_4[3] = VAR_2->tm_mday;
 VAR_4[4] = VAR_2->tm_mon + 1;
 VAR_4[5] = VAR_2->tm_year - 100;

 return FUNC_0(VAR_3->da9055, VAR_0, 6, VAR_4);
}
