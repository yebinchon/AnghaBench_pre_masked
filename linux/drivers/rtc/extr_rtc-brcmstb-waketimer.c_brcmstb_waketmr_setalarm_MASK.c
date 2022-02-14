
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct rtc_wkalrm {int time; scalar_t__ enabled; } ;
struct device {int dummy; } ;
struct brcmstb_waketmr {int dummy; } ;


 int FUNC_0 (struct brcmstb_waketmr*,scalar_t__) ;
 struct brcmstb_waketmr* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
         struct rtc_wkalrm *VAR_1)
{
 struct brcmstb_waketmr *VAR_2 = FUNC_1(VAR_0);
 time64_t VAR_3;

 if (VAR_1->enabled)
  VAR_3 = FUNC_2(&VAR_1->time);
 else
  VAR_3 = 0;

 FUNC_0(VAR_2, VAR_3);

 return 0;
}
