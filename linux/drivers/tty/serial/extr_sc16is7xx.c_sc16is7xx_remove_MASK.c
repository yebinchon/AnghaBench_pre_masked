
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sc16is7xx_port {int clk; int kworker_task; int kworker; TYPE_2__* p; TYPE_1__* devtype; int gpio; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int line; } ;
struct TYPE_6__ {TYPE_3__ port; } ;
struct TYPE_5__ {int nr_uart; scalar_t__ nr_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 struct sc16is7xx_port* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_8 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_2)
{
 struct sc16is7xx_port *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;






 for (VAR_4 = 0; VAR_4 < VAR_3->devtype->nr_uart; VAR_4++) {
  FUNC_8(&VAR_1, &VAR_3->p[VAR_4].port);
  FUNC_1(VAR_3->p[VAR_4].port.line, &VAR_0);
  FUNC_7(&VAR_3->p[VAR_4].port, 0);
 }

 FUNC_5(&VAR_3->kworker);
 FUNC_6(VAR_3->kworker_task);

 if (!FUNC_0(VAR_3->clk))
  FUNC_2(VAR_3->clk);

 return 0;
}
