
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct musb_hw_ep {int ep_out; scalar_t__ max_packet_sz_rx; int ep_in; scalar_t__ max_packet_sz_tx; scalar_t__ is_shared_fifo; } ;
struct TYPE_2__ {int ep_list; } ;
struct musb {scalar_t__ nr_endpoints; struct musb_hw_ep* endpoints; TYPE_1__ g; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct musb*,int *,scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_2(struct musb *VAR_0)
{
 u8 VAR_1;
 struct musb_hw_ep *VAR_2;
 unsigned VAR_3 = 0;


 FUNC_0(&(VAR_0->g.ep_list));

 for (VAR_1 = 0, VAR_2 = VAR_0->endpoints;
   VAR_1 < VAR_0->nr_endpoints;
   VAR_1++, VAR_2++) {
  if (VAR_2->is_shared_fifo ) {
   FUNC_1(VAR_0, &VAR_2->ep_in, VAR_1, 0);
   VAR_3++;
  } else {
   if (VAR_2->max_packet_sz_tx) {
    FUNC_1(VAR_0, &VAR_2->ep_in,
       VAR_1, 1);
    VAR_3++;
   }
   if (VAR_2->max_packet_sz_rx) {
    FUNC_1(VAR_0, &VAR_2->ep_out,
       VAR_1, 0);
    VAR_3++;
   }
  }
 }
}
