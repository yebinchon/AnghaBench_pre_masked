
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_rx_queue {int * buffer; TYPE_1__* efx; } ;
struct TYPE_2__ {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ef4_rx_queue*) ;
 int FUNC_1 (struct ef4_rx_queue*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ,char*,int ) ;

void FUNC_4(struct ef4_rx_queue *VAR_1)
{
 FUNC_3(VAR_1->efx, VAR_0, VAR_1->efx->net_dev,
    "destroying RX queue %d\n", FUNC_1(VAR_1));

 FUNC_0(VAR_1);

 FUNC_2(VAR_1->buffer);
 VAR_1->buffer = ((void*)0);
}
