
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iftype; int wiphy; } ;
struct qtnf_vif {TYPE_1__ wdev; int netdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int ,int,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct qtnf_vif *VAR_3)
{
 if (VAR_3->wdev.iftype == VAR_1)
  FUNC_0(VAR_3->netdev, VAR_2,
          ((void*)0), 0, 1, VAR_0);

 FUNC_1(VAR_3->wdev.wiphy);
}
