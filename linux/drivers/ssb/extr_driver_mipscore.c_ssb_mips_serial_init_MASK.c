
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_mipscore {int nr_serial_ports; int serial_ports; TYPE_1__* dev; } ;
struct ssb_bus {int chipco; int extif; } ;
struct TYPE_2__ {struct ssb_bus* bus; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct ssb_mipscore *VAR_0)
{
 struct ssb_bus *VAR_1 = VAR_0->dev->bus;

 if (FUNC_2(&VAR_1->extif))
  VAR_0->nr_serial_ports = FUNC_3(&VAR_1->extif, VAR_0->serial_ports);
 else if (FUNC_0(&VAR_1->chipco))
  VAR_0->nr_serial_ports = FUNC_1(&VAR_1->chipco, VAR_0->serial_ports);
 else
  VAR_0->nr_serial_ports = 0;
}
