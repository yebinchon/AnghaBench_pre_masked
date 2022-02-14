
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fc_tx; int fc_rx; int autoneg; int msg; } ;
union nic_mbx {TYPE_1__ pfc; } ;
struct pfc {int fc_tx; int fc_rx; int autoneg; scalar_t__ get; } ;
struct nicpf {int num_vf_en; int node; int * vf_lmac_map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int,struct pfc*) ;
 int FUNC_3 (int ,int,int,struct pfc*) ;
 int FUNC_4 (struct nicpf*,int) ;
 int FUNC_5 (struct nicpf*,int,union nic_mbx*) ;

__attribute__((used)) static void FUNC_6(struct nicpf *VAR_1, int VAR_2, struct pfc *VAR_3)
{
 int VAR_4, VAR_5;
 struct pfc VAR_6;
 union nic_mbx VAR_7 = {};

 if (VAR_2 >= VAR_1->num_vf_en)
  return;
 VAR_4 = FUNC_0(VAR_1->vf_lmac_map[VAR_2]);
 VAR_5 = FUNC_1(VAR_1->vf_lmac_map[VAR_2]);

 if (VAR_3->get) {
  FUNC_2(VAR_1->node, VAR_4, VAR_5, &VAR_6);
  VAR_7.pfc.msg = VAR_0;
  VAR_7.pfc.autoneg = VAR_6.autoneg;
  VAR_7.pfc.fc_rx = VAR_6.fc_rx;
  VAR_7.pfc.fc_tx = VAR_6.fc_tx;
  FUNC_5(VAR_1, VAR_2, &VAR_7);
 } else {
  FUNC_3(VAR_1->node, VAR_4, VAR_5, VAR_3);
  FUNC_4(VAR_1, VAR_2);
 }
}
