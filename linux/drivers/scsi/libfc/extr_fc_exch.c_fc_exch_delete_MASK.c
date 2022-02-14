
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct fc_exch_pool {scalar_t__ total_exches; int lock; void* next_index; void* right; void* left; } ;
struct fc_exch {int xid; int state; int ex_list; TYPE_1__* em; struct fc_exch_pool* pool; } ;
struct TYPE_2__ {int min_xid; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct fc_exch_pool*,void*,int *) ;
 int FUNC_2 (struct fc_exch*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fc_exch *VAR_4)
{
 struct fc_exch_pool *VAR_5;
 u16 VAR_6;

 VAR_5 = VAR_4->pool;
 FUNC_4(&VAR_5->lock);
 FUNC_0(VAR_5->total_exches <= 0);
 VAR_5->total_exches--;


 VAR_6 = (VAR_4->xid - VAR_4->em->min_xid) >> VAR_2;
 if (!(VAR_4->state & VAR_0)) {
  if (VAR_5->left == VAR_1)
   VAR_5->left = VAR_6;
  else if (VAR_5->right == VAR_1)
   VAR_5->right = VAR_6;
  else
   VAR_5->next_index = VAR_6;
  FUNC_1(VAR_5, VAR_6, ((void*)0));
 } else {
  FUNC_1(VAR_5, VAR_6, &VAR_3);
 }
 FUNC_3(&VAR_4->ex_list);
 FUNC_5(&VAR_5->lock);
 FUNC_2(VAR_4);
}
