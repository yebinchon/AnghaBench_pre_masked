
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_sta_node {int mac_addr; scalar_t__ is_11n_enabled; } ;
struct mwifiex_private {scalar_t__ ap_11n_enabled; } ;


 int FUNC_0 (struct mwifiex_private*,int ) ;
 int FUNC_1 (struct mwifiex_private*,int ) ;
 int FUNC_2 (struct mwifiex_private*,int ) ;

void FUNC_3(struct mwifiex_private *VAR_0,
         struct mwifiex_sta_node *VAR_1)
{
 if (VAR_0->ap_11n_enabled && VAR_1->is_11n_enabled) {
  FUNC_0(VAR_0, VAR_1->mac_addr);
  FUNC_2(VAR_0, VAR_1->mac_addr);
 }
 FUNC_1(VAR_0, VAR_1->mac_addr);

 return;
}
