
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_cpp_area {int mutex; int refcount; TYPE_2__* cpp; } ;
struct TYPE_4__ {TYPE_1__* op; } ;
struct TYPE_3__ {int (* area_acquire ) (struct nfp_cpp_area*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfp_cpp_area*) ;
 int FUNC_5 (struct nfp_cpp_area*) ;

int FUNC_6(struct nfp_cpp_area *VAR_0)
{
 FUNC_2(&VAR_0->mutex);
 if (FUNC_1(&VAR_0->refcount) == 1) {
  if (VAR_0->cpp->op->area_acquire) {
   int VAR_1;

   VAR_1 = VAR_0->cpp->op->area_acquire(VAR_0);
   if (VAR_1 < 0) {
    FUNC_0(&VAR_0->refcount);
    FUNC_3(&VAR_0->mutex);
    return VAR_1;
   }
  }
 }
 FUNC_3(&VAR_0->mutex);

 FUNC_4(VAR_0);
 return 0;
}
