
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int * bnapi; int * rx_ring; int * tx_ring; int * tx_ring_map; } ;


 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*,int) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;
 int FUNC_5 (struct bnxt*) ;
 int FUNC_6 (struct bnxt*) ;
 int FUNC_7 (struct bnxt*) ;
 int FUNC_8 (struct bnxt*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct bnxt *VAR_0, bool VAR_1)
{
 FUNC_7(VAR_0);
 FUNC_6(VAR_0);
 FUNC_5(VAR_0);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0, VAR_1);
 if (VAR_1) {
  FUNC_4(VAR_0);
  FUNC_3(VAR_0);
  FUNC_8(VAR_0);
  FUNC_9(VAR_0->tx_ring_map);
  VAR_0->tx_ring_map = ((void*)0);
  FUNC_9(VAR_0->tx_ring);
  VAR_0->tx_ring = ((void*)0);
  FUNC_9(VAR_0->rx_ring);
  VAR_0->rx_ring = ((void*)0);
  FUNC_9(VAR_0->bnapi);
  VAR_0->bnapi = ((void*)0);
 } else {
  FUNC_0(VAR_0);
 }
}
