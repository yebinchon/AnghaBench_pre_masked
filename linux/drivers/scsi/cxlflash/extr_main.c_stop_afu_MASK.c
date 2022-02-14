
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwq {int irqpoll; } ;
struct cxlflash_cfg {TYPE_1__* ops; int work_q; struct afu* afu; } ;
struct afu {int num_hwqs; struct afu* afu_map; int cmds_active; } ;
struct TYPE_2__ {int (* psa_unmap ) (struct afu*) ;} ;


 scalar_t__ FUNC_0 (struct afu*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct cxlflash_cfg*) ;
 struct hwq* FUNC_5 (struct afu*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct afu*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct afu*) ;

__attribute__((used)) static void FUNC_10(struct cxlflash_cfg *VAR_0)
{
 struct afu *VAR_1 = VAR_0->afu;
 struct hwq *VAR_2;
 int VAR_3;

 FUNC_2(&VAR_0->work_q);
 if (!FUNC_3())
  FUNC_4(VAR_0);

 if (FUNC_7(VAR_1)) {
  while (FUNC_1(&VAR_1->cmds_active))
   FUNC_8(1);

  if (FUNC_0(VAR_1)) {
   for (VAR_3 = 0; VAR_3 < VAR_1->num_hwqs; VAR_3++) {
    VAR_2 = FUNC_5(VAR_1, VAR_3);

    FUNC_6(&VAR_2->irqpoll);
   }
  }

  if (FUNC_7(VAR_1->afu_map)) {
   VAR_0->ops->psa_unmap(VAR_1->afu_map);
   VAR_1->afu_map = ((void*)0);
  }
 }
}
