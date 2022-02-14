
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct ath6kl_vif {TYPE_1__* ar; } ;
struct TYPE_2__ {int wiphy; } ;


 int FUNC_0 (int ,int ) ;
 struct ath6kl_vif* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 struct ath6kl_vif* VAR_1 ;

void FUNC_2(struct timer_list *VAR_2)
{
 struct ath6kl_vif *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);

 FUNC_0(VAR_3->ar->wiphy, 0);
}
