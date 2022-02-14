
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int time64_t ;
struct sunxi_rtc_dev {scalar_t__ base; } ;
struct rtc_time {int dummy; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct device*,char*) ;
 struct sunxi_rtc_dev* FUNC_5 (struct device*) ;
 int FUNC_6 (struct rtc_time*,struct rtc_time*) ;
 int FUNC_7 (struct device*,struct rtc_time*) ;
 int FUNC_8 (int ,struct sunxi_rtc_dev*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_7, struct rtc_wkalrm *VAR_8)
{
 struct sunxi_rtc_dev *VAR_9 = FUNC_5(VAR_7);
 struct rtc_time *VAR_10 = &VAR_8->time;
 struct rtc_time VAR_11;
 u32 VAR_12;
 time64_t VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17;
 int VAR_18;

 VAR_18 = FUNC_7(VAR_7, &VAR_11);
 if (VAR_18 < 0) {
  FUNC_4(VAR_7, "Error in getting time\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_6(VAR_10, &VAR_11);
 if (VAR_13 <= 0) {
  FUNC_4(VAR_7, "Date to set in the past\n");
  return -VAR_0;
 }

 if (VAR_13 > 255 * VAR_1) {
  FUNC_4(VAR_7, "Day must be in the range 0 - 255\n");
  return -VAR_0;
 }

 VAR_14 = VAR_13;
 VAR_15 = VAR_14 / VAR_1;
 VAR_14 -= VAR_15 * VAR_1;
 VAR_16 = VAR_14 / VAR_2;
 VAR_14 -= VAR_16 * VAR_2;
 VAR_17 = VAR_14 / VAR_3;
 VAR_14 -= VAR_17 * VAR_3;

 FUNC_8(0, VAR_9);
 FUNC_10(0, VAR_9->base + VAR_4);
 FUNC_9(100, 300);

 VAR_12 = FUNC_3(VAR_14) |
  FUNC_2(VAR_17) |
  FUNC_1(VAR_16) |
  FUNC_0(VAR_15);
 FUNC_10(VAR_12, VAR_9->base + VAR_4);

 FUNC_10(0, VAR_9->base + VAR_5);
 FUNC_10(VAR_6, VAR_9->base + VAR_5);

 FUNC_8(VAR_8->enabled, VAR_9);

 return 0;
}
