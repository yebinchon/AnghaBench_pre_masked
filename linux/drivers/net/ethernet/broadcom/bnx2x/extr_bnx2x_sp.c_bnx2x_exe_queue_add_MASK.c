
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_exeq_elem {int link; } ;
struct bnx2x_exe_queue_obj {int (* optimize ) (struct bnx2x*,int ,struct bnx2x_exeq_elem*) ;int (* validate ) (struct bnx2x*,int ,struct bnx2x_exeq_elem*) ;int lock; int exe_queue; int owner; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_exeq_elem*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bnx2x*,int ,struct bnx2x_exeq_elem*) ;
 int FUNC_6 (struct bnx2x*,int ,struct bnx2x_exeq_elem*) ;

__attribute__((used)) static inline int FUNC_7(struct bnx2x *VAR_1,
          struct bnx2x_exe_queue_obj *VAR_2,
          struct bnx2x_exeq_elem *VAR_3,
          bool VAR_4)
{
 int VAR_5;

 FUNC_3(&VAR_2->lock);

 if (!VAR_4) {

  VAR_5 = VAR_2->optimize(VAR_1, VAR_2->owner, VAR_3);
  if (VAR_5)
   goto free_and_exit;


  VAR_5 = VAR_2->validate(VAR_1, VAR_2->owner, VAR_3);
  if (VAR_5) {
   FUNC_0(VAR_0, "Preamble failed: %d\n", VAR_5);
   goto free_and_exit;
  }
 }


 FUNC_2(&VAR_3->link, &VAR_2->exe_queue);

 FUNC_4(&VAR_2->lock);

 return 0;

free_and_exit:
 FUNC_1(VAR_1, VAR_3);

 FUNC_4(&VAR_2->lock);

 return VAR_5;
}
