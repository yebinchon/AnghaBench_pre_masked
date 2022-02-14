
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qe_udc {scalar_t__ ep0_dir; int ep0_state; int * eps; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct qe_udc *VAR_1)
{
 FUNC_1(&VAR_1->eps[0], 1);
 FUNC_0(&VAR_1->eps[0], 1);
 VAR_1->ep0_state = VAR_0;
 VAR_1->ep0_dir = 0;
 return 0;
}
