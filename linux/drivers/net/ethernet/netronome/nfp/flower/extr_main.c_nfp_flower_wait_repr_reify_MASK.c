
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_flower_priv {int reify_wait_queue; } ;
struct nfp_app {int cpp; TYPE_1__* pf; struct nfp_flower_priv* priv; } ;
typedef int atomic_t ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct nfp_app *VAR_2, atomic_t *VAR_3, int VAR_4)
{
 struct nfp_flower_priv *VAR_5 = VAR_2->priv;

 if (!VAR_4)
  return 0;

 FUNC_1(&VAR_2->pf->lock);
 if (!FUNC_3(VAR_5->reify_wait_queue,
    FUNC_0(VAR_3) >= VAR_4,
    VAR_1)) {
  FUNC_2(VAR_2->cpp, "Not all reprs responded to reify\n");
  return -VAR_0;
 }

 return 0;
}
