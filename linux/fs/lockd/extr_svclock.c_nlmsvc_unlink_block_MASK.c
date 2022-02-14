
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nlm_block {TYPE_3__* b_call; } ;
struct TYPE_4__ {int fl; } ;
struct TYPE_5__ {TYPE_1__ lock; } ;
struct TYPE_6__ {TYPE_2__ a_args; } ;


 int FUNC_0 (char*,struct nlm_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nlm_block*) ;

__attribute__((used)) static int FUNC_3(struct nlm_block *VAR_0)
{
 int VAR_1;
 FUNC_0("lockd: unlinking block %p...\n", VAR_0);


 VAR_1 = FUNC_1(&VAR_0->b_call->a_args.lock.fl);
 FUNC_2(VAR_0);
 return VAR_1;
}
