
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucan_urb_context {int allocated; } ;
struct TYPE_2__ {int tx_fifo; } ;
struct ucan_priv {int context_lock; int netdev; int available_tx_urbs; struct ucan_urb_context* context_array; TYPE_1__ device_info; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct ucan_urb_context *FUNC_4(struct ucan_priv *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;
 struct ucan_urb_context *VAR_3 = ((void*)0);

 if (FUNC_0(!VAR_0->context_array))
  return ((void*)0);


 FUNC_2(&VAR_0->context_lock, VAR_2);

 for (VAR_1 = 0; VAR_1 < VAR_0->device_info.tx_fifo; VAR_1++) {
  if (!VAR_0->context_array[VAR_1].allocated) {

   VAR_3 = &VAR_0->context_array[VAR_1];
   VAR_0->context_array[VAR_1].allocated = 1;


   VAR_0->available_tx_urbs--;
   if (!VAR_0->available_tx_urbs)
    FUNC_1(VAR_0->netdev);

   break;
  }
 }

 FUNC_3(&VAR_0->context_lock, VAR_2);
 return VAR_3;
}
