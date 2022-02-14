
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_pc_private {scalar_t__ ecr; } ;
struct parport {scalar_t__ irq; int modes; struct parport_pc_private* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct parport*) ;
 scalar_t__ FUNC_1 (struct parport*) ;
 scalar_t__ FUNC_2 (struct parport*) ;
 void* FUNC_3 (struct parport*) ;
 scalar_t__ FUNC_4 (struct parport*) ;
 scalar_t__ FUNC_5 (struct parport*) ;

__attribute__((used)) static int FUNC_6(struct parport *VAR_2)
{
 struct parport_pc_private *VAR_3 = VAR_2->private_data;

 if (VAR_3->ecr) {
  VAR_2->irq = FUNC_5(VAR_2);

  if (VAR_2->irq == VAR_0)
   VAR_2->irq = FUNC_2(VAR_2);
 }

 if ((VAR_2->irq == VAR_0) && VAR_3->ecr &&
     (VAR_2->modes & VAR_1))
  VAR_2->irq = FUNC_3(VAR_2);

 FUNC_0(VAR_2);

 if (VAR_2->irq == VAR_0 && (VAR_2->modes & VAR_1))
  VAR_2->irq = FUNC_3(VAR_2);

 FUNC_0(VAR_2);

 if (VAR_2->irq == VAR_0)
  VAR_2->irq = FUNC_4(VAR_2);

 if (VAR_2->irq == VAR_0)
  VAR_2->irq = FUNC_1(VAR_2);

 return VAR_2->irq;
}
