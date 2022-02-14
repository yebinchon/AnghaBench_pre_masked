
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_set {int rbdr_cnt; int sq_cnt; int cq_cnt; int cq_len; int * cq; int sq_len; int * sq; int rbdr_len; int * rbdr; } ;
struct nicvf {struct queue_set* qs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nicvf*) ;
 scalar_t__ FUNC_1 (struct nicvf*,int *,int ) ;
 scalar_t__ FUNC_2 (struct nicvf*,int *,int ,int ) ;
 scalar_t__ FUNC_3 (struct nicvf*,int *,int ,int) ;

__attribute__((used)) static int FUNC_4(struct nicvf *VAR_2)
{
 int VAR_3;
 struct queue_set *VAR_4 = VAR_2->qs;


 for (VAR_3 = 0; VAR_3 < VAR_4->rbdr_cnt; VAR_3++) {
  if (FUNC_2(VAR_2, &VAR_4->rbdr[VAR_3], VAR_4->rbdr_len,
        VAR_0))
   goto alloc_fail;
 }


 for (VAR_3 = 0; VAR_3 < VAR_4->sq_cnt; VAR_3++) {
  if (FUNC_3(VAR_2, &VAR_4->sq[VAR_3], VAR_4->sq_len, VAR_3))
   goto alloc_fail;
 }


 for (VAR_3 = 0; VAR_3 < VAR_4->cq_cnt; VAR_3++) {
  if (FUNC_1(VAR_2, &VAR_4->cq[VAR_3], VAR_4->cq_len))
   goto alloc_fail;
 }

 return 0;
alloc_fail:
 FUNC_0(VAR_2);
 return -VAR_1;
}
