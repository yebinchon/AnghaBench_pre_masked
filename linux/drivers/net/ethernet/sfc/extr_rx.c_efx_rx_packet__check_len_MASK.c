
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_rx_queue {struct efx_nic* efx; } ;
struct efx_rx_buffer {unsigned int len; int flags; } ;
struct efx_nic {int net_dev; TYPE_1__* type; } ;
struct TYPE_4__ {int n_rx_overlength; } ;
struct TYPE_3__ {unsigned int rx_buffer_padding; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct efx_rx_queue*) ;
 int FUNC_1 (struct efx_rx_queue*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*,int ,int,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct efx_rx_queue *VAR_2,
         struct efx_rx_buffer *VAR_3,
         int VAR_4)
{
 struct efx_nic *VAR_5 = VAR_2->efx;
 unsigned VAR_6 = VAR_3->len - VAR_5->type->rx_buffer_padding;

 if (FUNC_2(VAR_4 <= VAR_6))
  return;




 VAR_3->flags |= VAR_0;

 if (FUNC_3())
  FUNC_4(VAR_5, VAR_1, VAR_5->net_dev,
     "RX queue %d overlength RX event (%#x > %#x)\n",
     FUNC_1(VAR_2), VAR_4, VAR_6);

 FUNC_0(VAR_2)->n_rx_overlength++;
}
