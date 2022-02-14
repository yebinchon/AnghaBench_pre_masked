
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_2__ time; } ;
struct omap_rtc {TYPE_1__* type; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int (* lock ) (struct omap_rtc*) ;scalar_t__ has_irqwakeen; int (* unlock ) (struct omap_rtc*) ;} ;


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
 struct omap_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct omap_rtc*,int ) ;
 int FUNC_4 (struct omap_rtc*) ;
 int FUNC_5 (struct omap_rtc*,int ,int ) ;
 int FUNC_6 (struct omap_rtc*) ;
 int FUNC_7 (struct omap_rtc*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_10, struct rtc_wkalrm *VAR_11)
{
 struct omap_rtc *VAR_12 = FUNC_0(VAR_10);
 u8 VAR_13, VAR_14 = 0;

 FUNC_8(&VAR_11->time);

 FUNC_1();
 FUNC_4(VAR_12);

 VAR_12->type->unlock(VAR_12);
 FUNC_5(VAR_12, VAR_5, VAR_11->time.tm_year);
 FUNC_5(VAR_12, VAR_3, VAR_11->time.tm_mon);
 FUNC_5(VAR_12, VAR_0, VAR_11->time.tm_mday);
 FUNC_5(VAR_12, VAR_1, VAR_11->time.tm_hour);
 FUNC_5(VAR_12, VAR_2, VAR_11->time.tm_min);
 FUNC_5(VAR_12, VAR_4, VAR_11->time.tm_sec);

 VAR_13 = FUNC_3(VAR_12, VAR_7);
 if (VAR_12->type->has_irqwakeen)
  VAR_14 = FUNC_3(VAR_12, VAR_8);

 if (VAR_11->enabled) {
  VAR_13 |= VAR_6;
  VAR_14 |= VAR_9;
 } else {
  VAR_13 &= ~VAR_6;
  VAR_14 &= ~VAR_9;
 }
 FUNC_5(VAR_12, VAR_7, VAR_13);
 if (VAR_12->type->has_irqwakeen)
  FUNC_5(VAR_12, VAR_8, VAR_14);
 VAR_12->type->lock(VAR_12);

 FUNC_2();

 return 0;
}
