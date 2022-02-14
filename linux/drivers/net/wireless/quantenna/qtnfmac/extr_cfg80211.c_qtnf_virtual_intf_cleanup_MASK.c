
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qtnf_wmac {int dummy; } ;
struct TYPE_2__ {scalar_t__ iftype; int wiphy; } ;
struct qtnf_vif {TYPE_1__ wdev; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*,int ) ;
 struct qtnf_vif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qtnf_wmac*,int) ;
 struct qtnf_wmac* FUNC_3 (int ) ;

void FUNC_4(struct net_device *VAR_2)
{
 struct qtnf_vif *VAR_3 = FUNC_1(VAR_2);
 struct qtnf_wmac *VAR_4 = FUNC_3(VAR_3->wdev.wiphy);

 if (VAR_3->wdev.iftype == VAR_0)
  FUNC_0(VAR_3->wdev.wiphy, VAR_2,
    VAR_1);

 FUNC_2(VAR_4, 1);
}
