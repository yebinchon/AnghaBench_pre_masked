
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr; } ;
struct sccnxp_port {int regulator; TYPE_1__ uart; int * port; int timer; int irq; int poll; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,struct sccnxp_port*) ;
 struct sccnxp_port* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 int VAR_1;
 struct sccnxp_port *VAR_2 = FUNC_3(VAR_0);

 if (!VAR_2->poll)
  FUNC_2(&VAR_0->dev, VAR_2->irq, VAR_2);
 else
  FUNC_1(&VAR_2->timer);

 for (VAR_1 = 0; VAR_1 < VAR_2->uart.nr; VAR_1++)
  FUNC_5(&VAR_2->uart, &VAR_2->port[VAR_1]);

 FUNC_6(&VAR_2->uart);

 if (!FUNC_0(VAR_2->regulator))
  return FUNC_4(VAR_2->regulator);

 return 0;
}
