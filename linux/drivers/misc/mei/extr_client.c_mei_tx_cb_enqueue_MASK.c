
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_cl_cb {TYPE_1__* cl; int list; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int tx_cb_queued; } ;


 int FUNC_0 (int *,struct list_head*) ;

__attribute__((used)) static inline void FUNC_1(struct mei_cl_cb *VAR_0,
         struct list_head *VAR_1)
{
 FUNC_0(&VAR_0->list, VAR_1);
 VAR_0->cl->tx_cb_queued++;
}
