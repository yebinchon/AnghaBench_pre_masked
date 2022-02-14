
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct sci_port {TYPE_1__ port; int * clks; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sci_port *VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_1->port.dev)
  return;

 for (VAR_2 = VAR_0; VAR_2-- > 0; )
  FUNC_0(VAR_1->clks[VAR_2]);

 FUNC_1(VAR_1->port.dev);
}
