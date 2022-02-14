
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct efx_tx_queue {int * buffer; int * cb_page; TYPE_1__* efx; int queue; } ;
struct TYPE_3__ {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct efx_tx_queue*) ;
 int FUNC_2 (struct efx_tx_queue*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ,char*,int ) ;

void FUNC_5(struct efx_tx_queue *VAR_1)
{
 int VAR_2;

 if (!VAR_1->buffer)
  return;

 FUNC_4(VAR_1->efx, VAR_0, VAR_1->efx->net_dev,
    "destroying TX queue %d\n", VAR_1->queue);
 FUNC_1(VAR_1);

 if (VAR_1->cb_page) {
  for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_1); VAR_2++)
   FUNC_0(VAR_1->efx,
         &VAR_1->cb_page[VAR_2]);
  FUNC_3(VAR_1->cb_page);
  VAR_1->cb_page = ((void*)0);
 }

 FUNC_3(VAR_1->buffer);
 VAR_1->buffer = ((void*)0);
}
