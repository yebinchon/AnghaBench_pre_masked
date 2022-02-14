
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_wday; int tm_mon; } ;
struct m48t59_private {int lock; } ;
struct m48t59_plat_data {scalar_t__ type; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int,int ) ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct device*,char*,int,int ,int,int,int,int) ;
 struct m48t59_private* FUNC_5 (struct device*) ;
 struct m48t59_plat_data* FUNC_6 (struct device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_13, struct rtc_time *VAR_14)
{
 struct m48t59_plat_data *VAR_15 = FUNC_6(VAR_13);
 struct m48t59_private *VAR_16 = FUNC_5(VAR_13);
 unsigned long VAR_17;
 u8 VAR_18 = 0;
 int VAR_19 = VAR_14->tm_year;






 FUNC_4(VAR_13, "RTC set time %04d-%02d-%02d %02d/%02d/%02d\n",
  VAR_19 + 1900, VAR_14->tm_mon, VAR_14->tm_mday,
  VAR_14->tm_hour, VAR_14->tm_min, VAR_14->tm_sec);

 if (VAR_19 < 0)
  return -VAR_0;

 FUNC_7(&VAR_16->lock, VAR_17);

 FUNC_1(VAR_3, VAR_2);

 FUNC_2((FUNC_3(VAR_14->tm_sec) & 0x7F), VAR_8);
 FUNC_2((FUNC_3(VAR_14->tm_min) & 0x7F), VAR_6);
 FUNC_2((FUNC_3(VAR_14->tm_hour) & 0x3F), VAR_4);
 FUNC_2((FUNC_3(VAR_14->tm_mday) & 0x3F), VAR_5);

 FUNC_2((FUNC_3(VAR_14->tm_mon + 1) & 0x1F), VAR_7);
 FUNC_2(FUNC_3(VAR_19 % 100), VAR_12);

 if (VAR_15->type == VAR_1 && (VAR_19 / 100))
  VAR_18 = (VAR_11 | VAR_10);
 VAR_18 |= (FUNC_3(VAR_14->tm_wday) & 0x07);
 FUNC_2(VAR_18, VAR_9);


 FUNC_0(VAR_3, VAR_2);
 FUNC_8(&VAR_16->lock, VAR_17);
 return 0;
}
