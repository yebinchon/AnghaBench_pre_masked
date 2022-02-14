
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct altera_state {int dummy; } ;


 int FUNC_0 (int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct altera_state *VAR_0,
   int VAR_1,
   int VAR_2,
   u8 *VAR_3,
   u8 *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 1;


 switch (VAR_1) {
 case 0:
  FUNC_0(1, 0, 0);
  FUNC_0(0, 0, 0);
  FUNC_0(0, 0, 0);
  break;

 case 1:
  FUNC_0(1, 0, 0);
  FUNC_0(1, 0, 0);
  FUNC_0(1, 0, 0);
  FUNC_0(0, 0, 0);
  FUNC_0(0, 0, 0);
  break;

 case 2:
  FUNC_0(1, 0, 0);
  FUNC_0(1, 0, 0);
  FUNC_0(1, 0, 0);
  FUNC_0(0, 0, 0);
  FUNC_0(0, 0, 0);
  break;

 default:
  VAR_7 = 0;
 }

 if (VAR_7) {

  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
   VAR_6 = FUNC_0(
     (VAR_5 == VAR_2 - 1),
     VAR_3[VAR_5 >> 3] & (1 << (VAR_5 & 7)),
     (VAR_4 != ((void*)0)));

   if (VAR_4 != ((void*)0)) {
    if (VAR_6)
     VAR_4[VAR_5 >> 3] |= (1 << (VAR_5 & 7));
    else
     VAR_4[VAR_5 >> 3] &= ~(u32)(1 << (VAR_5 & 7));

   }
  }

  FUNC_0(0, 0, 0);
 }

 return VAR_7;
}
