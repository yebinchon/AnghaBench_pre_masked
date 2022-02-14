
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct sas_port {TYPE_1__ dev; } ;
struct TYPE_4__ {int kobj; } ;
struct sas_phy {TYPE_2__ dev; } ;


 char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct sas_port *VAR_0,
     struct sas_phy *VAR_1)
{
 FUNC_1(&VAR_0->dev.kobj, FUNC_0(&VAR_1->dev));
 FUNC_1(&VAR_1->dev.kobj, "port");
}
