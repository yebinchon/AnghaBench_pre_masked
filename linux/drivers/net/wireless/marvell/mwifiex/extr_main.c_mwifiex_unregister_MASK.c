
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cleanup_if ) (struct mwifiex_adapter*) ;} ;
struct mwifiex_adapter {size_t priv_num; size_t n_matches; struct mwifiex_adapter* regd; struct mwifiex_adapter* nd_info; struct mwifiex_adapter** matches; struct mwifiex_adapter** priv; int cmd_timer; TYPE_1__ if_ops; } ;
typedef size_t s32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_adapter*) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_adapter *VAR_0)
{
 s32 VAR_1;

 if (VAR_0->if_ops.cleanup_if)
  VAR_0->if_ops.cleanup_if(VAR_0);

 FUNC_0(&VAR_0->cmd_timer);


 for (VAR_1 = 0; VAR_1 < VAR_0->priv_num; VAR_1++) {
  if (VAR_0->priv[VAR_1]) {
   FUNC_2(VAR_0->priv[VAR_1]);
   FUNC_1(VAR_0->priv[VAR_1]);
  }
 }

 if (VAR_0->nd_info) {
  for (VAR_1 = 0 ; VAR_1 < VAR_0->nd_info->n_matches ; VAR_1++)
   FUNC_1(VAR_0->nd_info->matches[VAR_1]);
  FUNC_1(VAR_0->nd_info);
  VAR_0->nd_info = ((void*)0);
 }

 FUNC_1(VAR_0->regd);

 FUNC_1(VAR_0);
 return 0;
}
