
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cardstate {TYPE_1__* ops; int ignoreframes; int lock; } ;
struct TYPE_4__ {int cid; scalar_t__ timer_expires; scalar_t__ timer_active; scalar_t__ ConState; } ;
struct bc_state {struct sk_buff* rx_skb; int ignore; scalar_t__ chstate; int rx_fcs; scalar_t__ emptycount; scalar_t__ inputstate; TYPE_2__ at_state; int squeue; struct cardstate* cs; } ;
struct TYPE_3__ {int (* reinitbcshw ) (struct bc_state*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct bc_state*) ;

void FUNC_6(struct bc_state *VAR_1)
{
 struct sk_buff *VAR_2;
 struct cardstate *VAR_3 = VAR_1->cs;
 unsigned long VAR_4;

 while ((VAR_2 = FUNC_2(&VAR_1->squeue)) != ((void*)0))
  FUNC_1(VAR_2);

 FUNC_3(&VAR_3->lock, VAR_4);
 FUNC_0(&VAR_1->at_state);
 VAR_1->at_state.ConState = 0;
 VAR_1->at_state.timer_active = 0;
 VAR_1->at_state.timer_expires = 0;
 VAR_1->at_state.cid = -1;
 FUNC_4(&VAR_3->lock, VAR_4);

 VAR_1->inputstate = 0;





 VAR_1->rx_fcs = VAR_0;
 VAR_1->chstate = 0;

 VAR_1->ignore = VAR_3->ignoreframes;
 FUNC_1(VAR_1->rx_skb);
 VAR_1->rx_skb = ((void*)0);

 VAR_3->ops->reinitbcshw(VAR_1);
}
