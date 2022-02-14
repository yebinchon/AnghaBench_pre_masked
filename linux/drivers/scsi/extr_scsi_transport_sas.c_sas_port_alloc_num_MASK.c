
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_rphy {int dummy; } ;
struct sas_port {int dummy; } ;
struct sas_host_attrs {int lock; int next_port_id; } ;
struct sas_expander_device {int next_port_id; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 struct sas_rphy* FUNC_0 (struct device*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sas_expander_device* FUNC_4 (struct sas_rphy*) ;
 struct sas_port* FUNC_5 (struct device*,int) ;
 scalar_t__ FUNC_6 (struct device*) ;
 struct sas_host_attrs* FUNC_7 (struct Scsi_Host*) ;

struct sas_port *FUNC_8(struct device *VAR_0)
{
 int VAR_1;
 struct Scsi_Host *VAR_2 = FUNC_1(VAR_0);
 struct sas_host_attrs *VAR_3 = FUNC_7(VAR_2);


 FUNC_2(&VAR_3->lock);
 if (FUNC_6(VAR_0)) {
  struct sas_rphy *VAR_4 = FUNC_0(VAR_0);
  struct sas_expander_device *VAR_5 = FUNC_4(VAR_4);

  VAR_1 = VAR_5->next_port_id++;
 } else
  VAR_1 = VAR_3->next_port_id++;
 FUNC_3(&VAR_3->lock);
 return FUNC_5(VAR_0, VAR_1);
}
