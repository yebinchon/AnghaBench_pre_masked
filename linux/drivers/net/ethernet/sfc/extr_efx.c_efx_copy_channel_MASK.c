
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_tx_queue {int txd; int * buffer; struct efx_channel* channel; } ;
struct efx_rx_queue {int slow_fill; int rxd; int * buffer; } ;
struct TYPE_2__ {scalar_t__ state; scalar_t__ napi_id; int napi_hash_node; } ;
struct efx_channel {int filter_work; struct efx_rx_queue rx_queue; struct efx_tx_queue* tx_queue; int eventq; TYPE_1__ napi_str; int * napi_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct efx_channel* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static struct efx_channel *
FUNC_5(const struct efx_channel *VAR_4)
{
 struct efx_channel *VAR_5;
 struct efx_rx_queue *VAR_6;
 struct efx_tx_queue *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 *VAR_5 = *VAR_4;

 VAR_5->napi_dev = ((void*)0);
 FUNC_0(&VAR_5->napi_str.napi_hash_node);
 VAR_5->napi_str.napi_id = 0;
 VAR_5->napi_str.state = 0;
 FUNC_3(&VAR_5->eventq, 0, sizeof(VAR_5->eventq));

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = &VAR_5->tx_queue[VAR_8];
  if (VAR_7->channel)
   VAR_7->channel = VAR_5;
  VAR_7->buffer = ((void*)0);
  FUNC_3(&VAR_7->txd, 0, sizeof(VAR_7->txd));
 }

 VAR_6 = &VAR_5->rx_queue;
 VAR_6->buffer = ((void*)0);
 FUNC_3(&VAR_6->rxd, 0, sizeof(VAR_6->rxd));
 FUNC_4(&VAR_6->slow_fill, VAR_3, 0);




 return VAR_5;
}
