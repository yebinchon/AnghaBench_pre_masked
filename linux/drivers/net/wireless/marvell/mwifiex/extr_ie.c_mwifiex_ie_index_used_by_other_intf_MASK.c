
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct mwifiex_private {struct mwifiex_ie* mgmt_ie; struct mwifiex_adapter* adapter; } ;
struct mwifiex_ie {scalar_t__ ie_length; scalar_t__ mgmt_subtype_mask; } ;
struct mwifiex_adapter {int priv_num; struct mwifiex_private** priv; } ;



__attribute__((used)) static int
FUNC_0(struct mwifiex_private *VAR_0, u16 VAR_1)
{
 int VAR_2;
 struct mwifiex_adapter *VAR_3 = VAR_0->adapter;
 struct mwifiex_ie *VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_3->priv_num; VAR_2++) {
  if (VAR_3->priv[VAR_2] != VAR_0) {
   VAR_4 = &VAR_3->priv[VAR_2]->mgmt_ie[VAR_1];
   if (VAR_4->mgmt_subtype_mask && VAR_4->ie_length)
    return -1;
  }
 }

 return 0;
}
