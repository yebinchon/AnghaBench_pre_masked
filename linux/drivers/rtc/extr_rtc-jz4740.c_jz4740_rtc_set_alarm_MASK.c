
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtc_wkalrm {int enabled; int time; } ;
struct jz4740_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct jz4740_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct jz4740_rtc*,int,int ) ;
 int FUNC_2 (struct jz4740_rtc*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 int VAR_5;
 struct jz4740_rtc *VAR_6 = FUNC_0(VAR_3);
 uint32_t VAR_7 = FUNC_3(FUNC_4(&VAR_4->time));

 VAR_5 = FUNC_2(VAR_6, VAR_0, VAR_7);
 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_6,
   VAR_1 | VAR_2, VAR_4->enabled);

 return VAR_5;
}
