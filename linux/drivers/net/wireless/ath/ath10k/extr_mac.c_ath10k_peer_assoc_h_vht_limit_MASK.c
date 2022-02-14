
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int const FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u16
FUNC_3(u16 VAR_5,
         const u16 VAR_6[VAR_4])
{
 int VAR_7;
 int VAR_8;
 u16 VAR_9;
 u16 VAR_10;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_9 = FUNC_1(VAR_5, VAR_8) &
     VAR_6[VAR_8];

  if (VAR_9)
   VAR_7 = FUNC_2(VAR_9) - 1;
  else
   VAR_7 = -1;

  switch (VAR_7) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  default:

   FUNC_0(1);

  case -1:
   VAR_10 = VAR_0;
   break;
  case 7:
   VAR_10 = VAR_1;
   break;
  case 8:
   VAR_10 = VAR_2;
   break;
  case 9:
   VAR_10 = VAR_3;
   break;
  }

  VAR_5 &= ~(0x3 << (VAR_8 * 2));
  VAR_5 |= VAR_10 << (VAR_8 * 2);
 }

 return VAR_5;
}
