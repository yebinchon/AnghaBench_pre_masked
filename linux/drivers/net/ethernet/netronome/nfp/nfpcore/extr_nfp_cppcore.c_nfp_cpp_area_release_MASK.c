
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_cpp_area {int mutex; TYPE_2__* cpp; int refcount; } ;
struct TYPE_4__ {int waitq; TYPE_1__* op; } ;
struct TYPE_3__ {int (* area_release ) (struct nfp_cpp_area*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfp_cpp_area*) ;
 int FUNC_4 (struct nfp_cpp_area*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct nfp_cpp_area *VAR_0)
{
 FUNC_1(&VAR_0->mutex);

 if (FUNC_0(&VAR_0->refcount)) {
  if (VAR_0->cpp->op->area_release) {
   VAR_0->cpp->op->area_release(VAR_0);

   FUNC_5(&VAR_0->cpp->waitq);
  }
 }
 FUNC_2(&VAR_0->mutex);

 FUNC_3(VAR_0);
}
