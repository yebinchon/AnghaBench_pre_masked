
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int host_attrs; } ;
struct srp_internal {int rport_attr_cont; TYPE_1__ t; } ;
struct scsi_transport_template {int dummy; } ;


 int FUNC_0 (struct srp_internal*) ;
 struct srp_internal* FUNC_1 (struct scsi_transport_template*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct scsi_transport_template *VAR_0)
{
 struct srp_internal *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->t.host_attrs);
 FUNC_2(&VAR_1->rport_attr_cont);

 FUNC_0(VAR_1);
}
