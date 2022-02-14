
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u16 FUNC_4(unsigned long VAR_4, u8 VAR_5)
{
 u8 VAR_6, VAR_7;
 u16 VAR_8 = 0;
 int VAR_9;

 VAR_6 = (u8) (VAR_5 | 0x80);
 FUNC_1(VAR_4, VAR_6);

 for (VAR_9 = 15; VAR_9 >= 0; VAR_9--) {
  FUNC_2(VAR_1 | VAR_0, VAR_4 + VAR_3);
  FUNC_3(30);
  FUNC_2(VAR_1, VAR_4 + VAR_3);


  VAR_7 = FUNC_0(VAR_4 + VAR_3);
  VAR_7 &= VAR_2;
  VAR_8 += (VAR_7 << VAR_9);
  FUNC_3(30);
 }

 FUNC_2(0, VAR_4 + VAR_3);
 FUNC_3(30);
 return VAR_8;
}
