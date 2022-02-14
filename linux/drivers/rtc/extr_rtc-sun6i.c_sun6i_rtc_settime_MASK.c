
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun6i_rtc_dev {scalar_t__ base; } ;
struct rtc_time {int tm_year; int tm_mon; int tm_hour; int tm_min; int tm_sec; int tm_mday; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (struct device*,char*,...) ;
 struct sun6i_rtc_dev* FUNC_8 (struct device*) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct sun6i_rtc_dev*,int ,int ,int) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_12, struct rtc_time *VAR_13)
{
 struct sun6i_rtc_dev *VAR_14 = FUNC_8(VAR_12);
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;
 int VAR_17;

 VAR_17 = VAR_13->tm_year + 1900;
 if (VAR_17 < VAR_10 || VAR_17 > VAR_9) {
  FUNC_7(VAR_12, "rtc only supports year in range %d - %d\n",
   VAR_10, VAR_9);
  return -VAR_1;
 }

 VAR_13->tm_year -= VAR_11;
 VAR_13->tm_mon += 1;

 VAR_15 = FUNC_0(VAR_13->tm_mday) |
  FUNC_1(VAR_13->tm_mon) |
  FUNC_2(VAR_13->tm_year);

 if (FUNC_9(VAR_17))
  VAR_15 |= FUNC_3(1);

 VAR_16 = FUNC_6(VAR_13->tm_sec) |
  FUNC_5(VAR_13->tm_min) |
  FUNC_4(VAR_13->tm_hour);


 if (FUNC_10(VAR_14, VAR_3,
      VAR_4, 50)) {
  FUNC_7(VAR_12, "rtc is still busy.\n");
  return -VAR_0;
 }

 FUNC_11(VAR_16, VAR_14->base + VAR_7);







 if (FUNC_10(VAR_14, VAR_3,
      VAR_5, 50)) {
  FUNC_7(VAR_12, "Failed to set rtc time.\n");
  return -VAR_2;
 }

 FUNC_11(VAR_15, VAR_14->base + VAR_8);







 if (FUNC_10(VAR_14, VAR_3,
      VAR_6, 50)) {
  FUNC_7(VAR_12, "Failed to set rtc time.\n");
  return -VAR_2;
 }

 return 0;
}
