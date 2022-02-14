
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct rtc_time*) ;
 struct omap_rtc* VAR_13 ;
 int FUNC_1 (struct omap_rtc*,struct rtc_time*) ;
 int FUNC_2 (struct omap_rtc*,int ) ;
 int FUNC_3 (struct omap_rtc*,int ) ;
 int FUNC_4 (unsigned long,struct rtc_time*) ;
 unsigned long FUNC_5 (struct rtc_time*) ;
 int FUNC_6 (struct omap_rtc*) ;
 int FUNC_7 (struct omap_rtc*,int ,int) ;
 int FUNC_8 (struct omap_rtc*,int ,int) ;
 int FUNC_9 (struct omap_rtc*) ;
 int FUNC_10 (struct omap_rtc*) ;
 int FUNC_11 (struct rtc_time*) ;

int FUNC_12(struct device *VAR_14)
{
 struct omap_rtc *VAR_15 = VAR_13;
 struct rtc_time VAR_16;
 unsigned long VAR_17;
 int VAR_18;
 u32 VAR_19;

 VAR_15->type->unlock(VAR_15);

 VAR_19 = FUNC_3(VAR_15, VAR_9);
 FUNC_8(VAR_15, VAR_9, VAR_19 | VAR_8);

again:

 FUNC_8(VAR_15, VAR_12, VAR_11);


 FUNC_1(VAR_15, &VAR_16);
 VAR_18 = VAR_16.tm_sec;
 FUNC_0(&VAR_16);
 VAR_17 = FUNC_5(&VAR_16);
 FUNC_4(VAR_17 + 1, &VAR_16);

 FUNC_11(&VAR_16);

 FUNC_6(VAR_15);

 FUNC_7(VAR_15, VAR_4, VAR_16.tm_sec);
 FUNC_7(VAR_15, VAR_2, VAR_16.tm_min);
 FUNC_7(VAR_15, VAR_1, VAR_16.tm_hour);
 FUNC_7(VAR_15, VAR_0, VAR_16.tm_mday);
 FUNC_7(VAR_15, VAR_3, VAR_16.tm_mon);
 FUNC_7(VAR_15, VAR_5, VAR_16.tm_year);






 VAR_19 = FUNC_2(VAR_15, VAR_7);
 FUNC_8(VAR_15, VAR_7,
   VAR_19 | VAR_6);


 if (FUNC_2(VAR_15, VAR_10) != VAR_18) {
  VAR_19 = FUNC_2(VAR_15, VAR_12);
  if (!(VAR_19 & VAR_11))
   goto again;
 }

 VAR_15->type->lock(VAR_15);

 return 0;
}
