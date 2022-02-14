
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_5, u8 VAR_6, u16 VAR_7)
{
 u8 VAR_8;
 u8 VAR_9;
 int VAR_10;

 VAR_9 = (u8) (VAR_6 | 0x40);
 FUNC_1(VAR_5, VAR_9);
 for (VAR_10 = 15; VAR_10 >= 0; VAR_10--) {
  if (VAR_7 & 0x8000)
   FUNC_2(VAR_1 | VAR_3, VAR_5 + VAR_4);
  else
   FUNC_2(VAR_1, VAR_5 + VAR_4);
  FUNC_3(30);
  FUNC_2(VAR_1 | VAR_0, VAR_5 + VAR_4);
  FUNC_3(30);
  VAR_7 <<= 1;
 }
 FUNC_2(VAR_1, VAR_5 + VAR_4);
 FUNC_3(30);
 FUNC_2(0, VAR_5 + VAR_4);
 FUNC_3(30);

 FUNC_2(VAR_1, VAR_5 + VAR_4);
 FUNC_3(30);

 for (;;) {
  FUNC_2(VAR_1 | VAR_0, VAR_5 + VAR_4);
  FUNC_3(30);
  FUNC_2(VAR_1, VAR_5 + VAR_4);
  FUNC_3(30);
  if ((VAR_8 = FUNC_0(VAR_5 + VAR_4)) & VAR_2)
   break;
 }
 FUNC_2(0, VAR_5 + VAR_4);
}
