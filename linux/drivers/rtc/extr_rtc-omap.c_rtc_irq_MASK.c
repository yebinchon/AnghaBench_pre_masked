
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct omap_rtc {int rtc; TYPE_1__* type; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* lock ) (struct omap_rtc*) ;int (* unlock ) (struct omap_rtc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct omap_rtc*,int ) ;
 int FUNC_1 (int ,int,unsigned long) ;
 int FUNC_2 (struct omap_rtc*,int ,int) ;
 int FUNC_3 (struct omap_rtc*) ;
 int FUNC_4 (struct omap_rtc*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct omap_rtc *VAR_9 = VAR_8;
 unsigned long VAR_10 = 0;
 u8 VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_3);


 if (VAR_11 & VAR_2) {
  VAR_9->type->unlock(VAR_9);
  FUNC_2(VAR_9, VAR_3, VAR_2);
  VAR_9->type->lock(VAR_9);
  VAR_10 |= VAR_5 | VAR_4;
 }


 if (VAR_11 & VAR_1)
  VAR_10 |= VAR_5 | VAR_6;

 FUNC_1(VAR_9->rtc, 1, VAR_10);

 return VAR_0;
}
