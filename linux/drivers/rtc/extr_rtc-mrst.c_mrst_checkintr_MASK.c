
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrst_rtc {int rtc; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (int ,int,unsigned char) ;
 unsigned char FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mrst_rtc *VAR_3, unsigned char VAR_4)
{
 unsigned char VAR_5;





 VAR_5 = FUNC_2(VAR_0);
 VAR_5 &= (VAR_4 & VAR_2) | VAR_1;
 if (FUNC_0(VAR_5))
  FUNC_1(VAR_3->rtc, 1, VAR_5);
}
