
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rss; } ;
struct xgbe_prv_data {TYPE_2__* netdev; TYPE_1__ hw_feat; } ;
struct TYPE_4__ {int features; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_1)
{
 int VAR_2;

 if (!VAR_1->hw_feat.rss)
  return;

 if (VAR_1->netdev->features & VAR_0)
  VAR_2 = FUNC_2(VAR_1);
 else
  VAR_2 = FUNC_1(VAR_1);

 if (VAR_2)
  FUNC_0(VAR_1->netdev,
      "error configuring RSS, RSS disabled\n");
}
