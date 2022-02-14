
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_rtc_dev {scalar_t__ base; TYPE_1__* data_year; } ;
struct rtc_time {int tm_year; int tm_mon; int tm_hour; int tm_min; int tm_sec; int tm_mday; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int min; unsigned int max; int leap_shift; int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct device*,char*,...) ;
 struct sunxi_rtc_dev* FUNC_9 (struct device*) ;
 scalar_t__ FUNC_10 (unsigned int) ;
 scalar_t__ FUNC_11 (struct sunxi_rtc_dev*,int ,int ,int) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_6, struct rtc_time *VAR_7)
{
 struct sunxi_rtc_dev *VAR_8 = FUNC_9(VAR_6);
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 unsigned int VAR_11;







 VAR_11 = VAR_7->tm_year + 1900;
 if (VAR_11 < VAR_8->data_year->min || VAR_11 > VAR_8->data_year->max) {
  FUNC_8(VAR_6, "rtc only supports year in range %u - %u\n",
   VAR_8->data_year->min, VAR_8->data_year->max);
  return -VAR_0;
 }

 VAR_7->tm_year -= FUNC_7(VAR_8->data_year);
 VAR_7->tm_mon += 1;

 VAR_9 = FUNC_0(VAR_7->tm_mday) |
  FUNC_1(VAR_7->tm_mon) |
  FUNC_2(VAR_7->tm_year,
    VAR_8->data_year->mask);

 if (FUNC_10(VAR_11))
  VAR_9 |= FUNC_3(1, VAR_8->data_year->leap_shift);

 VAR_10 = FUNC_6(VAR_7->tm_sec) |
  FUNC_5(VAR_7->tm_min) |
  FUNC_4(VAR_7->tm_hour);

 FUNC_12(0, VAR_8->base + VAR_4);
 FUNC_12(0, VAR_8->base + VAR_5);

 FUNC_12(VAR_10, VAR_8->base + VAR_4);







 if (FUNC_11(VAR_8, VAR_1,
    VAR_2, 50)) {
  FUNC_8(VAR_6, "Failed to set rtc time.\n");
  return -1;
 }

 FUNC_12(VAR_9, VAR_8->base + VAR_5);







 if (FUNC_11(VAR_8, VAR_1,
    VAR_3, 50)) {
  FUNC_8(VAR_6, "Failed to set rtc time.\n");
  return -1;
 }

 return 0;
}
