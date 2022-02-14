
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cmdbuf_t {scalar_t__ wake_tasklet; struct cmdbuf_t* next; } ;
struct cardstate {TYPE_1__* bcs; int cmdlock; scalar_t__ curlen; scalar_t__ cmdbytes; int * lastcmdbuf; struct cmdbuf_t* cmdbuf; } ;
struct TYPE_2__ {int squeue; struct sk_buff* tx_skb; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct cmdbuf_t*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct cardstate *VAR_0)
{
 struct sk_buff *VAR_1;
 struct cmdbuf_t *VAR_2;
 unsigned long VAR_3;


 FUNC_3(&VAR_0->cmdlock, VAR_3);
 while ((VAR_2 = VAR_0->cmdbuf) != ((void*)0)) {
  VAR_0->cmdbuf = VAR_2->next;
  if (VAR_2->wake_tasklet)
   FUNC_5(VAR_2->wake_tasklet);
  FUNC_1(VAR_2);
 }
 VAR_0->cmdbuf = VAR_0->lastcmdbuf = ((void*)0);
 VAR_0->cmdbytes = VAR_0->curlen = 0;
 FUNC_4(&VAR_0->cmdlock, VAR_3);


 if (VAR_0->bcs->tx_skb)
  FUNC_0(VAR_0->bcs->tx_skb);
 while ((VAR_1 = FUNC_2(&VAR_0->bcs->squeue)) != ((void*)0))
  FUNC_0(VAR_1);
}
