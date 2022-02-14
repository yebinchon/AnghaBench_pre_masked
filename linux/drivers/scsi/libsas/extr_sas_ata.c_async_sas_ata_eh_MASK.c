
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int shost; } ;
struct sas_ha_struct {TYPE_3__ core; } ;
struct TYPE_4__ {struct ata_port* ap; } ;
struct domain_device {TYPE_2__* port; TYPE_1__ sata_dev; } ;
struct ata_port {int dummy; } ;
typedef int async_cookie_t ;
struct TYPE_5__ {struct sas_ha_struct* ha; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ata_port*) ;
 int FUNC_1 (int ,struct domain_device*,char*) ;
 int FUNC_2 (struct domain_device*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, async_cookie_t VAR_2)
{
 struct domain_device *VAR_3 = VAR_1;
 struct ata_port *VAR_4 = VAR_3->sata_dev.ap;
 struct sas_ha_struct *VAR_5 = VAR_3->port->ha;

 FUNC_1(VAR_0, VAR_3, "dev error handler\n");
 FUNC_0(VAR_5->core.shost, VAR_4);
 FUNC_2(VAR_3);
}
