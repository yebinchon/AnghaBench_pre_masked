
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucan_urb_context {int allocated; } ;
struct ucan_priv {int context_lock; int available_tx_urbs; int netdev; int context_array; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct ucan_priv *VAR_0,
     struct ucan_urb_context *VAR_1)
{
 unsigned long VAR_2;
 bool VAR_3 = 0;

 if (FUNC_0(!VAR_0->context_array))
  return 0;


 FUNC_2(&VAR_0->context_lock, VAR_2);


 if (VAR_1->allocated) {
  VAR_1->allocated = 0;


  if (!VAR_0->available_tx_urbs)
   FUNC_1(VAR_0->netdev);
  VAR_0->available_tx_urbs++;

  VAR_3 = 1;
 }

 FUNC_3(&VAR_0->context_lock, VAR_2);
 return VAR_3;
}
