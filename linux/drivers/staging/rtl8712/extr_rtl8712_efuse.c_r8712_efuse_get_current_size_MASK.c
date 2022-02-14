
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct _adapter {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct _adapter*,scalar_t__,int*) ;

u16 FUNC_2(struct _adapter *VAR_1)
{
 int VAR_2 = 1;
 u16 VAR_3 = 0;
 u8 VAR_4 = 0;
 u8 VAR_5, VAR_6 = 0;

 while (VAR_2 && FUNC_1(VAR_1, VAR_3,
        &VAR_5) && (VAR_3 < VAR_0)) {
  if (VAR_5 != 0xFF) {
   VAR_4 = VAR_5 & 0x0F;
   VAR_6 = FUNC_0(VAR_4);

   VAR_3 = VAR_3 + (VAR_6 * 2) + 1;
  } else {
   VAR_2 = 0;
  }
 }
 return VAR_3;
}
