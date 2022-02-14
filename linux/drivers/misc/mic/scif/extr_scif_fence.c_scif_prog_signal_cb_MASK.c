
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scif_cb_arg {int src_dma_addr; int status; TYPE_2__* ep; } ;
struct TYPE_4__ {TYPE_1__* remote_dev; } ;
struct TYPE_3__ {int signal_pool; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct scif_cb_arg*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct scif_cb_arg *VAR_1 = VAR_0;

 FUNC_0(VAR_1->ep->remote_dev->signal_pool, VAR_1->status,
        VAR_1->src_dma_addr);
 FUNC_1(VAR_1);
}
