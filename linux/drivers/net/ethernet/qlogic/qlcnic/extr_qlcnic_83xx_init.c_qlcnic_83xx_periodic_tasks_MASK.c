
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fnum; } ;
struct qlcnic_adapter {int flags; TYPE_2__* ahw; TYPE_1__ fhash; } ;
struct TYPE_4__ {scalar_t__ vxlan_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*,int) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_adapter *VAR_2)
{
 if (VAR_2->fhash.fnum)
  FUNC_0(VAR_2);

 if (VAR_2->flags & VAR_0) {
  if (FUNC_2(VAR_2))
   return;

  if (FUNC_1(VAR_2, 1))
   return;

  VAR_2->flags &= ~VAR_0;
 } else if (VAR_2->flags & VAR_1) {
  if (FUNC_1(VAR_2, 0))
   return;

  VAR_2->ahw->vxlan_port = 0;
  VAR_2->flags &= ~VAR_1;
 }
}
