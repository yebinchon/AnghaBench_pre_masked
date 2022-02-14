
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct _adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct _adapter*,int*) ;
 int FUNC_1 (struct _adapter*,int,int*) ;

u8 FUNC_2(struct _adapter *VAR_2, u16 VAR_3, u16 VAR_4, u8 *VAR_5)
{
 u8 VAR_6, VAR_7 = 1;
 u8 VAR_8[VAR_1];
 int VAR_9, VAR_10;

 if ((VAR_3 + VAR_4) > VAR_0)
  return 0;
 if (FUNC_0(VAR_2, &VAR_6) && VAR_6) {
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
   VAR_5[VAR_9] = 0xFF;
  return VAR_7;
 }
 VAR_6 = (VAR_3 >> 3) & 0xF;
 VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_8);
 VAR_9 = VAR_3 & 0x7;
 VAR_10 = 0;

 do {
  for (; VAR_9 < VAR_1; VAR_9++) {
   VAR_5[VAR_10++] = VAR_8[VAR_9];
   if (VAR_10 == VAR_4)
    return VAR_7;
  }
  VAR_6++;
  if (!FUNC_1(VAR_2, VAR_6, VAR_8))
   VAR_7 = 0;
  VAR_9 = 0;
 } while (1);
 return VAR_7;
}
