
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (unsigned char,int ) ;

__attribute__((used)) static void FUNC_1(unsigned char VAR_2)
{
 int VAR_3;

 VAR_2 = ~VAR_2;
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  unsigned char VAR_4;
  VAR_4 = (VAR_2 & 0x80) >> 7;
  FUNC_0( VAR_4, VAR_0 );
  FUNC_0( VAR_4 | VAR_1, VAR_0 );
  VAR_2 <<= 1;
 }
}
