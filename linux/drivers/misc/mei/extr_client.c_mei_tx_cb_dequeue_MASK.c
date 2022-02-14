
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_cl_cb {TYPE_1__* cl; } ;
struct TYPE_2__ {scalar_t__ tx_cb_queued; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mei_cl_cb*) ;

__attribute__((used)) static inline void FUNC_2(struct mei_cl_cb *VAR_0)
{
 if (!FUNC_0(VAR_0->cl->tx_cb_queued == 0))
  VAR_0->cl->tx_cb_queued--;

 FUNC_1(VAR_0);
}
