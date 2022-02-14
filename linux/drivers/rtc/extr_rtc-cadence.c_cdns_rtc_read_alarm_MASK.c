
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void* tm_mon; void* tm_mday; } ;
struct rtc_wkalrm {TYPE_1__ time; } ;
struct device {int dummy; } ;
struct cdns_rtc {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 struct cdns_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct cdns_rtc *VAR_6 = FUNC_3(VAR_4);
 u32 VAR_7;

 VAR_7 = FUNC_4(VAR_6->regs + VAR_3);
 FUNC_2(VAR_7, &VAR_5->time);

 VAR_7 = FUNC_4(VAR_6->regs + VAR_0);
 VAR_5->time.tm_mday = FUNC_1(FUNC_0(VAR_1, VAR_7));
 VAR_5->time.tm_mon = FUNC_1(FUNC_0(VAR_2, VAR_7)) - 1;

 return 0;
}
