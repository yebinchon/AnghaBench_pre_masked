
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppp_net {int all_channels_lock; } ;
struct ppp_channel {struct channel* ppp; } ;
struct TYPE_2__ {int dead; int refcnt; int rwait; } ;
struct channel {TYPE_1__ file; int list; int chan_net; int chan_sem; int downl; int * chan; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct channel*) ;
 int FUNC_3 (struct channel*) ;
 struct ppp_net* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void
FUNC_10(struct ppp_channel *VAR_0)
{
 struct channel *VAR_1 = VAR_0->ppp;
 struct ppp_net *VAR_2;

 if (!VAR_1)
  return;

 VAR_0->ppp = ((void*)0);





 FUNC_0(&VAR_1->chan_sem);
 FUNC_6(&VAR_1->downl);
 VAR_1->chan = ((void*)0);
 FUNC_7(&VAR_1->downl);
 FUNC_8(&VAR_1->chan_sem);
 FUNC_3(VAR_1);

 VAR_2 = FUNC_4(VAR_1->chan_net);
 FUNC_6(&VAR_2->all_channels_lock);
 FUNC_1(&VAR_1->list);
 FUNC_7(&VAR_2->all_channels_lock);

 VAR_1->file.dead = 1;
 FUNC_9(&VAR_1->file.rwait);
 if (FUNC_5(&VAR_1->file.refcnt))
  FUNC_2(VAR_1);
}
