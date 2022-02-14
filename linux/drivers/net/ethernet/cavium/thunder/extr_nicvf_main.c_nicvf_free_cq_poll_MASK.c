
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nicvf_cq_poll {int dummy; } ;
struct nicvf {struct nicvf_cq_poll** napi; TYPE_1__* qs; } ;
struct TYPE_2__ {int cq_cnt; } ;


 int FUNC_0 (struct nicvf_cq_poll*) ;

__attribute__((used)) static inline void FUNC_1(struct nicvf *VAR_0)
{
 struct nicvf_cq_poll *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->qs->cq_cnt; VAR_2++) {
  VAR_1 = VAR_0->napi[VAR_2];
  if (!VAR_1)
   continue;
  VAR_0->napi[VAR_2] = ((void*)0);
  FUNC_0(VAR_1);
 }
}
