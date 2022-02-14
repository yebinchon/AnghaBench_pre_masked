
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct pxa_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pxa_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pxa_rtc*,int ) ;
 int FUNC_2 (int,int,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct pxa_rtc *VAR_7 = FUNC_0(VAR_5);
 u32 VAR_8, VAR_9, VAR_10;

 VAR_9 = FUNC_1(VAR_7, VAR_4);
 VAR_10 = FUNC_1(VAR_7, VAR_0);
 FUNC_2(VAR_9, VAR_10, &VAR_6->time);

 VAR_8 = FUNC_1(VAR_7, VAR_1);
 VAR_6->enabled = (VAR_8 & VAR_3) ? 1 : 0;
 VAR_6->pending = (VAR_8 & VAR_2) ? 1 : 0;
 return 0;
}
