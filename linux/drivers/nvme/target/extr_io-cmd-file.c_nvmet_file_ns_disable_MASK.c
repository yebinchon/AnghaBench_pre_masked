
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_ns {int * file; int * bvec_cache; int * bvec_pool; scalar_t__ buffered_io; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct nvmet_ns *VAR_1)
{
 if (VAR_1->file) {
  if (VAR_1->buffered_io)
   FUNC_0(VAR_0);
  FUNC_3(VAR_1->bvec_pool);
  VAR_1->bvec_pool = ((void*)0);
  FUNC_2(VAR_1->bvec_cache);
  VAR_1->bvec_cache = ((void*)0);
  FUNC_1(VAR_1->file);
  VAR_1->file = ((void*)0);
 }
}
