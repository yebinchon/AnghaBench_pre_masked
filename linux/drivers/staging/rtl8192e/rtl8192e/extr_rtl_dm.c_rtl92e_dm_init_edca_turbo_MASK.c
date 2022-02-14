
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {int bcurrent_turbo_EDCA; int bis_cur_rdlstate; TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int bis_any_nonbepkts; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;

void FUNC_1(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_0(VAR_0);

 VAR_1->bcurrent_turbo_EDCA = 0;
 VAR_1->rtllib->bis_any_nonbepkts = 0;
 VAR_1->bis_cur_rdlstate = 0;
}
