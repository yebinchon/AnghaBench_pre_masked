
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct bnad_rx_ctrl {int napi; } ;
struct bnad {int num_rxp_per_rx; int netdev; TYPE_1__* rx_info; } ;
struct TYPE_2__ {struct bnad_rx_ctrl* rx_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct bnad *VAR_2, u32 VAR_3)
{
 struct bnad_rx_ctrl *VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_2->num_rxp_per_rx; VAR_5++) {
  VAR_4 = &VAR_2->rx_info[VAR_3].rx_ctrl[VAR_5];
  FUNC_0(VAR_2->netdev, &VAR_4->napi,
          VAR_1, VAR_0);
 }
}
