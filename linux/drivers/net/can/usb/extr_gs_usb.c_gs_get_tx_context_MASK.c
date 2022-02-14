
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_tx_context {unsigned int echo_id; } ;
struct gs_can {int tx_ctx_lock; struct gs_tx_context* tx_context; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct gs_tx_context *FUNC_2(struct gs_can *VAR_1,
            unsigned int VAR_2)
{
 unsigned long VAR_3;

 if (VAR_2 < VAR_0) {
  FUNC_0(&VAR_1->tx_ctx_lock, VAR_3);
  if (VAR_1->tx_context[VAR_2].echo_id == VAR_2) {
   FUNC_1(&VAR_1->tx_ctx_lock, VAR_3);
   return &VAR_1->tx_context[VAR_2];
  }
  FUNC_1(&VAR_1->tx_ctx_lock, VAR_3);
 }
 return ((void*)0);
}
