
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {int dummy; } ;
struct mwifiex_adapter {int priv_num; struct mwifiex_private** priv; } ;
typedef enum mwifiex_bss_role { ____Placeholder_mwifiex_bss_role } mwifiex_bss_role ;


 int FUNC_0 (struct mwifiex_private*) ;
 int VAR_0 ;

__attribute__((used)) static inline struct mwifiex_private *
FUNC_1(struct mwifiex_adapter *VAR_1,
   enum mwifiex_bss_role VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->priv_num; VAR_3++) {
  if (VAR_1->priv[VAR_3]) {
   if (VAR_2 == VAR_0 ||
       FUNC_0(VAR_1->priv[VAR_3]) == VAR_2)
    break;
  }
 }

 return ((VAR_3 < VAR_1->priv_num) ? VAR_1->priv[VAR_3] : ((void*)0));
}
