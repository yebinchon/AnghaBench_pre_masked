
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union s_fp_descr {int dummy; } s_fp_descr ;
typedef int u_int ;
struct s_smt_fp_txd {int dummy; } ;
struct s_smt_fp_rxd {int dummy; } ;
struct TYPE_4__ {int * mb_start; int * mb; } ;
struct TYPE_5__ {TYPE_1__ mbuf_pool; union s_fp_descr volatile* descr_p; } ;
struct TYPE_6__ {TYPE_2__ hwm; } ;
struct s_smc {TYPE_3__ os; } ;
typedef int SMbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct s_smc*,int ,int ) ;
 scalar_t__ FUNC_1 (struct s_smc*,int) ;
 scalar_t__ FUNC_2 (struct s_smc*,int) ;
 int * VAR_6 ;

int FUNC_3(struct s_smc *VAR_7)
{
 if (sizeof(struct s_smt_fp_rxd) % 16) {
  FUNC_0(VAR_7,VAR_0,VAR_1) ;
 }
 if (sizeof(struct s_smt_fp_txd) % 16) {
  FUNC_0(VAR_7,VAR_2,VAR_3) ;
 }




 if (!(VAR_7->os.hwm.descr_p = (union s_fp_descr volatile *)
  FUNC_1(VAR_7,(u_int)
  (VAR_5+1)*sizeof(struct s_smt_fp_txd)))) {
  return 1;
 }





 VAR_7->os.hwm.mbuf_pool.mb_start=(SMbuf *)(&VAR_7->os.hwm.mbuf_pool.mb[0]) ;
 return 0;
}
