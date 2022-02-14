
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
struct s_smt_tx_queue {int tx_free; scalar_t__ tx_used; struct s_smt_fp_txd volatile* tx_curr_get; struct s_smt_fp_txd volatile* tx_curr_put; } ;
struct s_smt_fp_txd {int txd_ntdadr; } ;
struct s_smt_fp_rxd {int dummy; } ;
struct TYPE_7__ {struct s_smt_tx_queue** tx; } ;
struct TYPE_8__ {TYPE_3__ fp; } ;
struct TYPE_5__ {scalar_t__ descr_p; } ;
struct TYPE_6__ {TYPE_1__ hwm; } ;
struct s_smc {TYPE_4__ hw; TYPE_2__ os; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct s_smc*,union s_fp_descr volatile*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct s_smc *VAR_7)
{
 struct s_smt_fp_txd volatile *VAR_8 ;
 struct s_smt_tx_queue *VAR_9 ;
 u_long VAR_10 ;




 VAR_8 = (struct s_smt_fp_txd volatile *) ((char *)VAR_7->os.hwm.descr_p +
  VAR_6*sizeof(struct s_smt_fp_rxd)) ;
 VAR_9 = VAR_7->hw.fp.tx[VAR_4] ;
 FUNC_1(3, "Init async TxD ring, %d TxDs", VAR_2);
 (void)FUNC_2(VAR_7,(union s_fp_descr volatile *)VAR_8,
  VAR_2) ;
 VAR_10 = FUNC_3(VAR_8->txd_ntdadr) ;
 VAR_8++ ;
 VAR_9->tx_curr_put = VAR_9->tx_curr_get = VAR_8 ;
 VAR_8-- ;
 VAR_9->tx_free = VAR_2 ;
 VAR_9->tx_used = 0 ;
 FUNC_4(FUNC_0(VAR_0),VAR_10) ;

 VAR_8 = (struct s_smt_fp_txd volatile *) ((char *)VAR_8 +
  VAR_2*sizeof(struct s_smt_fp_txd)) ;
 VAR_9 = VAR_7->hw.fp.tx[VAR_5] ;
 FUNC_1(3, "Init sync TxD ring, %d TxDs", VAR_3);
 (void)FUNC_2(VAR_7,(union s_fp_descr volatile *)VAR_8,
  VAR_3) ;
 VAR_10 = FUNC_3(VAR_8->txd_ntdadr) ;
 VAR_8++ ;
 VAR_9->tx_curr_put = VAR_9->tx_curr_get = VAR_8 ;
 VAR_9->tx_free = VAR_3 ;
 VAR_9->tx_used = 0 ;
 FUNC_4(FUNC_0(VAR_1),VAR_10) ;
}
