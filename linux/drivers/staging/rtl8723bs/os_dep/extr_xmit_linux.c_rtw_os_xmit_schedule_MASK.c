
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue; } ;
struct TYPE_4__ {int xmit_comp; TYPE_1__ pending_xmitbuf_queue; } ;
struct adapter {TYPE_2__ xmitpriv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct adapter *VAR_0)
{
 struct adapter *VAR_1 = VAR_0;

 if (!VAR_0)
  return;

 if (!FUNC_1(&VAR_0->xmitpriv.pending_xmitbuf_queue.queue))
  FUNC_0(&VAR_1->xmitpriv.xmit_comp);
}
