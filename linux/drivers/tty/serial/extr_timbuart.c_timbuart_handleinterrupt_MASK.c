
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ membase; } ;
struct timbuart_port {int tasklet; TYPE_1__ port; int last_ier; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct timbuart_port *VAR_6 = (struct timbuart_port *)VAR_5;

 if (FUNC_1(VAR_6->port.membase + VAR_3)) {
  VAR_6->last_ier = FUNC_0(VAR_6->port.membase + VAR_2);


  FUNC_2(0, VAR_6->port.membase + VAR_2);


  FUNC_3(&VAR_6->tasklet);

  return VAR_0;
 } else
  return VAR_1;
}
