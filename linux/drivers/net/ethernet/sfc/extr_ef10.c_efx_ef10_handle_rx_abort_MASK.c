
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_rx_queue {unsigned int scatter_n; unsigned int removed_count; unsigned int ptr_mask; scalar_t__ scatter_len; TYPE_1__* efx; } ;
struct TYPE_4__ {int n_rx_nodesc_trunc; } ;
struct TYPE_3__ {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_rx_queue*,unsigned int,unsigned int,int ,int ) ;
 TYPE_2__* FUNC_1 (struct efx_rx_queue*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct efx_rx_queue *VAR_2)
{
 unsigned int VAR_3;

 FUNC_2(VAR_2->efx, VAR_1, VAR_2->efx->net_dev,
    "scattered RX aborted (dropping %u buffers)\n",
    VAR_2->scatter_n);

 VAR_3 = VAR_2->removed_count & VAR_2->ptr_mask;

 FUNC_0(VAR_2, VAR_3, VAR_2->scatter_n,
        0, VAR_0);

 VAR_2->removed_count += VAR_2->scatter_n;
 VAR_2->scatter_n = 0;
 VAR_2->scatter_len = 0;
 ++FUNC_1(VAR_2)->n_rx_nodesc_trunc;
}
