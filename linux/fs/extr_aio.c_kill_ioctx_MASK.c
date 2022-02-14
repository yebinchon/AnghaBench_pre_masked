
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int ioctx_lock; int ioctx_table; } ;
struct kioctx_table {int * table; } ;
struct kioctx {size_t id; int users; struct ctx_rq_wait* rq_wait; scalar_t__ mmap_size; int mmap_base; int max_reqs; int wait; int dead; } ;
struct ctx_rq_wait {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 struct kioctx* FUNC_5 (int ) ;
 struct kioctx_table* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct mm_struct *VAR_1, struct kioctx *VAR_2,
        struct ctx_rq_wait *VAR_3)
{
 struct kioctx_table *VAR_4;

 FUNC_7(&VAR_1->ioctx_lock);
 if (FUNC_3(&VAR_2->dead, 1)) {
  FUNC_8(&VAR_1->ioctx_lock);
  return -VAR_0;
 }

 VAR_4 = FUNC_6(VAR_1->ioctx_table);
 FUNC_1(VAR_2 != FUNC_5(VAR_4->table[VAR_2->id]));
 FUNC_0(VAR_4->table[VAR_2->id], ((void*)0));
 FUNC_8(&VAR_1->ioctx_lock);


 FUNC_10(&VAR_2->wait);
 FUNC_2(VAR_2->max_reqs);

 if (VAR_2->mmap_size)
  FUNC_9(VAR_2->mmap_base, VAR_2->mmap_size);

 VAR_2->rq_wait = VAR_3;
 FUNC_4(&VAR_2->users);
 return 0;
}
