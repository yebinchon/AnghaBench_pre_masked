
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mon; int tm_mday; int tm_year; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct wm8350* FUNC_0 (struct device*) ;
 int FUNC_1 (struct wm8350*,int ,int,int*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_10, struct rtc_wkalrm *VAR_11)
{
 struct wm8350 *VAR_12 = FUNC_0(VAR_10);
 struct rtc_time *VAR_13 = &VAR_11->time;
 u16 VAR_14[4];
 int VAR_15;

 VAR_15 = FUNC_1(VAR_12, VAR_0, 4, VAR_14);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_13->tm_sec = VAR_14[0] & VAR_8;
 if (VAR_13->tm_sec == VAR_8)
  VAR_13->tm_sec = -1;

 VAR_13->tm_min = VAR_14[0] & VAR_4;
 if (VAR_13->tm_min == VAR_4)
  VAR_13->tm_min = -1;
 else
  VAR_13->tm_min >>= VAR_5;

 VAR_13->tm_hour = VAR_14[1] & VAR_3;
 if (VAR_13->tm_hour == VAR_3)
  VAR_13->tm_hour = -1;

 VAR_13->tm_wday = ((VAR_14[1] >> VAR_2) & 0x7) - 1;
 if (VAR_13->tm_wday > 7)
  VAR_13->tm_wday = -1;

 VAR_13->tm_mon = VAR_14[2] & VAR_6;
 if (VAR_13->tm_mon == VAR_6)
  VAR_13->tm_mon = -1;
 else
  VAR_13->tm_mon = (VAR_13->tm_mon >> VAR_7) - 1;

 VAR_13->tm_mday = (VAR_14[2] & VAR_1);
 if (VAR_13->tm_mday == VAR_1)
  VAR_13->tm_mday = -1;

 VAR_13->tm_year = -1;

 VAR_11->enabled = !(VAR_14[3] & VAR_9);

 return 0;
}
