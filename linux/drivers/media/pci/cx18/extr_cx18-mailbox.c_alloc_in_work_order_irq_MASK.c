
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18_in_work_order {int pending; } ;
struct cx18 {struct cx18_in_work_order* in_work_order; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline
struct cx18_in_work_order *FUNC_2(struct cx18 *VAR_1)
{
 int VAR_2;
 struct cx18_in_work_order *VAR_3 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (FUNC_0(&VAR_1->in_work_order[VAR_2].pending) == 0) {
   VAR_3 = &VAR_1->in_work_order[VAR_2];
   FUNC_1(&VAR_3->pending, 1);
   break;
  }
 }
 return VAR_3;
}
