
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vt8500_rtc {scalar_t__ regbase; } ;
struct TYPE_2__ {void* tm_sec; void* tm_min; void* tm_hour; void* tm_mday; } ;
struct rtc_wkalrm {int enabled; int pending; TYPE_1__ time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int) ;
 struct vt8500_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_11, struct rtc_wkalrm *VAR_12)
{
 struct vt8500_rtc *VAR_13 = FUNC_1(VAR_11);
 u32 VAR_14, VAR_15;

 VAR_15 = FUNC_2(VAR_13->regbase + VAR_8);
 VAR_14 = FUNC_2(VAR_13->regbase + VAR_9);

 VAR_12->time.tm_mday = FUNC_0((VAR_15 & VAR_0) >> VAR_1);
 VAR_12->time.tm_hour = FUNC_0((VAR_15 & VAR_3) >> VAR_4);
 VAR_12->time.tm_min = FUNC_0((VAR_15 & VAR_5) >> VAR_6);
 VAR_12->time.tm_sec = FUNC_0((VAR_15 & VAR_7));

 VAR_12->enabled = (VAR_15 & VAR_2) ? 1 : 0;
 VAR_12->pending = (VAR_14 & VAR_10) ? 1 : 0;

 return FUNC_3(&VAR_12->time);
}
