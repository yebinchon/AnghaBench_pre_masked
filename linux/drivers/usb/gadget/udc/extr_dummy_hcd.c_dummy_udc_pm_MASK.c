
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_hcd {int dummy; } ;
struct dummy {int udc_suspended; int lock; } ;


 int FUNC_0 (struct dummy_hcd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dummy *VAR_0, struct dummy_hcd *VAR_1,
  int VAR_2)
{
 FUNC_1(&VAR_0->lock);
 VAR_0->udc_suspended = VAR_2;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_0->lock);
}
