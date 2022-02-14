
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rq; int xq; int dead; } ;
struct ppp {int dev; int xmit_recursion; int xmit_pending; int * active_filter; int * pass_filter; int mrq; TYPE_1__ file; int * vj; scalar_t__ n_channels; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,struct ppp*,int ,scalar_t__) ;
 int FUNC_6 (struct ppp*) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ppp *VAR_1)
{
 FUNC_0(&VAR_0);

 if (!VAR_1->file.dead || VAR_1->n_channels) {

  FUNC_5(VAR_1->dev, "ppp: destroying ppp struct %p "
      "but dead=%d n_channels=%d !\n",
      VAR_1, VAR_1->file.dead, VAR_1->n_channels);
  return;
 }

 FUNC_6(VAR_1);
 if (VAR_1->vj) {
  FUNC_8(VAR_1->vj);
  VAR_1->vj = ((void*)0);
 }
 FUNC_7(&VAR_1->file.xq);
 FUNC_7(&VAR_1->file.rq);
 FUNC_4(VAR_1->xmit_pending);
 FUNC_3(VAR_1->xmit_recursion);

 FUNC_2(VAR_1->dev);
}
