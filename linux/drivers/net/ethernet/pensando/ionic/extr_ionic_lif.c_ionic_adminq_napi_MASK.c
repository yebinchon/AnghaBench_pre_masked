
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct napi_struct {int dummy; } ;
struct ionic_lif {TYPE_1__* notifyqcq; } ;
struct TYPE_4__ {struct ionic_lif* lif; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct napi_struct*,int,int ,int *,int *) ;
 int FUNC_1 (struct ionic_lif*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 TYPE_2__* FUNC_4 (struct napi_struct*) ;

__attribute__((used)) static int FUNC_5(struct napi_struct *VAR_2, int VAR_3)
{
 struct ionic_lif *VAR_4 = FUNC_4(VAR_2)->lif;
 int VAR_5 = 0;
 int VAR_6 = 0;

 if (FUNC_2(VAR_4->notifyqcq && VAR_4->notifyqcq->flags & VAR_0))
  VAR_5 = FUNC_1(VAR_4, VAR_3);
 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_1, ((void*)0), ((void*)0));

 return FUNC_3(VAR_5, VAR_6);
}
