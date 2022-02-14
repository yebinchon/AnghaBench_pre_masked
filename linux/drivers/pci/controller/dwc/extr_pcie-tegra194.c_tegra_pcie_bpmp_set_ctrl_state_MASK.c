
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_pcie_dw {int cid; int bpmp; } ;
struct TYPE_6__ {int size; struct tegra_bpmp_message* data; } ;
struct TYPE_5__ {int size; struct tegra_bpmp_message* data; } ;
struct TYPE_4__ {int pcie_controller; int enable; } ;
struct tegra_bpmp_message {TYPE_3__ rx; TYPE_2__ tx; int mrq; TYPE_1__ controller_state; int cmd; } ;
struct mrq_uphy_response {TYPE_3__ rx; TYPE_2__ tx; int mrq; TYPE_1__ controller_state; int cmd; } ;
struct mrq_uphy_request {TYPE_3__ rx; TYPE_2__ tx; int mrq; TYPE_1__ controller_state; int cmd; } ;
typedef int resp ;
typedef int req ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_1 (int ,struct tegra_bpmp_message*) ;

__attribute__((used)) static int FUNC_2(struct tegra_pcie_dw *VAR_2,
       bool VAR_3)
{
 struct mrq_uphy_response VAR_4;
 struct tegra_bpmp_message VAR_5;
 struct mrq_uphy_request VAR_6;


 if (VAR_2->cid == 5)
  return 0;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));

 VAR_6.cmd = VAR_0;
 VAR_6.controller_state.pcie_controller = VAR_2->cid;
 VAR_6.controller_state.enable = VAR_3;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.mrq = VAR_1;
 VAR_5.tx.data = &VAR_6;
 VAR_5.tx.size = sizeof(VAR_6);
 VAR_5.rx.data = &VAR_4;
 VAR_5.rx.size = sizeof(VAR_4);

 return FUNC_1(VAR_2->bpmp, &VAR_5);
}
