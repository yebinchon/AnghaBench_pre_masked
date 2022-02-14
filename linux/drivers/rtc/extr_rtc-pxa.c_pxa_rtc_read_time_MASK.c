
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int dummy; } ;
struct pxa_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pxa_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pxa_rtc*,int ) ;
 int FUNC_2 (int ,int ,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct pxa_rtc *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 VAR_6 = FUNC_1(VAR_4, VAR_0);

 FUNC_2(VAR_5, VAR_6, VAR_3);
 return 0;
}
