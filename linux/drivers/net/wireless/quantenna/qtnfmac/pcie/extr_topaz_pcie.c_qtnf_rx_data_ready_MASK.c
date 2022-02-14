
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct qtnf_topaz_rx_bd {int info; } ;
struct TYPE_2__ {size_t rx_bd_r_index; } ;
struct qtnf_pcie_topaz_state {struct qtnf_topaz_rx_bd* rx_bd_vbase; TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct qtnf_pcie_topaz_state *VAR_1)
{
 u16 VAR_2 = VAR_1->base.rx_bd_r_index;
 struct qtnf_topaz_rx_bd *VAR_3;
 u32 VAR_4;

 VAR_3 = &VAR_1->rx_bd_vbase[VAR_2];
 VAR_4 = FUNC_0(VAR_3->info);

 if (VAR_4 & VAR_0)
  return 0;

 return 1;
}
