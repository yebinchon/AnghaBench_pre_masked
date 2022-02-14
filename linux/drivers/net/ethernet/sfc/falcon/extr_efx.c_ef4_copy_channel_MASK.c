
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_tx_queue {int txd; int * buffer; struct ef4_channel* channel; } ;
struct ef4_rx_queue {int slow_fill; int rxd; int * buffer; } ;
struct TYPE_2__ {scalar_t__ state; scalar_t__ napi_id; int napi_hash_node; } ;
struct ef4_channel {struct ef4_rx_queue rx_queue; struct ef4_tx_queue* tx_queue; int eventq; TYPE_1__ napi_str; int * napi_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct ef4_channel* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static struct ef4_channel *
FUNC_4(const struct ef4_channel *VAR_3)
{
 struct ef4_channel *VAR_4;
 struct ef4_rx_queue *VAR_5;
 struct ef4_tx_queue *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return ((void*)0);

 *VAR_4 = *VAR_3;

 VAR_4->napi_dev = ((void*)0);
 FUNC_0(&VAR_4->napi_str.napi_hash_node);
 VAR_4->napi_str.napi_id = 0;
 VAR_4->napi_str.state = 0;
 FUNC_2(&VAR_4->eventq, 0, sizeof(VAR_4->eventq));

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = &VAR_4->tx_queue[VAR_7];
  if (VAR_6->channel)
   VAR_6->channel = VAR_4;
  VAR_6->buffer = ((void*)0);
  FUNC_2(&VAR_6->txd, 0, sizeof(VAR_6->txd));
 }

 VAR_5 = &VAR_4->rx_queue;
 VAR_5->buffer = ((void*)0);
 FUNC_2(&VAR_5->rxd, 0, sizeof(VAR_5->rxd));
 FUNC_3(&VAR_5->slow_fill, VAR_2, 0);

 return VAR_4;
}
