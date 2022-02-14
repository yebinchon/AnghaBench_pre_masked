
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; void* tm_sec; void* tm_min; void* tm_hour; void* tm_wday; void* tm_mday; scalar_t__ tm_mon; } ;
struct m48t59_private {int lock; } ;
struct m48t59_plat_data {scalar_t__ type; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct m48t59_private* FUNC_5 (struct device*) ;
 struct m48t59_plat_data* FUNC_6 (struct device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_12, struct rtc_time *VAR_13)
{
 struct m48t59_plat_data *VAR_14 = FUNC_6(VAR_12);
 struct m48t59_private *VAR_15 = FUNC_5(VAR_12);
 unsigned long VAR_16;
 u8 VAR_17;

 FUNC_7(&VAR_15->lock, VAR_16);

 FUNC_2(VAR_2, VAR_1);

 VAR_13->tm_year = FUNC_3(FUNC_1(VAR_11));

 VAR_13->tm_mon = FUNC_3(FUNC_1(VAR_6)) - 1;
 VAR_13->tm_mday = FUNC_3(FUNC_1(VAR_4));

 VAR_17 = FUNC_1(VAR_8);
 if ((VAR_14->type == VAR_0) &&
     (VAR_17 & VAR_10) && (VAR_17 & VAR_9)) {
  FUNC_4(VAR_12, "Century bit is enabled\n");
  VAR_13->tm_year += 100;
 }





 VAR_13->tm_wday = FUNC_3(VAR_17 & 0x07);
 VAR_13->tm_hour = FUNC_3(FUNC_1(VAR_3) & 0x3F);
 VAR_13->tm_min = FUNC_3(FUNC_1(VAR_5) & 0x7F);
 VAR_13->tm_sec = FUNC_3(FUNC_1(VAR_7) & 0x7F);


 FUNC_0(VAR_2, VAR_1);
 FUNC_8(&VAR_15->lock, VAR_16);

 FUNC_4(VAR_12, "RTC read time %ptR\n", VAR_13);
 return 0;
}
