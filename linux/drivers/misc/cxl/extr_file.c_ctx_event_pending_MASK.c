
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_context {int afu_driver_events; scalar_t__ afu_driver_ops; scalar_t__ pending_afu_err; scalar_t__ pending_fault; scalar_t__ pending_irq; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct cxl_context *VAR_0)
{
 if (VAR_0->pending_irq || VAR_0->pending_fault || VAR_0->pending_afu_err)
  return 1;

 if (VAR_0->afu_driver_ops && FUNC_0(&VAR_0->afu_driver_events))
  return 1;

 return 0;
}
