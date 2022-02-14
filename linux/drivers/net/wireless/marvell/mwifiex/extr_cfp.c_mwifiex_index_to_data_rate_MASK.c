
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mwifiex_private {TYPE_1__* adapter; } ;
struct TYPE_2__ {scalar_t__ user_dev_mcs_support; scalar_t__ is_hw_11ac_capable; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int** VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (struct mwifiex_private*,int,int) ;

u32 FUNC_2(struct mwifiex_private *VAR_5,
          u8 VAR_6, u8 VAR_7)
{
 u32 VAR_8 =
  (VAR_5->adapter->user_dev_mcs_support == VAR_0) ? 16 : 8;
 u32 VAR_9;

 if (VAR_5->adapter->is_hw_11ac_capable)
  return FUNC_1(VAR_5, VAR_6, VAR_7);

 if (VAR_7 & FUNC_0(0)) {
  if (VAR_6 == VAR_1) {
   if (VAR_7 & FUNC_0(2))
    VAR_9 = 0x0D;
   else
    VAR_9 = 0x0C;
  } else if (VAR_6 < VAR_8) {
   if (VAR_7 & FUNC_0(1)) {
    if (VAR_7 & FUNC_0(2))

     VAR_9 = VAR_3[1][VAR_6];
    else

     VAR_9 = VAR_3[0][VAR_6];
   } else {
    if (VAR_7 & FUNC_0(2))

     VAR_9 = VAR_3[3][VAR_6];
    else

     VAR_9 = VAR_3[2][VAR_6];
   }
  } else
   VAR_9 = VAR_4[0];
 } else {
  if (VAR_6 >= VAR_2)
   VAR_6 = 0;
  VAR_9 = VAR_4[VAR_6];
 }
 return VAR_9;
}
