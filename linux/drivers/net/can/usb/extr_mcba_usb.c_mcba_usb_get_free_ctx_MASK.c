
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcba_usb_ctx {scalar_t__ ndx; int can; scalar_t__ dlc; } ;
struct mcba_priv {int netdev; int free_ctx_cnt; struct mcba_usb_ctx* tx_context; } ;
struct can_frame {scalar_t__ can_dlc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline struct mcba_usb_ctx *FUNC_3(struct mcba_priv *VAR_2,
        struct can_frame *VAR_3)
{
 int VAR_4 = 0;
 struct mcba_usb_ctx *VAR_5 = ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2->tx_context[VAR_4].ndx == VAR_0) {
   VAR_5 = &VAR_2->tx_context[VAR_4];
   VAR_5->ndx = VAR_4;

   if (VAR_3) {
    VAR_5->can = 1;
    VAR_5->dlc = VAR_3->can_dlc;
   } else {
    VAR_5->can = 0;
    VAR_5->dlc = 0;
   }

   FUNC_0(&VAR_2->free_ctx_cnt);
   break;
  }
 }

 if (!FUNC_1(&VAR_2->free_ctx_cnt))

  FUNC_2(VAR_2->netdev);

 return VAR_5;
}
