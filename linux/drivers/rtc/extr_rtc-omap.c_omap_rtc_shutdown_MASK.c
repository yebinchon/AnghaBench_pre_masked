
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct platform_device {int dummy; } ;
struct omap_rtc {TYPE_1__* type; } ;
struct TYPE_2__ {int (* lock ) (struct omap_rtc*) ;int (* unlock ) (struct omap_rtc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_rtc* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct omap_rtc*,int ) ;
 int FUNC_2 (struct omap_rtc*,int ,int ) ;
 int FUNC_3 (struct omap_rtc*) ;
 int FUNC_4 (struct omap_rtc*) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_2)
{
 struct omap_rtc *VAR_3 = FUNC_0(VAR_2);
 u8 VAR_4;





 VAR_3->type->unlock(VAR_3);
 VAR_4 = FUNC_1(VAR_3, VAR_1);
 VAR_4 &= VAR_0;
 FUNC_2(VAR_3, VAR_1, VAR_4);
 VAR_3->type->lock(VAR_3);
}
