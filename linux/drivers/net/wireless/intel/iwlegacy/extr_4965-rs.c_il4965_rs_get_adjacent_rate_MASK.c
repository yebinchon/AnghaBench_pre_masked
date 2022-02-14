
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct il_priv {int dummy; } ;
struct TYPE_2__ {int prev_rs; int next_rs; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u16
FUNC_3(struct il_priv *VAR_3, u8 VAR_4, u16 VAR_5,
       int VAR_6)
{
 u8 VAR_7 = VAR_1;
 u8 VAR_8 = VAR_1;



 if (FUNC_1(VAR_6) || !FUNC_2(VAR_6)) {
  int VAR_9;
  u32 VAR_10;


  VAR_9 = VAR_4 - 1;
  for (VAR_10 = (1 << VAR_9); VAR_9 >= 0; VAR_9--, VAR_10 >>= 1) {
   if (VAR_5 & VAR_10) {
    VAR_8 = VAR_9;
    break;
   }
  }


  VAR_9 = VAR_4 + 1;
  for (VAR_10 = (1 << VAR_9); VAR_9 < VAR_0; VAR_9++, VAR_10 <<= 1) {
   if (VAR_5 & VAR_10) {
    VAR_7 = VAR_9;
    break;
   }
  }

  return (VAR_7 << 8) | VAR_8;
 }

 VAR_8 = VAR_4;
 while (VAR_8 != VAR_1) {
  VAR_8 = VAR_2[VAR_8].prev_rs;
  if (VAR_8 == VAR_1)
   break;
  if (VAR_5 & (1 << VAR_8))
   break;
  FUNC_0("Skipping masked lower rate: %d\n", VAR_8);
 }

 VAR_7 = VAR_4;
 while (VAR_7 != VAR_1) {
  VAR_7 = VAR_2[VAR_7].next_rs;
  if (VAR_7 == VAR_1)
   break;
  if (VAR_5 & (1 << VAR_7))
   break;
  FUNC_0("Skipping masked higher rate: %d\n", VAR_7);
 }

 return (VAR_7 << 8) | VAR_8;
}
