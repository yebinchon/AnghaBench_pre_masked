
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gasket_driver_desc {int dummy; } ;
struct gasket_dev {TYPE_1__* internal_desc; } ;
struct TYPE_2__ {struct gasket_driver_desc const* driver_desc; } ;



const struct gasket_driver_desc *FUNC_0(struct gasket_dev *VAR_0)
{
 return VAR_0->internal_desc->driver_desc;
}
