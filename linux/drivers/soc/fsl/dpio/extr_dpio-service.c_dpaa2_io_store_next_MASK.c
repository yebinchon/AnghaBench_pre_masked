
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_io_store {size_t idx; struct dpaa2_dq* vaddr; int swp; } ;
struct dpaa2_dq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dpaa2_dq*) ;
 scalar_t__ FUNC_1 (struct dpaa2_dq*) ;
 int FUNC_2 (struct dpaa2_dq*) ;
 int FUNC_3 (int ,struct dpaa2_dq*) ;

struct dpaa2_dq *FUNC_4(struct dpaa2_io_store *VAR_1, int *VAR_2)
{
 int VAR_3;
 struct dpaa2_dq *VAR_4 = &VAR_1->vaddr[VAR_1->idx];

 VAR_3 = FUNC_3(VAR_1->swp, VAR_4);
 if (!VAR_3) {
  *VAR_2 = 0;
  return ((void*)0);
 }

 VAR_1->idx++;

 if (FUNC_1(VAR_4)) {
  *VAR_2 = 1;
  VAR_1->idx = 0;





  if (!(FUNC_0(VAR_4) & VAR_0))
   VAR_4 = ((void*)0);
 } else {
  FUNC_2(&VAR_1->vaddr[VAR_1->idx]);
  *VAR_2 = 0;
 }

 return VAR_4;
}
