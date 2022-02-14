
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct platform_device {int dev; } ;
struct omap_rtc {int pctldev; TYPE_1__* type; scalar_t__ has_ext_clk; int clk; } ;
struct TYPE_2__ {int (* lock ) (struct omap_rtc*) ;int (* unlock ) (struct omap_rtc*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int * VAR_3 ;
 struct omap_rtc* VAR_4 ;
 int FUNC_3 (int ) ;
 struct omap_rtc* FUNC_4 (struct platform_device*) ;
 int * VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct omap_rtc*,int ) ;
 int FUNC_8 (struct omap_rtc*,int ,int ) ;
 int FUNC_9 (struct omap_rtc*) ;
 int FUNC_10 (struct omap_rtc*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct omap_rtc *VAR_7 = FUNC_4(VAR_6);
 u8 VAR_8;

 if (VAR_5 == VAR_3 &&
   VAR_4 == VAR_7) {
  VAR_5 = ((void*)0);
  VAR_4 = ((void*)0);
 }

 FUNC_2(&VAR_6->dev, 0);

 if (!FUNC_0(VAR_7->clk))
  FUNC_1(VAR_7->clk);

 VAR_7->type->unlock(VAR_7);

 FUNC_8(VAR_7, VAR_0, 0);

 if (VAR_7->has_ext_clk) {
  VAR_8 = FUNC_7(VAR_7, VAR_1);
  VAR_8 &= ~VAR_2;
  FUNC_8(VAR_7, VAR_1, VAR_8);
 }

 VAR_7->type->lock(VAR_7);


 FUNC_6(&VAR_6->dev);
 FUNC_5(&VAR_6->dev);


 FUNC_3(VAR_7->pctldev);

 return 0;
}
