
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_rtc_dev {scalar_t__ base; TYPE_1__* data_year; } ;
struct rtc_time {int tm_mon; int tm_year; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int mask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 struct sunxi_rtc_dev* FUNC_7 (struct device*) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct sunxi_rtc_dev *VAR_6 = FUNC_7(VAR_4);
 struct rtc_time *VAR_7 = &VAR_5->time;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 VAR_8 = FUNC_8(VAR_6->base + VAR_0);
 VAR_10 = FUNC_8(VAR_6->base + VAR_3);

 VAR_7->tm_sec = FUNC_2(VAR_8);
 VAR_7->tm_min = FUNC_1(VAR_8);
 VAR_7->tm_hour = FUNC_0(VAR_8);

 VAR_7->tm_mday = FUNC_3(VAR_10);
 VAR_7->tm_mon = FUNC_4(VAR_10);
 VAR_7->tm_year = FUNC_5(VAR_10,
   VAR_6->data_year->mask);

 VAR_7->tm_mon -= 1;





 VAR_7->tm_year += FUNC_6(VAR_6->data_year);

 VAR_9 = FUNC_8(VAR_6->base + VAR_2);
 if (VAR_9 & VAR_1)
  VAR_5->enabled = 1;

 return 0;
}
