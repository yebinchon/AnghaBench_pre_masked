
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct qtnf_pearl_rx_bd {int dummy; } ;
struct TYPE_2__ {int rx_bd_num; } ;
struct qtnf_pcie_pearl_state {TYPE_1__ base; int rx_bd_vbase; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct qtnf_pcie_pearl_state*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct qtnf_pcie_pearl_state *VAR_0)
{
 u16 VAR_1;
 int VAR_2 = 0;

 FUNC_0(VAR_0->rx_bd_vbase, 0x0,
        VAR_0->base.rx_bd_num * sizeof(struct qtnf_pearl_rx_bd));

 for (VAR_1 = 0; VAR_1 < VAR_0->base.rx_bd_num; VAR_1++) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2)
   break;
 }

 return VAR_2;
}
