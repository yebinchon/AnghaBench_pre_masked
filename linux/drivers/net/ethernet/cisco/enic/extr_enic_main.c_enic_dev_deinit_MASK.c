
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {unsigned int rq_count; unsigned int wq_count; int * napi; int vdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct enic*) ;
 size_t FUNC_1 (struct enic*,unsigned int) ;
 int FUNC_2 (struct enic*) ;
 int FUNC_3 (struct enic*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct enic *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->rq_count; VAR_2++) {
  FUNC_4(&VAR_1->napi[VAR_2]);
  FUNC_5(&VAR_1->napi[VAR_2]);
 }
 if (FUNC_6(VAR_1->vdev) == VAR_0)
  for (VAR_2 = 0; VAR_2 < VAR_1->wq_count; VAR_2++)
   FUNC_5(&VAR_1->napi[FUNC_1(VAR_1, VAR_2)]);

 FUNC_3(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
}
