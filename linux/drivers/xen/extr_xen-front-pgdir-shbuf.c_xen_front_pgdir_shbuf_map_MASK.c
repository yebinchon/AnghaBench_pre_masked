
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_front_pgdir_shbuf {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* map ) (struct xen_front_pgdir_shbuf*) ;} ;


 int FUNC_0 (struct xen_front_pgdir_shbuf*) ;

int FUNC_1(struct xen_front_pgdir_shbuf *VAR_0)
{
 if (VAR_0->ops && VAR_0->ops->map)
  return VAR_0->ops->map(VAR_0);


 return 0;
}
