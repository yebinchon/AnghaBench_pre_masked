
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {int queue; struct efx_channel* channel; struct efx_nic* efx; } ;
struct efx_rx_queue {int slow_fill; struct efx_nic* efx; } ;
struct efx_nic {int dummy; } ;
struct efx_channel {int channel; struct efx_rx_queue rx_queue; int filter_work; struct efx_tx_queue* tx_queue; int * type; struct efx_nic* efx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct efx_channel* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static struct efx_channel *
FUNC_3(struct efx_nic *VAR_5, int VAR_6, struct efx_channel *VAR_7)
{
 struct efx_channel *VAR_8;
 struct efx_rx_queue *VAR_9;
 struct efx_tx_queue *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->efx = VAR_5;
 VAR_8->channel = VAR_6;
 VAR_8->type = &VAR_2;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_10 = &VAR_8->tx_queue[VAR_11];
  VAR_10->efx = VAR_5;
  VAR_10->queue = VAR_6 * VAR_0 + VAR_11;
  VAR_10->channel = VAR_8;
 }





 VAR_9 = &VAR_8->rx_queue;
 VAR_9->efx = VAR_5;
 FUNC_2(&VAR_9->slow_fill, VAR_4, 0);

 return VAR_8;
}
