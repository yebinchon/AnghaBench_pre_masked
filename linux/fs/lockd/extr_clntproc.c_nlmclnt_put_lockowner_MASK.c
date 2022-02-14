
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlm_lockowner {TYPE_1__* host; int list; int count; } ;
struct TYPE_2__ {int h_lock; } ;


 int FUNC_0 (struct nlm_lockowner*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct nlm_lockowner *VAR_0)
{
 if (!FUNC_3(&VAR_0->count, &VAR_0->host->h_lock))
  return;
 FUNC_1(&VAR_0->list);
 FUNC_4(&VAR_0->host->h_lock);
 FUNC_2(VAR_0->host);
 FUNC_0(VAR_0);
}
