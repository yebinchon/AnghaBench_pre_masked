
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_q_cnt; int tx_q_cnt; } ;
struct xgbe_prv_data {TYPE_1__ hw_feat; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,unsigned int,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,unsigned int,int ,unsigned int) ;
 unsigned int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_2->hw_feat.tx_q_cnt, VAR_2->hw_feat.rx_q_cnt);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {

  VAR_3 = FUNC_0(VAR_2, VAR_5, VAR_1);
  FUNC_1(VAR_2, VAR_5, VAR_1, VAR_3);


  FUNC_1(VAR_2, VAR_5, VAR_0, 0);
 }
}
