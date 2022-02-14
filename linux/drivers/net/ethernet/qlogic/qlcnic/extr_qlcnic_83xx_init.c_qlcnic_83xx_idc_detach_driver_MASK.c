
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int num_msix; TYPE_1__* intr_tbl; } ;
struct TYPE_3__ {int id; scalar_t__ src; scalar_t__ enabled; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct net_device*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;

__attribute__((used)) static void FUNC_6(struct qlcnic_adapter *VAR_0)
{
 int VAR_1;
 struct net_device *VAR_2 = VAR_0->netdev;

 FUNC_0(VAR_2);
 FUNC_1(VAR_0);


 FUNC_2(VAR_0);
 FUNC_3(VAR_0, VAR_2);
 for (VAR_1 = 0; VAR_1 < VAR_0->ahw->num_msix; VAR_1++) {
  VAR_0->ahw->intr_tbl[VAR_1].id = VAR_1;
  VAR_0->ahw->intr_tbl[VAR_1].enabled = 0;
  VAR_0->ahw->intr_tbl[VAR_1].src = 0;
 }

 if (FUNC_4(VAR_0))
  FUNC_5(VAR_0);
}
