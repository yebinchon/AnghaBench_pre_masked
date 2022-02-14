
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_vlan {scalar_t__ vid; int list; scalar_t__ configured; } ;
struct qede_dev {int non_configured_vlans; int configured_vlans; } ;


 int FUNC_0 (struct qede_vlan*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct qede_dev *VAR_0,
        struct qede_vlan *VAR_1)
{

 if (VAR_1->vid != 0) {
  if (VAR_1->configured)
   VAR_0->configured_vlans--;
  else
   VAR_0->non_configured_vlans--;
 }

 FUNC_1(&VAR_1->list);
 FUNC_0(VAR_1);
}
