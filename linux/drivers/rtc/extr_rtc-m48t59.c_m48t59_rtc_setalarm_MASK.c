
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_mon; } ;
struct rtc_wkalrm {struct rtc_time time; } ;
struct m48t59_private {scalar_t__ irq; int lock; } ;
struct m48t59_plat_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct device*,char*,int,int ,int,int,int,int) ;
 struct m48t59_private* FUNC_6 (struct device*) ;
 struct m48t59_plat_data* FUNC_7 (struct device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_10, struct rtc_wkalrm *VAR_11)
{
 struct m48t59_plat_data *VAR_12 = FUNC_7(VAR_10);
 struct m48t59_private *VAR_13 = FUNC_6(VAR_10);
 struct rtc_time *VAR_14 = &VAR_11->time;
 u8 VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19;
 int VAR_20 = VAR_14->tm_year;







 if (VAR_13->irq == VAR_9)
  return -VAR_1;

 if (VAR_20 < 0)
  return -VAR_0;




 VAR_15 = VAR_14->tm_mday;
 VAR_15 = (VAR_15 >= 1 && VAR_15 <= 31) ? FUNC_4(VAR_15) : 0xff;
 if (VAR_15 == 0xff)
  VAR_15 = FUNC_1(VAR_8);

 VAR_16 = VAR_14->tm_hour;
 VAR_16 = (VAR_16 < 24) ? FUNC_4(VAR_16) : 0x00;

 VAR_17 = VAR_14->tm_min;
 VAR_17 = (VAR_17 < 60) ? FUNC_4(VAR_17) : 0x00;

 VAR_18 = VAR_14->tm_sec;
 VAR_18 = (VAR_18 < 60) ? FUNC_4(VAR_18) : 0x00;

 FUNC_8(&VAR_13->lock, VAR_19);

 FUNC_2(VAR_7, VAR_6);

 FUNC_3(VAR_15, VAR_2);
 FUNC_3(VAR_16, VAR_3);
 FUNC_3(VAR_17, VAR_4);
 FUNC_3(VAR_18, VAR_5);


 FUNC_0(VAR_7, VAR_6);
 FUNC_9(&VAR_13->lock, VAR_19);

 FUNC_5(VAR_10, "RTC set alarm time %04d-%02d-%02d %02d/%02d/%02d\n",
  VAR_20 + 1900, VAR_14->tm_mon, VAR_14->tm_mday,
  VAR_14->tm_hour, VAR_14->tm_min, VAR_14->tm_sec);
 return 0;
}
