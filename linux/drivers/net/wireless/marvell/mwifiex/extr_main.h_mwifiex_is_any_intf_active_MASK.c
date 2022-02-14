
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_private {scalar_t__ media_connected; scalar_t__ bss_started; TYPE_1__* adapter; } ;
struct TYPE_2__ {int priv_num; struct mwifiex_private** priv; } ;


 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline u8 FUNC_1(struct mwifiex_private *VAR_2)
{
 struct mwifiex_private *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->adapter->priv_num; VAR_4++) {
  VAR_3 = VAR_2->adapter->priv[VAR_4];
  if (VAR_3) {
   if ((FUNC_0(VAR_3) == VAR_1 &&
        VAR_3->bss_started) ||
       (FUNC_0(VAR_3) == VAR_0 &&
        VAR_3->media_connected))
    return 1;
  }
 }

 return 0;
}
