
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int tx_q_count; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct xgbe_prv_data*,unsigned int,int ,int ,unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,char*,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int*) ;
 unsigned int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_4(struct xgbe_prv_data *VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7[VAR_2];
 unsigned int VAR_8;

 VAR_6 = FUNC_3(VAR_5);

 FUNC_2(VAR_6, VAR_5->tx_q_count, VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_5->tx_q_count; VAR_8++)
  FUNC_0(VAR_5, VAR_8, VAR_0, VAR_1, VAR_7[VAR_8]);

 FUNC_1(VAR_5, VAR_4, VAR_5->netdev,
     "%d Tx hardware queues, %d byte fifo per queue\n",
     VAR_5->tx_q_count, ((VAR_7[0] + 1) * VAR_3));
}
