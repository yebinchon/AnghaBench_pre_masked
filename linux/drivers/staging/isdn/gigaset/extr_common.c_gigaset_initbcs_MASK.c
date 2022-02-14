
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {TYPE_1__* ops; int ignoreframes; } ;
struct bc_state {int channel; int use_count; scalar_t__ apconnstate; int * ap; int aplock; int ** commands; int ignore; scalar_t__ busy; scalar_t__ chstate; struct cardstate* cs; scalar_t__ inputstate; int rx_fcs; int * rx_skb; scalar_t__ rx_bufsize; scalar_t__ emptycount; int at_state; scalar_t__ trans_up; scalar_t__ trans_down; scalar_t__ corrupted; int squeue; int * tx_skb; } ;
struct TYPE_2__ {int (* initbcshw ) (struct bc_state*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,struct bc_state*,struct cardstate*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bc_state*) ;

__attribute__((used)) static int FUNC_5(struct bc_state *VAR_3, struct cardstate *VAR_4,
      int VAR_5)
{
 int VAR_6;

 VAR_3->tx_skb = ((void*)0);

 FUNC_2(&VAR_3->squeue);

 VAR_3->corrupted = 0;
 VAR_3->trans_down = 0;
 VAR_3->trans_up = 0;

 FUNC_0(VAR_1, "setting up bcs[%d]->at_state", VAR_5);
 FUNC_1(&VAR_3->at_state, VAR_3, VAR_4, -1);





 VAR_3->rx_bufsize = 0;
 VAR_3->rx_skb = ((void*)0);
 VAR_3->rx_fcs = VAR_2;
 VAR_3->inputstate = 0;
 VAR_3->channel = VAR_5;
 VAR_3->cs = VAR_4;

 VAR_3->chstate = 0;
 VAR_3->use_count = 1;
 VAR_3->busy = 0;
 VAR_3->ignore = VAR_4->ignoreframes;

 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
  VAR_3->commands[VAR_6] = ((void*)0);

 FUNC_3(&VAR_3->aplock);
 VAR_3->ap = ((void*)0);
 VAR_3->apconnstate = 0;

 FUNC_0(VAR_1, "  setting up bcs[%d]->hw", VAR_5);
 return VAR_4->ops->initbcshw(VAR_3);
}
