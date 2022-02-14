
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct qtnf_topaz_rx_bd {int dummy; } ;
struct TYPE_3__ {int rx_bd_num; } ;
struct qtnf_pcie_topaz_state {TYPE_1__ base; TYPE_2__* rx_bd_vbase; } ;
struct TYPE_4__ {int info; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (struct qtnf_pcie_topaz_state*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct qtnf_pcie_topaz_state *VAR_1)
{
 u16 VAR_2;
 int VAR_3 = 0;

 FUNC_1(VAR_1->rx_bd_vbase, 0x0,
        VAR_1->base.rx_bd_num * sizeof(struct qtnf_topaz_rx_bd));

 for (VAR_2 = 0; VAR_2 < VAR_1->base.rx_bd_num; VAR_2++) {
  VAR_3 = FUNC_2(VAR_1, VAR_2, 0);
  if (VAR_3)
   break;
 }

 VAR_1->rx_bd_vbase[VAR_1->base.rx_bd_num - 1].info |=
      FUNC_0(VAR_0);

 return VAR_3;
}
