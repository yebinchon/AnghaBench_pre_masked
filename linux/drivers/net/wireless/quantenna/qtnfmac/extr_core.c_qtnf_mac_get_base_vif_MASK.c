
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qtnf_wmac {struct qtnf_vif* iflist; } ;
struct TYPE_2__ {scalar_t__ iftype; } ;
struct qtnf_vif {TYPE_1__ wdev; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;

struct qtnf_vif *FUNC_0(struct qtnf_wmac *VAR_2)
{
 struct qtnf_vif *VAR_3;

 VAR_3 = &VAR_2->iflist[VAR_1];

 if (VAR_3->wdev.iftype == VAR_0)
  return ((void*)0);

 return VAR_3;
}
