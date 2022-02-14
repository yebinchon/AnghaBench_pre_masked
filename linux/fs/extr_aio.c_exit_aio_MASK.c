
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int ioctx_table; } ;
struct kioctx_table {int nr; int * table; } ;
struct kioctx {scalar_t__ mmap_size; } ;
struct ctx_rq_wait {int comp; int count; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kioctx_table*) ;
 int FUNC_5 (struct mm_struct*,struct kioctx*,struct ctx_rq_wait*) ;
 struct kioctx* FUNC_6 (int ,int) ;
 struct kioctx_table* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct mm_struct *VAR_0)
{
 struct kioctx_table *VAR_1 = FUNC_7(VAR_0->ioctx_table);
 struct ctx_rq_wait VAR_2;
 int VAR_3, VAR_4;

 if (!VAR_1)
  return;

 FUNC_1(&VAR_2.count, VAR_1->nr);
 FUNC_3(&VAR_2.comp);

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->nr; ++VAR_3) {
  struct kioctx *VAR_5 =
   FUNC_6(VAR_1->table[VAR_3], 1);

  if (!VAR_5) {
   VAR_4++;
   continue;
  }
  VAR_5->mmap_size = 0;
  FUNC_5(VAR_0, VAR_5, &VAR_2);
 }

 if (!FUNC_2(VAR_4, &VAR_2.count)) {

  FUNC_8(&VAR_2.comp);
 }

 FUNC_0(VAR_0->ioctx_table, ((void*)0));
 FUNC_4(VAR_1);
}
