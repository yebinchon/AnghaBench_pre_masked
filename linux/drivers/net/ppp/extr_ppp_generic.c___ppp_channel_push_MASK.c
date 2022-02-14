
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ppp {int dummy; } ;
struct TYPE_5__ {int xq; } ;
struct channel {struct ppp* ppp; TYPE_2__ file; int downl; TYPE_3__* chan; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* start_xmit ) (TYPE_3__*,struct sk_buff*) ;} ;


 int FUNC_0 (struct ppp*,int *) ;
 struct sk_buff* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct channel *VAR_0)
{
 struct sk_buff *VAR_1;
 struct ppp *VAR_2;

 FUNC_5(&VAR_0->downl);
 if (VAR_0->chan) {
  while (!FUNC_2(&VAR_0->file.xq)) {
   VAR_1 = FUNC_1(&VAR_0->file.xq);
   if (!VAR_0->chan->ops->start_xmit(VAR_0->chan, VAR_1)) {

    FUNC_3(&VAR_0->file.xq, VAR_1);
    break;
   }
  }
 } else {

  FUNC_4(&VAR_0->file.xq);
 }
 FUNC_6(&VAR_0->downl);

 if (FUNC_2(&VAR_0->file.xq)) {
  VAR_2 = VAR_0->ppp;
  if (VAR_2)
   FUNC_0(VAR_2, ((void*)0));
 }
}
