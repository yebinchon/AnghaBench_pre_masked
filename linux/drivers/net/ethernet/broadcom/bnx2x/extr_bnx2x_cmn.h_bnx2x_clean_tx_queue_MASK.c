
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_fp_txdata {int tx_pkt_cons; int tx_pkt_prod; int txq_index; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bnx2x_fp_txdata*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static inline int FUNC_4(struct bnx2x *VAR_1,
           struct bnx2x_fp_txdata *VAR_2)
{
 int VAR_3 = 1000;

 while (FUNC_1(VAR_2)) {
  if (!VAR_3) {
   FUNC_0("timeout waiting for queue[%d]: txdata->tx_pkt_prod(%d) != txdata->tx_pkt_cons(%d)\n",
      VAR_2->txq_index, VAR_2->tx_pkt_prod,
      VAR_2->tx_pkt_cons);




   break;

  }
  VAR_3--;
  FUNC_3(1000, 2000);
 }

 return 0;
}
