
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__* range; scalar_t__* offset; } ;
struct cxl_context {TYPE_1__ irqs; struct cxl_afu* afu; } ;
struct cxl_afu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxl_afu*,int ,int) ;

void FUNC_1(struct cxl_context *VAR_2)
{
 struct cxl_afu *VAR_3 = VAR_2->afu;

 FUNC_0(VAR_3, VAR_1,
         (((u64)VAR_2->irqs.offset[0] & 0xffff) << 48) |
         (((u64)VAR_2->irqs.offset[1] & 0xffff) << 32) |
         (((u64)VAR_2->irqs.offset[2] & 0xffff) << 16) |
   ((u64)VAR_2->irqs.offset[3] & 0xffff));
 FUNC_0(VAR_3, VAR_0, (u64)
         (((u64)VAR_2->irqs.range[0] & 0xffff) << 48) |
         (((u64)VAR_2->irqs.range[1] & 0xffff) << 32) |
         (((u64)VAR_2->irqs.range[2] & 0xffff) << 16) |
   ((u64)VAR_2->irqs.range[3] & 0xffff));
}
