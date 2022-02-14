
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int ,void*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct adapter*,scalar_t__) ;
 int FUNC_2 (struct adapter*,scalar_t__,int) ;

u8
FUNC_3(
struct adapter *VAR_3,
u16 VAR_4)
{
 u8 VAR_5 = {0x00};
 u8 VAR_6 = {0x00};
 u32 VAR_7 = 0;
 u16 VAR_8 = 0;

 FUNC_0(VAR_3, VAR_1, VAR_2, (void *)&VAR_8, 0);

 if (VAR_4 < VAR_8) {

  VAR_6 = VAR_4 & 0xFF;
  FUNC_2(VAR_3, VAR_0+1, VAR_6);
  VAR_5 = FUNC_1(VAR_3, VAR_0+2);

  VAR_6 = ((VAR_4 >> 8) & 0x03) | (VAR_5 & 0xFC);
  FUNC_2(VAR_3, VAR_0+2, VAR_6);


  VAR_5 = FUNC_1(VAR_3, VAR_0+3);
  VAR_6 = VAR_5 & 0x7F;
  FUNC_2(VAR_3, VAR_0+3, VAR_6);


  VAR_5 = FUNC_1(VAR_3, VAR_0+3);
  while (!(VAR_5 & 0x80)) {
   VAR_5 = FUNC_1(VAR_3, VAR_0+3);
   VAR_7++;
   if (VAR_7 == 1000) {
    VAR_7 = 0;
    break;
   }
  }
  return FUNC_1(VAR_3, VAR_0);
 } else
  return 0xFF;

}
