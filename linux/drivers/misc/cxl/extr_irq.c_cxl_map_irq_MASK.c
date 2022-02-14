
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl {int dev; } ;
typedef int irq_hw_number_t ;
typedef int irq_handler_t ;
struct TYPE_2__ {int (* setup_irq ) (struct cxl*,int ,unsigned int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 unsigned int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int ,unsigned int) ;
 int FUNC_3 (unsigned int,int ,int ,char const*,void*) ;
 int FUNC_4 (struct cxl*,int ,unsigned int) ;

unsigned int FUNC_5(struct cxl *VAR_1, irq_hw_number_t VAR_2,
    irq_handler_t VAR_3, void *VAR_4, const char *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;


 VAR_6 = FUNC_1(((void*)0), VAR_2);
 if (!VAR_6) {
  FUNC_0(&VAR_1->dev, "cxl_map_irq: irq_create_mapping failed\n");
  return 0;
 }

 if (VAR_0->setup_irq)
  VAR_0->setup_irq(VAR_1, VAR_2, VAR_6);

 FUNC_2("hwirq %#lx mapped to virq %u\n", VAR_2, VAR_6);

 VAR_7 = FUNC_3(VAR_6, VAR_3, 0, VAR_5, VAR_4);
 if (VAR_7) {
  FUNC_0(&VAR_1->dev, "cxl_map_irq: request_irq failed: %i\n", VAR_7);
  return 0;
 }

 return VAR_6;
}
