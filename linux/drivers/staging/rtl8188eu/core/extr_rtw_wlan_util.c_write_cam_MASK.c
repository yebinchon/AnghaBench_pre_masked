
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int*) ;

void FUNC_1(struct adapter *VAR_1, u8 VAR_2, u16 VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9;
 u32 VAR_10[2];

 VAR_8 = VAR_2 << 3;

 for (VAR_9 = 5; VAR_9 >= 0; VAR_9--) {
  switch (VAR_9) {
  case 0:
   VAR_7 = VAR_3 | (VAR_4[0] << 16) | (VAR_4[1] << 24);
   break;
  case 1:
   VAR_7 = VAR_4[2] | (VAR_4[3] << 8) | (VAR_4[4] << 16) | (VAR_4[5] << 24);
   break;
  default:
   VAR_6 = (VAR_9 - 2) << 2;
   VAR_7 = VAR_5[VAR_6] | (VAR_5[VAR_6 + 1] << 8) | (VAR_5[VAR_6 + 2] << 16) |
         (VAR_5[VAR_6 + 3] << 24);
   break;
  }

  VAR_10[0] = VAR_7;
  VAR_10[1] = VAR_8 + (unsigned int)VAR_9;

  FUNC_0(VAR_1, VAR_0, (u8 *)VAR_10);
 }
}
