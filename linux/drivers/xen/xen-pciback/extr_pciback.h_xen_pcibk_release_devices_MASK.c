
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {int dummy; } ;
struct TYPE_2__ {void (* free ) (struct xen_pcibk_device*) ;} ;


 void FUNC_0 (struct xen_pcibk_device*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct xen_pcibk_device *VAR_1)
{
 if (VAR_0 && VAR_0->free)
  return VAR_0->free(VAR_1);
}
