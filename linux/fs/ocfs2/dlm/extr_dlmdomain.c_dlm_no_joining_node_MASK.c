
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {scalar_t__ joining_node; int spinlock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct dlm_ctxt *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->spinlock);
 VAR_2 = VAR_1->joining_node == VAR_0;
 FUNC_1(&VAR_1->spinlock);

 return VAR_2;
}
