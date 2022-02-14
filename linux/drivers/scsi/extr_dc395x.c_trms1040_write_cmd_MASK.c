
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_4, u8 VAR_5, u8 VAR_6)
{
 int VAR_7;
 u8 VAR_8;


 for (VAR_7 = 0; VAR_7 < 3; VAR_7++, VAR_5 <<= 1) {
  VAR_8 = VAR_2;
  if (VAR_5 & 0x04)
   VAR_8 |= VAR_0;

  FUNC_0(VAR_8, VAR_4 + VAR_3);
  FUNC_1(VAR_4);
  FUNC_0((VAR_8 | VAR_1),
       VAR_4 + VAR_3);
  FUNC_1(VAR_4);
 }


 for (VAR_7 = 0; VAR_7 < 7; VAR_7++, VAR_6 <<= 1) {
  VAR_8 = VAR_2;
  if (VAR_6 & 0x40)
   VAR_8 |= VAR_0;

  FUNC_0(VAR_8, VAR_4 + VAR_3);
  FUNC_1(VAR_4);
  FUNC_0((VAR_8 | VAR_1),
       VAR_4 + VAR_3);
  FUNC_1(VAR_4);
 }
 FUNC_0(VAR_2, VAR_4 + VAR_3);
 FUNC_1(VAR_4);
}
