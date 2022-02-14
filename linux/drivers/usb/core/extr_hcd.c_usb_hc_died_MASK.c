
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int root_hub; int controller; } ;
struct usb_hcd {TYPE_2__* primary_hcd; int died_work; TYPE_1__ self; int flags; scalar_t__ rh_registered; struct usb_hcd* shared_hcd; } ;
struct TYPE_4__ {int died_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

void FUNC_9 (struct usb_hcd *VAR_5)
{
 unsigned long VAR_6;

 FUNC_1 (VAR_5->self.controller, "HC died; cleaning up\n");

 FUNC_4 (&VAR_4, VAR_6);
 FUNC_0(VAR_2, &VAR_5->flags);
 FUNC_3(VAR_0, &VAR_5->flags);
 if (VAR_5->rh_registered) {
  FUNC_0(VAR_1, &VAR_5->flags);


  FUNC_8 (VAR_5->self.root_hub,
    VAR_3);
  FUNC_7(VAR_5->self.root_hub);
 }
 if (FUNC_6(VAR_5) && VAR_5->shared_hcd) {
  VAR_5 = VAR_5->shared_hcd;
  FUNC_0(VAR_2, &VAR_5->flags);
  FUNC_3(VAR_0, &VAR_5->flags);
  if (VAR_5->rh_registered) {
   FUNC_0(VAR_1, &VAR_5->flags);


   FUNC_8(VAR_5->self.root_hub,
     VAR_3);
   FUNC_7(VAR_5->self.root_hub);
  }
 }


 if (FUNC_6(VAR_5))
  FUNC_2(&VAR_5->died_work);
 else
  FUNC_2(&VAR_5->primary_hcd->died_work);

 FUNC_5 (&VAR_4, VAR_6);

}
