
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s_smt_rx_queue {void* rx_bmu_dsc; void* rx_bmu_ctl; } ;
struct TYPE_3__ {struct s_smt_rx_queue* rx_q; struct s_smt_rx_queue** rx; } ;
struct TYPE_4__ {TYPE_1__ fp; } ;
struct s_smc {TYPE_2__ hw; } ;
typedef void* HW_PTR ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static void FUNC_1(struct s_smc *VAR_6)
{
 struct s_smt_rx_queue *VAR_7 ;




 VAR_6->hw.fp.rx[VAR_4] = VAR_7 = &VAR_6->hw.fp.rx_q[VAR_4] ;
 VAR_7->rx_bmu_ctl = (HW_PTR) FUNC_0(VAR_0) ;
 VAR_7->rx_bmu_dsc = (HW_PTR) FUNC_0(VAR_2) ;




 VAR_6->hw.fp.rx[VAR_5] = VAR_7 = &VAR_6->hw.fp.rx_q[VAR_5] ;
 VAR_7->rx_bmu_ctl = (HW_PTR) FUNC_0(VAR_1) ;
 VAR_7->rx_bmu_dsc = (HW_PTR) FUNC_0(VAR_3) ;
}
