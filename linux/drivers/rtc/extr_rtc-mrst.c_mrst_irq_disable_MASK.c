
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrst_rtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mrst_rtc*,unsigned char) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;

__attribute__((used)) static void FUNC_3(struct mrst_rtc *VAR_1, unsigned char VAR_2)
{
 unsigned char VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 VAR_3 &= ~VAR_2;
 FUNC_2(VAR_3, VAR_0);
 FUNC_0(VAR_1, VAR_3);
}
