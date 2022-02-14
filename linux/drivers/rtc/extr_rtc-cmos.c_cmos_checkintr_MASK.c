
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmos_rtc {int rtc; } ;


 unsigned char FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (int ,int,unsigned char) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct cmos_rtc *VAR_3, unsigned char VAR_4)
{
 unsigned char VAR_5;




 VAR_5 = FUNC_0(VAR_0);

 if (FUNC_3())
  return;

 VAR_5 &= (VAR_4 & VAR_2) | VAR_1;
 if (FUNC_1(VAR_5))
  FUNC_2(VAR_3->rtc, 1, VAR_5);
}
