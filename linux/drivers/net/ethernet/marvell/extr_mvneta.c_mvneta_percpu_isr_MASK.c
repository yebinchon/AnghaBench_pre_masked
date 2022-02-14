
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvneta_pcpu_port {int napi; TYPE_2__* pp; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct mvneta_pcpu_port *VAR_3 = (struct mvneta_pcpu_port *)VAR_2;

 FUNC_0(VAR_3->pp->dev->irq);
 FUNC_1(&VAR_3->napi);

 return VAR_0;
}
