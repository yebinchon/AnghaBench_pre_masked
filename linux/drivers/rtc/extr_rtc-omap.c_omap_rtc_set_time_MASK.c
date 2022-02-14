
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
struct omap_rtc {TYPE_1__* type; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* lock ) (struct omap_rtc*) ;int (* unlock ) (struct omap_rtc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct omap_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct omap_rtc*) ;
 int FUNC_4 (struct omap_rtc*,int ,int ) ;
 int FUNC_5 (struct omap_rtc*) ;
 int FUNC_6 (struct omap_rtc*) ;
 int FUNC_7 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_6, struct rtc_time *VAR_7)
{
 struct omap_rtc *VAR_8 = FUNC_0(VAR_6);

 FUNC_7(VAR_7);

 FUNC_1();
 FUNC_3(VAR_8);

 VAR_8->type->unlock(VAR_8);
 FUNC_4(VAR_8, VAR_5, VAR_7->tm_year);
 FUNC_4(VAR_8, VAR_3, VAR_7->tm_mon);
 FUNC_4(VAR_8, VAR_0, VAR_7->tm_mday);
 FUNC_4(VAR_8, VAR_1, VAR_7->tm_hour);
 FUNC_4(VAR_8, VAR_2, VAR_7->tm_min);
 FUNC_4(VAR_8, VAR_4, VAR_7->tm_sec);
 VAR_8->type->lock(VAR_8);

 FUNC_2();

 return 0;
}
