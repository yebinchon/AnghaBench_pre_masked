
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_stopped; } ;
struct emac_instance {TYPE_1__ estats; } ;


 int FUNC_0 (struct emac_instance*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct emac_instance *VAR_1 = VAR_0;

 ++VAR_1->estats.rx_stopped;
 FUNC_0(VAR_1);
}
