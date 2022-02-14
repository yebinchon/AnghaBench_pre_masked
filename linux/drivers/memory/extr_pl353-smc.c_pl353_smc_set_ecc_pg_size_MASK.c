
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

int FUNC_2(unsigned int VAR_4)
{
 u32 VAR_5, VAR_6;

 switch (VAR_4) {
 case 0:
  VAR_6 = 0;
  break;
 case 128:
  VAR_6 = 1;
  break;
 case 130:
  VAR_6 = 2;
  break;
 case 129:
  VAR_6 = 3;
  break;
 default:
  return -VAR_0;
 }

 VAR_5 = FUNC_0(VAR_3 + VAR_1);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_6;
 FUNC_1(VAR_5, VAR_3 + VAR_1);

 return 0;
}
