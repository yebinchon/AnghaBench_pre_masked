
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vt8500_rtc {scalar_t__ regbase; } ;
struct TYPE_2__ {int tm_sec; int tm_min; int tm_hour; int tm_mday; } ;
struct rtc_wkalrm {TYPE_1__ time; scalar_t__ enabled; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 struct vt8500_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct vt8500_rtc *VAR_7 = FUNC_1(VAR_5);

 FUNC_2((VAR_6->enabled ? VAR_1 : 0)
  | (FUNC_0(VAR_6->time.tm_mday) << VAR_0)
  | (FUNC_0(VAR_6->time.tm_hour) << VAR_2)
  | (FUNC_0(VAR_6->time.tm_min) << VAR_3)
  | (FUNC_0(VAR_6->time.tm_sec)),
  VAR_7->regbase + VAR_4);

 return 0;
}
