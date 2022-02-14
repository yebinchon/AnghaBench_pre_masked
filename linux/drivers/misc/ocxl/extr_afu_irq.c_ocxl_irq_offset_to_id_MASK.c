
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocxl_context {TYPE_1__* afu; } ;
struct TYPE_2__ {int irq_base_offset; } ;


 int VAR_0 ;

int FUNC_0(struct ocxl_context *VAR_1, u64 VAR_2)
{
 return (VAR_2 - VAR_1->afu->irq_base_offset) >> VAR_0;
}
