
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int * ptp_tx_skb; int ptp_task; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_1)
{



 FUNC_2(&VAR_1->ptp_task);

 if (VAR_1->ptp_tx_skb) {
  FUNC_3(VAR_1->ptp_tx_skb);
  VAR_1->ptp_tx_skb = ((void*)0);
 }


 FUNC_1(VAR_1);

 FUNC_0(VAR_0, "PTP stop ended successfully\n");
}
