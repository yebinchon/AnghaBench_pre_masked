
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct sas_ha_struct {int disco_mutex; int state; } ;
struct sas_discovery_event {struct asd_sas_port* port; } ;
struct domain_device {int dev_type; } ;
struct TYPE_2__ {int pending; } ;
struct asd_sas_port {int id; TYPE_1__ disc; struct domain_device* port_dev; struct sas_ha_struct* ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ,...) ;
 int FUNC_5 (struct asd_sas_port*) ;
 int FUNC_6 (struct asd_sas_port*) ;
 int FUNC_7 (struct domain_device*) ;
 int FUNC_8 (struct asd_sas_port*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 struct sas_discovery_event* FUNC_11 (struct work_struct*) ;

__attribute__((used)) static void FUNC_12(struct work_struct *VAR_3)
{
 int VAR_4 = 0;
 struct sas_discovery_event *VAR_5 = FUNC_11(VAR_3);
 struct asd_sas_port *VAR_6 = VAR_5->port;
 struct sas_ha_struct *VAR_7 = VAR_6->ha;
 struct domain_device *VAR_8 = VAR_6->port_dev;


 FUNC_2(&VAR_7->disco_mutex);
 if (FUNC_10(VAR_1, &VAR_7->state)) {
  FUNC_4("REVALIDATION DEFERRED on port %d, pid:%d\n",
    VAR_6->id, FUNC_9(VAR_2));
  goto out;
 }

 FUNC_0(VAR_0, &VAR_6->disc.pending);

 FUNC_4("REVALIDATING DOMAIN on port %d, pid:%d\n", VAR_6->id,
   FUNC_9(VAR_2));

 if (VAR_8 && FUNC_1(VAR_8->dev_type))
  VAR_4 = FUNC_7(VAR_8);

 FUNC_4("done REVALIDATING DOMAIN on port %d, pid:%d, res 0x%x\n",
   VAR_6->id, FUNC_9(VAR_2), VAR_4);
 out:
 FUNC_3(&VAR_7->disco_mutex);

 FUNC_5(VAR_6);
 FUNC_6(VAR_6);
 FUNC_8(VAR_6);
}
