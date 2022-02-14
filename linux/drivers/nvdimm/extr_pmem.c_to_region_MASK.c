
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmem_device {int dummy; } ;
struct nd_region {int dummy; } ;
struct TYPE_2__ {int parent; } ;


 TYPE_1__* FUNC_0 (struct pmem_device*) ;
 struct nd_region* FUNC_1 (int ) ;

__attribute__((used)) static struct nd_region *FUNC_2(struct pmem_device *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0)->parent);
}
