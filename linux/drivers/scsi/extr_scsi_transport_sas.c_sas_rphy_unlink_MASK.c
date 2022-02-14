
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct sas_rphy {TYPE_1__ dev; } ;
struct sas_port {int * rphy; } ;


 struct sas_port* FUNC_0 (int ) ;

void FUNC_1(struct sas_rphy *VAR_0)
{
 struct sas_port *VAR_1 = FUNC_0(VAR_0->dev.parent);

 VAR_1->rphy = ((void*)0);
}
