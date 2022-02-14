
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_transport_template {int dummy; } ;
struct TYPE_2__ {int host_attrs; } ;
struct sas_internal {int expander_attr_cont; int end_dev_attr_cont; int rphy_attr_cont; int port_attr_cont; int phy_attr_cont; TYPE_1__ t; } ;


 int FUNC_0 (struct sas_internal*) ;
 struct sas_internal* FUNC_1 (struct scsi_transport_template*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct scsi_transport_template *VAR_0)
{
 struct sas_internal *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->t.host_attrs);
 FUNC_2(&VAR_1->phy_attr_cont);
 FUNC_2(&VAR_1->port_attr_cont);
 FUNC_2(&VAR_1->rphy_attr_cont);
 FUNC_2(&VAR_1->end_dev_attr_cont);
 FUNC_2(&VAR_1->expander_attr_cont);

 FUNC_0(VAR_1);
}
