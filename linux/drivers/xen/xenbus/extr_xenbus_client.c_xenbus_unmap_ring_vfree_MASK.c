
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_device {int dummy; } ;
struct TYPE_2__ {int (* unmap ) (struct xenbus_device*,void*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct xenbus_device*,void*) ;

int FUNC_1(struct xenbus_device *VAR_1, void *VAR_2)
{
 return VAR_0->unmap(VAR_1, VAR_2);
}
