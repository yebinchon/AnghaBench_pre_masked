
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_0(int VAR_7, int VAR_8)
{
 int VAR_9;

 VAR_9 = 0;
 switch (VAR_7&3) {
 default:
 case 130:
  VAR_9 = VAR_5;
  break;

 case 128:
  VAR_9 = VAR_6;
  break;

 case 129:
  VAR_9 = VAR_4;
  break;
 }

 if (VAR_8) {
  if (VAR_7 & VAR_1)
   VAR_9 |= VAR_3;

  if (VAR_7 & VAR_0)
   VAR_9 |= VAR_2;
 }

 return VAR_9;
}
