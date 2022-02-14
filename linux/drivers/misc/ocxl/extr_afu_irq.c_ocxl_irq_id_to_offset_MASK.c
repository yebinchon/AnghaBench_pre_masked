
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocxl_context {TYPE_1__* afu; } ;
struct TYPE_2__ {scalar_t__ irq_base_offset; } ;


 int VAR_0 ;

u64 FUNC_0(struct ocxl_context *VAR_1, int VAR_2)
{
 return VAR_1->afu->irq_base_offset + (VAR_2 << VAR_0);
}
