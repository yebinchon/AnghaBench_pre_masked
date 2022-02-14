
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sa1100_rtc {int rtsr; } ;
struct rtc_wkalrm {int enabled; int pending; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sa1100_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 u32 VAR_4;
 struct sa1100_rtc *VAR_5 = FUNC_0(VAR_2);

 VAR_4 = FUNC_1(VAR_5->rtsr);
 VAR_3->enabled = (VAR_4 & VAR_1) ? 1 : 0;
 VAR_3->pending = (VAR_4 & VAR_0) ? 1 : 0;
 return 0;
}
