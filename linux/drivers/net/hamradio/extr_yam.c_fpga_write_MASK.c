
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int,unsigned long) ;

__attribute__((used)) static int FUNC_6(int VAR_7, unsigned char VAR_8)
{
 unsigned char VAR_9;
 int VAR_10;
 unsigned long VAR_11 = VAR_6 + VAR_0 / 10;

 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
  VAR_9 = (VAR_8 & 0x80) ? (VAR_5 | VAR_2) : VAR_2;
  FUNC_4(VAR_9 | VAR_3 | VAR_4, FUNC_1(VAR_7));
  VAR_8 <<= 1;
  FUNC_4(0xfc, FUNC_2(VAR_7));
  while ((FUNC_3(FUNC_0(VAR_7)) & VAR_1) == 0)
   if (FUNC_5(VAR_6, VAR_11))
    return -1;
 }

 return 0;
}
