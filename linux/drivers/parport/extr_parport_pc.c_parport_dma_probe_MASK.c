
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_pc_private {scalar_t__ ecr; } ;
struct parport {scalar_t__ dma; struct parport_pc_private* private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct parport*) ;
 scalar_t__ FUNC_1 (struct parport*) ;

__attribute__((used)) static int FUNC_2(struct parport *VAR_1)
{
 const struct parport_pc_private *VAR_2 = VAR_1->private_data;
 if (VAR_2->ecr)
  VAR_1->dma = FUNC_1(VAR_1);
 if (VAR_1->dma == VAR_0) {



  VAR_1->dma = FUNC_0(VAR_1);
 }

 return VAR_1->dma;
}
