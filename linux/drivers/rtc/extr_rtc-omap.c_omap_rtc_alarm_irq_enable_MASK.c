
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct omap_rtc {TYPE_1__* type; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* lock ) (struct omap_rtc*) ;scalar_t__ has_irqwakeen; int (* unlock ) (struct omap_rtc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct omap_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct omap_rtc*,int ) ;
 int FUNC_4 (struct omap_rtc*) ;
 int FUNC_5 (struct omap_rtc*,int ,int ) ;
 int FUNC_6 (struct omap_rtc*) ;
 int FUNC_7 (struct omap_rtc*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_4, unsigned int VAR_5)
{
 struct omap_rtc *VAR_6 = FUNC_0(VAR_4);
 u8 VAR_7, VAR_8 = 0;

 FUNC_1();
 FUNC_4(VAR_6);
 VAR_7 = FUNC_3(VAR_6, VAR_1);
 if (VAR_6->type->has_irqwakeen)
  VAR_8 = FUNC_3(VAR_6, VAR_2);

 if (VAR_5) {
  VAR_7 |= VAR_0;
  VAR_8 |= VAR_3;
 } else {
  VAR_7 &= ~VAR_0;
  VAR_8 &= ~VAR_3;
 }
 FUNC_4(VAR_6);
 VAR_6->type->unlock(VAR_6);
 FUNC_5(VAR_6, VAR_1, VAR_7);
 if (VAR_6->type->has_irqwakeen)
  FUNC_5(VAR_6, VAR_2, VAR_8);
 VAR_6->type->lock(VAR_6);
 FUNC_2();

 return 0;
}
