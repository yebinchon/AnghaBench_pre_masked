
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct niu {int port; int num_ldg; int num_rx_rings; int num_tx_rings; TYPE_1__* dev; int * irq_name; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (int ,char*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct niu *VAR_0)
{
 int VAR_1 = VAR_0->port;
 int VAR_2, VAR_3 = 1;

 FUNC_0(VAR_0->irq_name[0], "%s:MAC", VAR_0->dev->name);

 if (VAR_1 == 0) {
  FUNC_0(VAR_0->irq_name[1], "%s:MIF", VAR_0->dev->name);
  FUNC_0(VAR_0->irq_name[2], "%s:SYSERR", VAR_0->dev->name);
  VAR_3 = 3;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->num_ldg - VAR_3; VAR_2++) {
  if (VAR_2 < VAR_0->num_rx_rings)
   FUNC_0(VAR_0->irq_name[VAR_2+VAR_3], "%s-rx-%d",
    VAR_0->dev->name, VAR_2);
  else if (VAR_2 < VAR_0->num_tx_rings + VAR_0->num_rx_rings)
   FUNC_0(VAR_0->irq_name[VAR_2+VAR_3], "%s-tx-%d", VAR_0->dev->name,
    VAR_2 - VAR_0->num_rx_rings);
 }
}
