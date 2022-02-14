
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int pfc_rfa; int netdev; int * pfcq; int rx_q_count; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int,unsigned int*) ;
 unsigned int FUNC_5 (struct xgbe_prv_data*) ;
 unsigned int FUNC_6 (struct xgbe_prv_data*) ;
 unsigned int FUNC_7 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_8(struct xgbe_prv_data *VAR_1,
        unsigned int VAR_2,
        unsigned int *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_4 = FUNC_0(FUNC_5(VAR_1));
 VAR_7 = FUNC_2(VAR_1->rx_q_count);
 VAR_8 = FUNC_7(VAR_1);

 if (!VAR_8 || ((VAR_4 * VAR_7) > VAR_2)) {

  FUNC_4(VAR_2, VAR_7, VAR_3);
  return;
 }


 VAR_5 = VAR_2 - (VAR_4 * VAR_7);




 VAR_1->pfc_rfa = FUNC_6(VAR_1);
 VAR_1->pfc_rfa = FUNC_1(VAR_1->pfc_rfa);

 if (VAR_1->pfc_rfa > VAR_4) {
  VAR_6 = VAR_1->pfc_rfa - VAR_4;
  VAR_6 = FUNC_0(VAR_6);
 } else {
  VAR_6 = 0;
 }






 VAR_9 = VAR_7;
 while (VAR_9 > 0) {
  VAR_9--;

  VAR_3[VAR_9] = (VAR_4 / VAR_0) - 1;

  if (!VAR_1->pfcq[VAR_9] || !VAR_6)
   continue;

  if (VAR_6 > VAR_5) {
   FUNC_3(VAR_1->netdev,
        "RXq%u cannot set needed fifo size\n", VAR_9);
   if (!VAR_5)
    continue;

   VAR_6 = VAR_5;
  }

  VAR_3[VAR_9] += (VAR_6 / VAR_0);
  VAR_5 -= VAR_6;
 }

 if (VAR_5) {
  unsigned int VAR_10 = VAR_5 / VAR_7;


  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   VAR_3[VAR_9] += (VAR_10 / VAR_0);
 }
}
