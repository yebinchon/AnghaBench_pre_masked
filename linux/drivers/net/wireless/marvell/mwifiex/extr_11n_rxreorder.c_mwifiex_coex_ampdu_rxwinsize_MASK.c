
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mwifiex_private {scalar_t__ bss_started; scalar_t__ media_connected; } ;
struct mwifiex_adapter {size_t priv_num; struct mwifiex_private** priv; } ;


 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mwifiex_adapter*,int) ;

void FUNC_2(struct mwifiex_adapter *VAR_3)
{
 u8 VAR_4;
 struct mwifiex_private *VAR_5;
 u8 VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3->priv_num; VAR_4++) {
  if (VAR_3->priv[VAR_4]) {
   VAR_5 = VAR_3->priv[VAR_4];
   if (FUNC_0(VAR_5) == VAR_1) {
    if (VAR_5->media_connected)
     VAR_6++;
   }
   if (FUNC_0(VAR_5) == VAR_2) {
    if (VAR_5->bss_started)
     VAR_6++;
   }
  }
  if (VAR_6 >= VAR_0)
   break;
 }
 if (VAR_6 >= VAR_0)
  FUNC_1(VAR_3, 1);
 else
  FUNC_1(VAR_3, 0);
}
