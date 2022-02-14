
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int nvme_del_done; scalar_t__ nvme_local_port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

void FUNC_5(struct scsi_qla_host *VAR_2)
{
 int VAR_3;

 if (!FUNC_0(VAR_0))
  return;

 if (VAR_2->nvme_local_port) {
  FUNC_1(&VAR_2->nvme_del_done);
  FUNC_3(VAR_1, VAR_2, 0x2116,
   "unregister localport=%p\n",
   VAR_2->nvme_local_port);
  VAR_3 = FUNC_2(VAR_2->nvme_local_port);
  if (VAR_3)
   FUNC_3(VAR_1, VAR_2, 0x2115,
       "Unregister of localport failed\n");
  else
   FUNC_4(&VAR_2->nvme_del_done);
 }
}
