
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_tx_queue {int queue; struct ef4_channel* channel; struct ef4_nic* efx; } ;
struct ef4_rx_queue {int slow_fill; struct ef4_nic* efx; } ;
struct ef4_nic {int dummy; } ;
struct ef4_channel {int channel; struct ef4_rx_queue rx_queue; struct ef4_tx_queue* tx_queue; int * type; struct ef4_nic* efx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ef4_channel* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static struct ef4_channel *
FUNC_2(struct ef4_nic *VAR_4, int VAR_5, struct ef4_channel *VAR_6)
{
 struct ef4_channel *VAR_7;
 struct ef4_rx_queue *VAR_8;
 struct ef4_tx_queue *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->efx = VAR_4;
 VAR_7->channel = VAR_5;
 VAR_7->type = &VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_9 = &VAR_7->tx_queue[VAR_10];
  VAR_9->efx = VAR_4;
  VAR_9->queue = VAR_5 * VAR_0 + VAR_10;
  VAR_9->channel = VAR_7;
 }

 VAR_8 = &VAR_7->rx_queue;
 VAR_8->efx = VAR_4;
 FUNC_1(&VAR_8->slow_fill, VAR_3, 0);

 return VAR_7;
}
