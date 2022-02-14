
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; void* tm_sec; void* tm_min; void* tm_hour; void* tm_mday; void* tm_mon; } ;
struct rtc_wkalrm {struct rtc_time time; } ;
struct m48t59_private {scalar_t__ irq; int lock; } ;
struct m48t59_plat_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct device*,char*,struct rtc_time*) ;
 struct m48t59_private* FUNC_5 (struct device*) ;
 struct m48t59_plat_data* FUNC_6 (struct device*) ;
 int FUNC_7 (struct rtc_time*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_13, struct rtc_wkalrm *VAR_14)
{
 struct m48t59_plat_data *VAR_15 = FUNC_6(VAR_13);
 struct m48t59_private *VAR_16 = FUNC_5(VAR_13);
 struct rtc_time *VAR_17 = &VAR_14->time;
 unsigned long VAR_18;
 u8 VAR_19;


 if (VAR_16->irq == VAR_12)
  return -VAR_0;

 FUNC_8(&VAR_16->lock, VAR_18);

 FUNC_2(VAR_6, VAR_5);

 VAR_17->tm_year = FUNC_3(FUNC_1(VAR_11));





 VAR_17->tm_mon = FUNC_3(FUNC_1(VAR_7)) - 1;

 VAR_19 = FUNC_1(VAR_8);
 if ((VAR_19 & VAR_10) && (VAR_19 & VAR_9))
  VAR_17->tm_year += 100;

 VAR_17->tm_mday = FUNC_3(FUNC_1(VAR_1));
 VAR_17->tm_hour = FUNC_3(FUNC_1(VAR_2));
 VAR_17->tm_min = FUNC_3(FUNC_1(VAR_3));
 VAR_17->tm_sec = FUNC_3(FUNC_1(VAR_4));


 FUNC_0(VAR_6, VAR_5);
 FUNC_9(&VAR_16->lock, VAR_18);

 FUNC_4(VAR_13, "RTC read alarm time %ptR\n", VAR_17);
 return FUNC_7(VAR_17);
}
