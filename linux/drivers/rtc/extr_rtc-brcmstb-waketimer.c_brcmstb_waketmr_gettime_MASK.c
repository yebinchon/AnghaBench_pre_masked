
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wktmr_time {int sec; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct brcmstb_waketmr {int dummy; } ;


 struct brcmstb_waketmr* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct rtc_time*) ;
 int FUNC_2 (struct brcmstb_waketmr*,struct wktmr_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
       struct rtc_time *VAR_1)
{
 struct brcmstb_waketmr *VAR_2 = FUNC_0(VAR_0);
 struct wktmr_time VAR_3;

 FUNC_2(VAR_2, &VAR_3);

 FUNC_1(VAR_3.sec, VAR_1);

 return 0;
}
