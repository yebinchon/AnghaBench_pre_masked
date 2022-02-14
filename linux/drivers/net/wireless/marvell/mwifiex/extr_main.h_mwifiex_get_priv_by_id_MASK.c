
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mwifiex_private {scalar_t__ bss_num; scalar_t__ bss_type; } ;
struct mwifiex_adapter {int priv_num; struct mwifiex_private** priv; } ;



__attribute__((used)) static inline struct mwifiex_private *
FUNC_0(struct mwifiex_adapter *VAR_0,
         u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->priv_num; VAR_3++) {
  if (VAR_0->priv[VAR_3]) {
   if ((VAR_0->priv[VAR_3]->bss_num == VAR_1) &&
       (VAR_0->priv[VAR_3]->bss_type == VAR_2))
    break;
  }
 }
 return ((VAR_3 < VAR_0->priv_num) ? VAR_0->priv[VAR_3] : ((void*)0));
}
