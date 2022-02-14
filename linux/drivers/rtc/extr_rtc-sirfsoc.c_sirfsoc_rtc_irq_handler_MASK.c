
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_rtc_drv {int rtc; int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int ,int,unsigned long) ;
 unsigned long FUNC_1 (struct sirfsoc_rtc_drv*,int ) ;
 int FUNC_2 (struct sirfsoc_rtc_drv*,int ,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct sirfsoc_rtc_drv *VAR_8 = VAR_7;
 unsigned long VAR_9 = 0x0;
 unsigned long VAR_10 = 0x0;

 FUNC_3(&VAR_8->lock);

 VAR_9 = FUNC_1(VAR_8, VAR_3);




 if (VAR_9 & VAR_4) {




  VAR_9 &= ~0x07;

  VAR_9 |= (VAR_4);

  VAR_9 &= ~(VAR_5);
 }

 FUNC_2(VAR_8, VAR_3, VAR_9);

 FUNC_4(&VAR_8->lock);




 VAR_10 |= VAR_2 | VAR_1;
 FUNC_0(VAR_8->rtc, 1, VAR_10);

 return VAR_0;
}
