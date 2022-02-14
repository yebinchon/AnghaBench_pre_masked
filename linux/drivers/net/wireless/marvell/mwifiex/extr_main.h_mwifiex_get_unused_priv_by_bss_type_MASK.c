
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mwifiex_private {scalar_t__ bss_mode; int bss_num; } ;
struct mwifiex_adapter {size_t priv_num; struct mwifiex_private** priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mwifiex_adapter*,size_t) ;

__attribute__((used)) static inline struct mwifiex_private *
FUNC_1(struct mwifiex_adapter *VAR_1,
        u8 VAR_2)
{
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->priv_num; VAR_3++)
  if (VAR_1->priv[VAR_3]->bss_mode ==
     VAR_0) {
   VAR_1->priv[VAR_3]->bss_num =
   FUNC_0(VAR_1, VAR_2);
   break;
  }

 return ((VAR_3 < VAR_1->priv_num) ? VAR_1->priv[VAR_3] : ((void*)0));
}
