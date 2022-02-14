
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union s_fp_descr {int dummy; } s_fp_descr ;
typedef int u_long ;
struct s_smt_rx_queue {scalar_t__ rx_used; int rx_free; struct s_smt_fp_rxd volatile* rx_curr_get; struct s_smt_fp_rxd volatile* rx_curr_put; } ;
struct s_smt_fp_rxd {int rxd_nrdadr; } ;
struct TYPE_5__ {struct s_smt_rx_queue** rx; } ;
struct TYPE_6__ {TYPE_1__ fp; } ;
struct TYPE_8__ {scalar_t__ descr_p; } ;
struct TYPE_7__ {TYPE_4__ hwm; } ;
struct s_smc {TYPE_2__ hw; TYPE_3__ os; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct s_smc*,union s_fp_descr volatile*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct s_smc *VAR_3)
{
 struct s_smt_fp_rxd volatile *VAR_4 ;
 struct s_smt_rx_queue *VAR_5 ;
 u_long VAR_6 ;




 VAR_4 = (struct s_smt_fp_rxd volatile *) VAR_3->os.hwm.descr_p ;
 VAR_5 = VAR_3->hw.fp.rx[VAR_1] ;
 FUNC_1(3, "Init RxD ring, %d RxDs", VAR_2);
 (void)FUNC_2(VAR_3,(union s_fp_descr volatile *)VAR_4,
  VAR_2) ;
 VAR_6 = FUNC_3(VAR_4->rxd_nrdadr) ;
 VAR_4++ ;
 VAR_5->rx_curr_put = VAR_5->rx_curr_get = VAR_4 ;
 VAR_5->rx_free = VAR_2 ;
 VAR_5->rx_used = 0 ;
 FUNC_4(FUNC_0(VAR_0),VAR_6) ;
}
