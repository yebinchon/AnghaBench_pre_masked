
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int tx_q_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,unsigned int,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->tx_q_count; VAR_4++)
  FUNC_0(VAR_2, VAR_4, VAR_0, VAR_1, VAR_3);

 return 0;
}
