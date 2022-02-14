
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nicvf {int dummy; } ;
struct TYPE_2__ {int base; } ;
struct cmp_queue {TYPE_1__ dmem; } ;


 int FUNC_0 (struct nicvf*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct nicvf *VAR_0, struct cmp_queue *VAR_1)
{
 if (!VAR_1)
  return;
 if (!VAR_1->dmem.base)
  return;

 FUNC_0(VAR_0, &VAR_1->dmem);
}
