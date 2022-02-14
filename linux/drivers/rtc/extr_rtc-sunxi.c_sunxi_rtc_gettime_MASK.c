
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sunxi_rtc_dev {TYPE_1__* data_year; scalar_t__ base; } ;
struct rtc_time {int tm_mon; int tm_year; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int mask; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 struct sunxi_rtc_dev* FUNC_7 (struct device*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct sunxi_rtc_dev *VAR_4 = FUNC_7(VAR_2);
 u32 VAR_5, VAR_6;




 do {
  VAR_5 = FUNC_8(VAR_4->base + VAR_1);
  VAR_6 = FUNC_8(VAR_4->base + VAR_0);
 } while ((VAR_5 != FUNC_8(VAR_4->base + VAR_1)) ||
   (VAR_6 != FUNC_8(VAR_4->base + VAR_0)));

 VAR_3->tm_sec = FUNC_5(VAR_6);
 VAR_3->tm_min = FUNC_4(VAR_6);
 VAR_3->tm_hour = FUNC_3(VAR_6);

 VAR_3->tm_mday = FUNC_0(VAR_5);
 VAR_3->tm_mon = FUNC_1(VAR_5);
 VAR_3->tm_year = FUNC_2(VAR_5,
     VAR_4->data_year->mask);

 VAR_3->tm_mon -= 1;





 VAR_3->tm_year += FUNC_6(VAR_4->data_year);

 return 0;
}
