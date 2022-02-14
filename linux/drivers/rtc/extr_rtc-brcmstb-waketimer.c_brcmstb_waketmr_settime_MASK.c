
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct brcmstb_waketmr {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct brcmstb_waketmr* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rtc_time*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
       struct rtc_time *VAR_2)
{
 struct brcmstb_waketmr *VAR_3 = FUNC_0(VAR_1);
 time64_t VAR_4;

 VAR_4 = FUNC_1(VAR_2);

 FUNC_2(VAR_4, VAR_3->base + VAR_0);

 return 0;
}
