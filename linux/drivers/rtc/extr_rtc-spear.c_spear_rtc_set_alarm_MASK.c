
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spear_rtc_config {scalar_t__ ioaddr; } ;
struct TYPE_2__ {unsigned int tm_sec; unsigned int tm_min; unsigned int tm_hour; unsigned int tm_mday; unsigned int tm_mon; unsigned int tm_year; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct spear_rtc_config* FUNC_0 (struct device*) ;
 int FUNC_1 (struct spear_rtc_config*) ;
 int FUNC_2 (struct spear_rtc_config*) ;
 int FUNC_3 (struct spear_rtc_config*) ;
 int FUNC_4 (struct spear_rtc_config*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_8, struct rtc_wkalrm *VAR_9)
{
 struct spear_rtc_config *VAR_10 = FUNC_0(VAR_8);
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 FUNC_5(&VAR_9->time);

 FUNC_2(VAR_10);

 VAR_11 = (VAR_9->time.tm_sec << VAR_6) | (VAR_9->time.tm_min <<
   VAR_4) | (VAR_9->time.tm_hour << VAR_2);
 VAR_12 = (VAR_9->time.tm_mday << VAR_3) | (VAR_9->time.tm_mon <<
   VAR_5) | (VAR_9->time.tm_year << VAR_7);

 FUNC_6(VAR_11, VAR_10->ioaddr + VAR_1);
 FUNC_6(VAR_12, VAR_10->ioaddr + VAR_0);
 VAR_13 = FUNC_1(VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_9->enabled)
  FUNC_4(VAR_10);
 else
  FUNC_3(VAR_10);

 return 0;
}
