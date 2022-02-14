
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hl_eq {scalar_t__ ci; scalar_t__ kernel_address; struct hl_device* hdev; int bus_address; } ;
struct hl_device {TYPE_1__* asic_funcs; } ;
struct TYPE_2__ {void* (* cpu_accessible_dma_pool_alloc ) (struct hl_device*,scalar_t__,int *) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (struct hl_device*,scalar_t__,int *) ;

int FUNC_2(struct hl_device *VAR_3, struct hl_eq *VAR_4)
{
 void *VAR_5;

 FUNC_0(VAR_1 > VAR_2);

 VAR_5 = VAR_3->asic_funcs->cpu_accessible_dma_pool_alloc(VAR_3,
       VAR_1,
       &VAR_4->bus_address);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->hdev = VAR_3;
 VAR_4->kernel_address = (u64) (uintptr_t) VAR_5;
 VAR_4->ci = 0;

 return 0;
}
