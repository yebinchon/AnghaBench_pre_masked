
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usdhi6_host {int chan_tx; int chan_rx; TYPE_2__* mrq; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct usdhi6_host *VAR_1)
{
 if (VAR_1->mrq->data->flags & VAR_0)
  FUNC_0(VAR_1->chan_rx);
 else
  FUNC_0(VAR_1->chan_tx);
}
