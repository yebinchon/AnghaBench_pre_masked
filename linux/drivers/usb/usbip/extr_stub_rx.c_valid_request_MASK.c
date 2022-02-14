
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ devid; } ;
struct usbip_header {TYPE_1__ base; } ;
struct usbip_device {scalar_t__ status; int lock; } ;
struct stub_device {scalar_t__ devid; struct usbip_device ud; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct stub_device *VAR_1, struct usbip_header *VAR_2)
{
 struct usbip_device *VAR_3 = &VAR_1->ud;
 int VAR_4 = 0;

 if (VAR_2->base.devid == VAR_1->devid) {
  FUNC_0(&VAR_3->lock);
  if (VAR_3->status == VAR_0) {

   VAR_4 = 1;
  }
  FUNC_1(&VAR_3->lock);
 }

 return VAR_4;
}
