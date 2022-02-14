
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_lif {int deferred; int state; } ;
struct ionic_deferred_work {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,struct ionic_deferred_work*) ;
 int FUNC_2 (struct ionic_lif*) ;
 struct ionic_deferred_work* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ionic_lif *VAR_3)
{
 struct ionic_deferred_work *VAR_4;


 if (FUNC_4(VAR_2, VAR_3->state))
  return;

 if (FUNC_0()) {
  VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
  if (!VAR_4)
   return;

  VAR_4->type = VAR_1;
  FUNC_1(&VAR_3->deferred, VAR_4);
 } else {
  FUNC_2(VAR_3);
 }
}
