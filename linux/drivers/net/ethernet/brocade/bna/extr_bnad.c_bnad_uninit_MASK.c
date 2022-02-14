
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad {scalar_t__ bar0; int * work_q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct bnad *VAR_0)
{
 if (VAR_0->work_q) {
  FUNC_1(VAR_0->work_q);
  FUNC_0(VAR_0->work_q);
  VAR_0->work_q = ((void*)0);
 }

 if (VAR_0->bar0)
  FUNC_2(VAR_0->bar0);
}
