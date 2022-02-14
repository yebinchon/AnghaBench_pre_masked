
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct rsi_common {int mutex; int roc_timer; TYPE_1__* priv; } ;
struct TYPE_2__ {int hw; } ;


 int VAR_0 ;
 struct rsi_common* VAR_1 ;
 int FUNC_0 (int *) ;
 struct rsi_common* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct rsi_common*) ;
 scalar_t__ FUNC_7 (int *) ;

void FUNC_8(struct timer_list *VAR_3)
{
 struct rsi_common *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);

 FUNC_5(VAR_0, "Remain on channel expired\n");

 FUNC_3(&VAR_4->mutex);
 FUNC_2(VAR_4->priv->hw);

 if (FUNC_7(&VAR_4->roc_timer))
  FUNC_0(&VAR_4->roc_timer);

 FUNC_6(VAR_4);
 FUNC_4(&VAR_4->mutex);
}
