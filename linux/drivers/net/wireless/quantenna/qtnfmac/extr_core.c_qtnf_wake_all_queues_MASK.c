
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qtnf_wmac {struct qtnf_vif* iflist; } ;
struct qtnf_vif {scalar_t__ netdev; TYPE_1__* mac; } ;
struct TYPE_4__ {int mac_bitmap; } ;
struct qtnf_bus {struct qtnf_wmac** mac; TYPE_2__ hw_info; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct qtnf_bus* bus; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct qtnf_vif* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct net_device *VAR_2)
{
 struct qtnf_vif *VAR_3 = FUNC_3(VAR_2);
 struct qtnf_wmac *VAR_4;
 struct qtnf_bus *VAR_5;
 int VAR_6;
 int VAR_7;

 if (FUNC_4(!VAR_3 || !VAR_3->mac || !VAR_3->mac->bus))
  return;

 VAR_5 = VAR_3->mac->bus;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (!(VAR_5->hw_info.mac_bitmap & FUNC_0(VAR_6)))
   continue;

  VAR_4 = VAR_5->mac[VAR_6];
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   VAR_3 = &VAR_4->iflist[VAR_7];
   if (VAR_3->netdev && FUNC_1(VAR_3->netdev))
    FUNC_2(VAR_3->netdev);
  }
 }
}
