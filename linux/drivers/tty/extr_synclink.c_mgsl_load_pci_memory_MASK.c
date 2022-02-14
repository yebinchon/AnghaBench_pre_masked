
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;
 int FUNC_0 (char*,char const*,unsigned short) ;

__attribute__((used)) static void FUNC_1( char* VAR_1, const char* VAR_2,
 unsigned short VAR_3 )
{



 unsigned short VAR_4 = VAR_3 / 64;
 unsigned short VAR_5;
 unsigned long VAR_6;

 for ( VAR_5 = 0 ; VAR_5 < VAR_4 ; VAR_5++ )
 {
  FUNC_0(VAR_1, VAR_2, 64);
  VAR_6 = *((volatile unsigned long *)VAR_1);
  VAR_1 += 64;
  VAR_2 += 64;
 }

 FUNC_0( VAR_1, VAR_2, VAR_3 % 64 );

}
