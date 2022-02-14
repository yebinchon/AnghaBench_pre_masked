
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_device {int dummy; } ;
typedef int grant_ref_t ;
struct TYPE_2__ {int (* map ) (struct xenbus_device*,int *,unsigned int,void**) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct xenbus_device*,int *,unsigned int,void**) ;

int FUNC_1(struct xenbus_device *VAR_1, grant_ref_t *VAR_2,
      unsigned int VAR_3, void **VAR_4)
{
 return VAR_0->map(VAR_1, VAR_2, VAR_3, VAR_4);
}
