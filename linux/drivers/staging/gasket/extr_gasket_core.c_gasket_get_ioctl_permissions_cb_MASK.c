
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gasket_dev {TYPE_2__* internal_desc; } ;
typedef int gasket_ioctl_permissions_cb_t ;
struct TYPE_4__ {TYPE_1__* driver_desc; } ;
struct TYPE_3__ {int ioctl_permissions_cb; } ;



gasket_ioctl_permissions_cb_t
FUNC_0(struct gasket_dev *VAR_0)
{
 return VAR_0->internal_desc->driver_desc->ioctl_permissions_cb;
}
