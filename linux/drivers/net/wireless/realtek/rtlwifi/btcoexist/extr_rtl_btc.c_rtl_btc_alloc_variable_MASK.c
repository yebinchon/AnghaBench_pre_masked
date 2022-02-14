
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wifi_only_cfg {int dummy; } ;
struct TYPE_2__ {void* btc_context; void* wifi_only_context; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct btc_coexist {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct rtl_priv *VAR_1, bool VAR_2)
{
 if (VAR_2)
  VAR_1->btcoexist.wifi_only_context =
   FUNC_0(sizeof(struct wifi_only_cfg), VAR_0);
 else
  VAR_1->btcoexist.btc_context =
   FUNC_0(sizeof(struct btc_coexist), VAR_0);
}
