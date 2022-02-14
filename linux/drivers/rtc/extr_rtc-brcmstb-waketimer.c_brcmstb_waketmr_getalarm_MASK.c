
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ time64_t ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct device {int dummy; } ;
struct brcmstb_waketmr {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct brcmstb_waketmr* FUNC_0 (struct device*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2,
        struct rtc_wkalrm *VAR_3)
{
 struct brcmstb_waketmr *VAR_4 = FUNC_0(VAR_2);
 time64_t VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1(VAR_4->base + VAR_0);
 if (VAR_5 != 0) {

  VAR_3->enabled = 1;
  FUNC_2(VAR_5, &VAR_3->time);
 }

 VAR_6 = FUNC_1(VAR_4->base + VAR_1);
 VAR_3->pending = !!(VAR_6 & 1);

 return 0;
}
