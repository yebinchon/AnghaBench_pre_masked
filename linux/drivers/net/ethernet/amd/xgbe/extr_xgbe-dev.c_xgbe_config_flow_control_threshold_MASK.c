
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int rx_q_count; int * rx_rfd; int * rx_rfa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xgbe_prv_data*,unsigned int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->rx_q_count; VAR_4++) {
  FUNC_0(VAR_3, VAR_4, VAR_0, VAR_1,
           VAR_3->rx_rfa[VAR_4]);
  FUNC_0(VAR_3, VAR_4, VAR_0, VAR_2,
           VAR_3->rx_rfd[VAR_4]);
 }
}
