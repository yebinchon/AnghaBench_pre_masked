
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int hw; } ;
struct rtl_priv {TYPE_3__ mac80211; TYPE_2__* cfg; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* fill_h2c_cmd ) (int ,int ,int ,int *) ;} ;


 int FUNC_0 (int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u8 VAR_1,
    u32 VAR_2, u8 *VAR_3)
{
 struct btc_coexist *VAR_4 = (struct btc_coexist *)VAR_0;
 struct rtl_priv *VAR_5 = VAR_4->adapter;

 VAR_5->cfg->ops->fill_h2c_cmd(VAR_5->mac80211.hw, VAR_1,
     VAR_2, VAR_3);
}
