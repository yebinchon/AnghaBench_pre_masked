
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_hcd {int lock; int rh_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct fotg210_hcd*) ;
 int FUNC_1 (struct fotg210_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct fotg210_hcd *VAR_1)
{
 FUNC_0(VAR_1);

 FUNC_2(&VAR_1->lock);
 VAR_1->rh_state = VAR_0;
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->lock);
}
