
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct TYPE_4__ {scalar_t__ vid; scalar_t__ pid; int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_3(struct usb_device *VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_3->descriptor.idVendor);
 u16 VAR_5 = FUNC_0(VAR_3->descriptor.idProduct);
 int VAR_6, VAR_7 = 0;

 FUNC_1(&VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_4 == VAR_1[VAR_6].vid && VAR_5 == VAR_1[VAR_6].pid) {
   VAR_7 = VAR_1[VAR_6].flags;
   break;
  }
 }

 FUNC_2(&VAR_2);

 return VAR_7;
}
