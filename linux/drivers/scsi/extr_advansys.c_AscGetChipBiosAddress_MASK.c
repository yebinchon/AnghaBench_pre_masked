
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PortAddr ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short FUNC_0 (int ) ;
 unsigned short FUNC_1 (int ) ;

__attribute__((used)) static unsigned short FUNC_2(PortAddr VAR_5,
         unsigned short VAR_6)
{
 unsigned short VAR_7;
 unsigned short VAR_8;






 if (VAR_6 & VAR_4)
  return 0;

 if ((VAR_6 & VAR_2) != 0) {
  VAR_7 = FUNC_1(VAR_5);
  VAR_7 &= 0x000F;
  VAR_8 = VAR_1 + VAR_7 * VAR_0;
  return VAR_8;
 }

 VAR_7 = FUNC_0(VAR_5);




 if (VAR_6 == VAR_3)
  VAR_7 &= 0x7FFF;
 VAR_8 = VAR_1 + (VAR_7 >> 12) * VAR_0;
 return VAR_8;
}
