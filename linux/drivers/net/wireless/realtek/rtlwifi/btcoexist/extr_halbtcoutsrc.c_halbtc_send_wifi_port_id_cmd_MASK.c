
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int hw; } ;
struct rtl_priv {TYPE_3__ mac80211; TYPE_2__* cfg; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* fill_h2c_cmd ) (int ,int ,int,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *) ;

void FUNC_1(void *VAR_1)
{
 struct btc_coexist *VAR_2 = (struct btc_coexist *)VAR_1;
 struct rtl_priv *VAR_3 = VAR_2->adapter;
 u8 VAR_4[1] = {0};

 VAR_3->cfg->ops->fill_h2c_cmd(VAR_3->mac80211.hw, VAR_0,
     1, VAR_4);
}
