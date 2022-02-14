
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct adapter {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct adapter*,scalar_t__,int*) ;
 int FUNC_3 (struct adapter*,int ,int*) ;
 int FUNC_4 (struct adapter*,int ,int*) ;

__attribute__((used)) static u16 FUNC_5(struct adapter *VAR_1)
{
 u16 VAR_2 = 0;
 u8 VAR_3 = 0, VAR_4 = 0;
 u8 VAR_5, VAR_6 = 0;

 FUNC_3(VAR_1, VAR_0, (u8 *)&VAR_2);

 while (FUNC_2(VAR_1, VAR_2, &VAR_5) &&
        FUNC_0(VAR_2)) {
  if (VAR_5 != 0xFF) {
   if ((VAR_5 & 0x1F) == 0x0F) {
    VAR_3 = VAR_5;
    VAR_2++;
    FUNC_2(VAR_1, VAR_2, &VAR_5);
    if ((VAR_5 & 0x0F) == 0x0F) {
     VAR_2++;
     continue;
    } else {
     VAR_3 = ((VAR_3 & 0xE0) >> 5) | ((VAR_5 & 0xF0) >> 1);
     VAR_4 = VAR_5 & 0x0F;
    }
   } else {
    VAR_3 = (VAR_5 >> 4) & 0x0F;
    VAR_4 = VAR_5 & 0x0F;
   }
   VAR_6 = FUNC_1(VAR_4);

   VAR_2 = VAR_2 + (VAR_6 * 2) + 1;
  } else {
   break;
  }
 }

 FUNC_4(VAR_1, VAR_0, (u8 *)&VAR_2);

 return VAR_2;
}
