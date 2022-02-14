
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_prepared; } ;
struct TYPE_5__ {TYPE_1__ power; scalar_t__ driver; } ;
struct usb_interface {TYPE_2__ dev; scalar_t__ needs_binding; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_3(struct usb_interface *VAR_1)
{
 int VAR_2;


 if (VAR_1->dev.driver)
  FUNC_2(VAR_1);


 if (!VAR_1->dev.power.is_prepared) {
  VAR_1->needs_binding = 0;
  VAR_2 = FUNC_1(&VAR_1->dev);
  if (VAR_2 < 0 && VAR_2 != -VAR_0)
   FUNC_0(&VAR_1->dev, "rebind failed: %d\n", VAR_2);
 }
}
