
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver; } ;
struct usb_driver {TYPE_1__ drvwrap; int * probe; scalar_t__ no_dynamic_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct usb_driver *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->no_dynamic_id)
  goto exit;

 if (VAR_2->probe != ((void*)0)) {
  VAR_3 = FUNC_0(&VAR_2->drvwrap.driver,
        &VAR_0);
  if (VAR_3 == 0) {
   VAR_3 = FUNC_0(&VAR_2->drvwrap.driver,
     &VAR_1);
   if (VAR_3)
    FUNC_1(&VAR_2->drvwrap.driver,
      &VAR_0);
  }
 }
exit:
 return VAR_3;
}
