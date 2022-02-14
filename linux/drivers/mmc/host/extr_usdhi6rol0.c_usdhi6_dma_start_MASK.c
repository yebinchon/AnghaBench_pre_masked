
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usdhi6_host*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct usdhi6_host *VAR_4)
{
 if (!VAR_4->chan_rx || !VAR_4->chan_tx)
  return -VAR_2;

 if (VAR_4->mrq->data->flags & VAR_3)
  return FUNC_0(VAR_4, VAR_4->chan_rx, VAR_0);

 return FUNC_0(VAR_4, VAR_4->chan_tx, VAR_1);
}
