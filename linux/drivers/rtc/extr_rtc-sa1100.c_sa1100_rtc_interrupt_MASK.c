
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_rtc {int lock; int rtsr; struct rtc_device* rtc; } ;
struct rtc_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct sa1100_rtc* FUNC_0 (void*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct rtc_device*,int,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct sa1100_rtc *VAR_10 = FUNC_0(VAR_9);
 struct rtc_device *VAR_11 = VAR_10->rtc;
 unsigned int VAR_12;
 unsigned long VAR_13 = 0;

 FUNC_3(&VAR_10->lock);

 VAR_12 = FUNC_1(VAR_10->rtsr);

 FUNC_5(0, VAR_10->rtsr);


 if (VAR_12 & (VAR_5 | VAR_7)) {



  FUNC_5((VAR_4 | VAR_6) & (VAR_12 >> 2), VAR_10->rtsr);
 } else {







  FUNC_5(VAR_4 | VAR_6, VAR_10->rtsr);
 }


 if (VAR_12 & VAR_4)
  VAR_12 &= ~VAR_5;
 FUNC_5(VAR_12 & (VAR_5 | VAR_7), VAR_10->rtsr);


 if (VAR_12 & VAR_4)
  VAR_13 |= VAR_1 | VAR_2;
 if (VAR_12 & VAR_6)
  VAR_13 |= VAR_3 | VAR_2;

 FUNC_2(VAR_11, 1, VAR_13);

 FUNC_4(&VAR_10->lock);

 return VAR_0;
}
