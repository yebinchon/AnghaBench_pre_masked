
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_ioctl_start_work {int flags; scalar_t__ num_interrupts; int work_element_descriptor; } ;
struct cxl_context {TYPE_1__* afu; } ;
struct TYPE_2__ {scalar_t__ pp_irqs; scalar_t__ irqs_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxl_context*,scalar_t__) ;
 int FUNC_1 (struct cxl_context*,struct cxl_context*) ;
 int VAR_2 ;
 int FUNC_2 (struct cxl_context*,int ,int ) ;

int FUNC_3(struct cxl_context *VAR_3,
     struct cxl_ioctl_start_work *VAR_4)
{
 int VAR_5;


 if (!(VAR_4->flags & VAR_0))
  VAR_4->num_interrupts = VAR_3->afu->pp_irqs;
 else if ((VAR_4->num_interrupts < VAR_3->afu->pp_irqs) ||
   (VAR_4->num_interrupts > VAR_3->afu->irqs_max)) {
  return -VAR_1;
 }

 VAR_5 = FUNC_0(VAR_3, VAR_4->num_interrupts);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_4->work_element_descriptor, VAR_2);
 if (VAR_5 < 0) {
  FUNC_1(VAR_3, VAR_3);
  return VAR_5;
 }

 return 0;
}
