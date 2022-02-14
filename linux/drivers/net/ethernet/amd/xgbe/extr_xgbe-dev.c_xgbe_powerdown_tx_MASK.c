
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {unsigned int tx_q_count; unsigned int channel_count; TYPE_1__** channel; } ;
struct TYPE_2__ {int tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,int ) ;
 int FUNC_2 (struct xgbe_prv_data*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_4)
{
 unsigned int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_4->tx_q_count; VAR_5++)
  FUNC_2(VAR_4, VAR_5);


 FUNC_1(VAR_4, VAR_1, VAR_3, 0);


 for (VAR_5 = 0; VAR_5 < VAR_4->channel_count; VAR_5++) {
  if (!VAR_4->channel[VAR_5]->tx_ring)
   break;

  FUNC_0(VAR_4->channel[VAR_5], VAR_0, VAR_2, 0);
 }
}
