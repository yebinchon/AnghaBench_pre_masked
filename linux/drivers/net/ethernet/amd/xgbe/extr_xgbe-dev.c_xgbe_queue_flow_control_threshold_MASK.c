
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int pfc_rfa; int* rx_rfa; int* rx_rfd; scalar_t__* pfcq; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_2,
           unsigned int VAR_3,
           unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_5 = FUNC_0(FUNC_2(VAR_2));

 if (VAR_2->pfcq[VAR_3] && (VAR_4 > VAR_2->pfc_rfa)) {

  VAR_6 = VAR_2->pfc_rfa;
  VAR_7 = VAR_6 + VAR_5;
  if (VAR_7 > VAR_0)
   VAR_7 = VAR_0;
  if (VAR_6 >= VAR_0)
   VAR_6 = VAR_0 - VAR_1;
 } else {





  if (VAR_4 <= 2048) {

   VAR_2->rx_rfa[VAR_3] = 0;
   VAR_2->rx_rfd[VAR_3] = 0;
   return;
  }

  if (VAR_4 <= 4096) {

   VAR_2->rx_rfa[VAR_3] = 0;
   VAR_2->rx_rfd[VAR_3] = 1;
   return;
  }

  if (VAR_4 <= VAR_5) {

   VAR_2->rx_rfa[VAR_3] = 2;
   VAR_2->rx_rfd[VAR_3] = 5;
   return;
  }

  if (VAR_4 <= (VAR_5 * 3)) {




   VAR_6 = VAR_4 - VAR_5;
   VAR_7 = VAR_6 + (VAR_5 / 2);
  } else {



   VAR_6 = VAR_5 * 2;
   VAR_6 += VAR_1;
   VAR_7 = VAR_6 + VAR_5;
  }
 }

 VAR_2->rx_rfa[VAR_3] = FUNC_1(VAR_6);
 VAR_2->rx_rfd[VAR_3] = FUNC_1(VAR_7);
}
