
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct jz4740_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct jz4740_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct jz4740_rtc*,int ) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct jz4740_rtc *VAR_6 = FUNC_0(VAR_4);
 uint32_t VAR_7;
 uint32_t VAR_8;

 VAR_7 = FUNC_1(VAR_6, VAR_1);

 VAR_8 = FUNC_1(VAR_6, VAR_0);

 VAR_5->enabled = !!(VAR_8 & VAR_2);
 VAR_5->pending = !!(VAR_8 & VAR_3);

 FUNC_2(VAR_7, &VAR_5->time);

 return 0;
}
