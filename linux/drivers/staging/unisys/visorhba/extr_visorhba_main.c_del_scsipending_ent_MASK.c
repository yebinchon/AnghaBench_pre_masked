
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct visorhba_devdata {int privlock; TYPE_1__* pending; } ;
struct TYPE_2__ {int * sent; scalar_t__ cmdtype; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void *FUNC_2(struct visorhba_devdata *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 void *VAR_4;

 if (VAR_2 >= VAR_0)
  return ((void*)0);

 FUNC_0(&VAR_1->privlock, VAR_3);
 VAR_4 = VAR_1->pending[VAR_2].sent;
 VAR_1->pending[VAR_2].cmdtype = 0;
 VAR_1->pending[VAR_2].sent = ((void*)0);
 FUNC_1(&VAR_1->privlock, VAR_3);

 return VAR_4;
}
