
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct imx_port {TYPE_1__ port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct imx_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct imx_port *VAR_3 = VAR_2;

 FUNC_1(&VAR_3->port.lock);
 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->port.lock);
 return VAR_0;
}
