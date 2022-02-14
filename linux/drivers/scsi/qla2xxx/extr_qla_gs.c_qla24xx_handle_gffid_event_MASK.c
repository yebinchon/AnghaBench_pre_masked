
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_arg {int * fcport; } ;
typedef int scsi_qla_host_t ;
typedef int fc_port_t ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(scsi_qla_host_t *VAR_0, struct event_arg *VAR_1)
{
 fc_port_t *VAR_2 = VAR_1->fcport;

 FUNC_0(VAR_0, VAR_2);
}
