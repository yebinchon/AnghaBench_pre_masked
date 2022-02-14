
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport_ip32_private {int irq_mode; int irq_complete; } ;
struct parport {TYPE_1__* cad; struct parport* physport; struct parport_ip32_private* private_data; } ;
struct TYPE_2__ {unsigned long timeout; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 () ;
 int FUNC_3 (struct parport*,int ,void*,size_t) ;
 int FUNC_4 (struct parport*) ;
 scalar_t__ FUNC_5 (struct parport*,unsigned long) ;
 int FUNC_6 (struct parport*,unsigned int,unsigned int) ;
 unsigned int FUNC_7 (struct parport*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static size_t FUNC_10(struct parport *VAR_7,
      const void *VAR_8, size_t VAR_9)
{
 struct parport_ip32_private * const VAR_10 = VAR_7->physport->private_data;
 struct parport * const VAR_11 = VAR_7->physport;
 unsigned long VAR_12;
 unsigned long VAR_13;
 size_t VAR_14;
 unsigned int VAR_15;

 VAR_10->irq_mode = VAR_5;

 FUNC_3(VAR_7, VAR_0, (void *)VAR_8, VAR_9);
 FUNC_8(&VAR_10->irq_complete);
 FUNC_6(VAR_7, VAR_1 | VAR_2, VAR_1);

 VAR_12 = FUNC_0((unsigned long)VAR_11->cad->timeout,
        FUNC_1(VAR_3));
 VAR_13 = VAR_6 + VAR_11->cad->timeout;
 while (1) {
  if (FUNC_5(VAR_7, VAR_13))
   break;
  FUNC_9(&VAR_10->irq_complete,
         VAR_12);
  VAR_15 = FUNC_7(VAR_7);
  if (VAR_15 & VAR_2)
   break;
 }
 FUNC_4(VAR_7);
 VAR_14 = VAR_9 - FUNC_2();

 VAR_10->irq_mode = VAR_4;

 return VAR_14;
}
