
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int nvme_del_done; int * nvme_local_port; } ;
struct nvme_fc_local_port {struct scsi_qla_host* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct nvme_fc_local_port *VAR_1)
{
 struct scsi_qla_host *VAR_2 = VAR_1->private;

 FUNC_1(VAR_0, VAR_2, 0x210f,
     "localport delete of %p completed.\n", VAR_2->nvme_local_port);
 VAR_2->nvme_local_port = ((void*)0);
 FUNC_0(&VAR_2->nvme_del_done);
}
