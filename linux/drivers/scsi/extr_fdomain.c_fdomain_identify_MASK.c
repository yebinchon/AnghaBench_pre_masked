
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef enum chip_type { ____Placeholder_chip_type } chip_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static enum chip_type FUNC_2(int VAR_8)
{
 u16 VAR_9 = FUNC_0(VAR_8 + VAR_2) | FUNC_0(VAR_8 + VAR_3) << 8;

 switch (VAR_9) {
 case 0x6127:
  return VAR_4;
 case 0x60e9:
  break;
 default:
  return VAR_7;
 }


 FUNC_1(VAR_0, VAR_8 + VAR_1);
 if ((FUNC_0(VAR_8 + VAR_1) & VAR_0)) {
  FUNC_1(0, VAR_8 + VAR_1);
  if ((FUNC_0(VAR_8 + VAR_1) & VAR_0) == 0)
   return VAR_5;
 }

 return VAR_6;
}
