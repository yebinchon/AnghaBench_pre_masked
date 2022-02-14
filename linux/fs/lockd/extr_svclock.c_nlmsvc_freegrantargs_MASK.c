
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_5__ {int fl; TYPE_1__ oh; } ;
struct TYPE_6__ {TYPE_2__ lock; } ;
struct nlm_rqst {scalar_t__ a_owner; TYPE_3__ a_args; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nlm_rqst *VAR_0)
{
 if (VAR_0->a_args.lock.oh.data != VAR_0->a_owner)
  FUNC_0(VAR_0->a_args.lock.oh.data);

 FUNC_1(&VAR_0->a_args.lock.fl);
}
