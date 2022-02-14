
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_fastpath {scalar_t__ sb_id; struct qedf_fastpath* sb_info; } ;
struct qedf_ctx {int num_queues; struct qedf_fastpath* fp_array; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qedf_fastpath*) ;
 int FUNC_1 (struct qedf_ctx*,struct qedf_fastpath*) ;

__attribute__((used)) static void FUNC_2(struct qedf_ctx *VAR_1)
{
 int VAR_2;
 struct qedf_fastpath *VAR_3 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_queues; VAR_2++) {
  VAR_3 = &(VAR_1->fp_array[VAR_2]);
  if (VAR_3->sb_id == VAR_0)
   break;
  FUNC_1(VAR_1, VAR_3->sb_info);
  FUNC_0(VAR_3->sb_info);
 }
 FUNC_0(VAR_1->fp_array);
}
