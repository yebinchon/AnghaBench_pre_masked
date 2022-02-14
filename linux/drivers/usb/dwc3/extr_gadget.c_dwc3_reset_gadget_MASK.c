
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ speed; } ;
struct dwc3 {int lock; int gadget_driver; TYPE_1__ gadget; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(struct dwc3 *VAR_1)
{
 if (!VAR_1->gadget_driver)
  return;

 if (VAR_1->gadget.speed != VAR_0) {
  FUNC_1(&VAR_1->lock);
  FUNC_2(&VAR_1->gadget, VAR_1->gadget_driver);
  FUNC_0(&VAR_1->lock);
 }
}
