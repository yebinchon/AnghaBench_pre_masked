
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,int,int) ;

__attribute__((used)) static u8 FUNC_4(unsigned long VAR_4, u8 VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 u8 VAR_8 = 0;


 FUNC_3(VAR_4, 0x06, VAR_5);


 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  FUNC_1((VAR_2 | VAR_1), VAR_4 + VAR_3);
  FUNC_2(VAR_4);
  FUNC_1(VAR_2, VAR_4 + VAR_3);


  VAR_7 = FUNC_0(VAR_4 + VAR_3);
  VAR_8 <<= 1;
  if (VAR_7 & VAR_0)
   VAR_8 |= 1;

  FUNC_2(VAR_4);
 }


 FUNC_1(0, VAR_4 + VAR_3);
 return VAR_8;
}
