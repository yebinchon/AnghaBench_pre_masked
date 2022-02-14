
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,int,int) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_5, u8 VAR_6, u8 VAR_7)
{
 int VAR_8;
 u8 VAR_9;


 FUNC_3(VAR_5, 0x05, VAR_6);


 for (VAR_8 = 0; VAR_8 < 8; VAR_8++, VAR_7 <<= 1) {
  VAR_9 = VAR_3;
  if (VAR_7 & 0x80)
   VAR_9 |= VAR_1;

  FUNC_1(VAR_9, VAR_5 + VAR_4);
  FUNC_2(VAR_5);
  FUNC_1((VAR_9 | VAR_2), VAR_5 + VAR_4);
  FUNC_2(VAR_5);
 }
 FUNC_1(VAR_3, VAR_5 + VAR_4);
 FUNC_2(VAR_5);


 FUNC_1(0, VAR_5 + VAR_4);
 FUNC_2(VAR_5);

 FUNC_1(VAR_3, VAR_5 + VAR_4);
 FUNC_2(VAR_5);


 while (1) {
  FUNC_1((VAR_3 | VAR_2), VAR_5 + VAR_4);
  FUNC_2(VAR_5);

  FUNC_1(VAR_3, VAR_5 + VAR_4);
  FUNC_2(VAR_5);

  if (FUNC_0(VAR_5 + VAR_4) & VAR_0)
   break;
 }


 FUNC_1(0, VAR_5 + VAR_4);
}
