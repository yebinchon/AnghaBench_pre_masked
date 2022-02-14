
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_info {scalar_t__ type; unsigned int irq; unsigned int evtchn; unsigned short cpu; } ;
typedef enum xen_irq_type { ____Placeholder_xen_irq_type } xen_irq_type ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct irq_info*) ;

__attribute__((used)) static int FUNC_4(struct irq_info *VAR_3,
         unsigned VAR_4,
         enum xen_irq_type VAR_5,
         unsigned VAR_6,
         unsigned short VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_3->type != VAR_0 && VAR_3->type != VAR_5);

 VAR_3->type = VAR_5;
 VAR_3->irq = VAR_4;
 VAR_3->evtchn = VAR_6;
 VAR_3->cpu = VAR_7;

 VAR_8 = FUNC_2(VAR_6, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_1(VAR_4, VAR_2|VAR_1);

 return FUNC_3(VAR_3);
}
