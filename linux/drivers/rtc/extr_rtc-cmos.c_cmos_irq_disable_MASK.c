
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmos_rtc {int dev; int (* wake_off ) (int ) ;} ;


 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (unsigned char,int ) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct cmos_rtc*,unsigned char) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (unsigned char) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct cmos_rtc *VAR_2, unsigned char VAR_3)
{
 unsigned char VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 VAR_4 &= ~VAR_3;
 FUNC_1(VAR_4, VAR_1);
 if (FUNC_6())
  FUNC_4(VAR_3);

 if ((VAR_3 & VAR_0) && FUNC_3()) {
  if (VAR_2->wake_off)
   VAR_2->wake_off(VAR_2->dev);
 }

 FUNC_2(VAR_2, VAR_4);
}
